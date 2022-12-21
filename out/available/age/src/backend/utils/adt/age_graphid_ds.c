#define F_PG_CONTROL_RECOVERY 3443
#define DatumGetByteaP(X) ((bytea *) PG_DETOAST_DATUM(X))
#define F_PG_STAT_GET_MOD_SINCE_ANALYZE 3177
#define PG_INT8_MAX (0x7F)
#define F_INT8_CASH 3812
#define F_AREAJOINSEL 140
#define ENTRY_ID_MIN INT64CONST(1)
#define F_PG_EXTENSION_CONFIG_DUMP 3086
#define IPV6_RTHDR_TYPE_0 0
#define F_IN_RANGE_INT2_INT2 4132
#define F_INT2UP 1911
#define F_TINTERVALSAME 263
#define F_ORDERED_SET_TRANSITION 3970
#define F_RECORD_SEND 2403
#define PG_GETARG_POINTER(n) DatumGetPointer(PG_GETARG_DATUM(n))
#define __SSP_STRONG__ 3
#define F_BOOLSEND 2437
#define F_NUMERIC_OUT 1702
#define __attr_access(x) __attribute__ ((__access__ x))
#define CppAsString(identifier) #identifier
#define __DBL_MIN_EXP__ (-1021)
#define F_CLOSE_PL 961
#define F_REGOPERRECV 2448
#define F_JSONB_OBJECT_FIELD 3478
#define EAI_INPROGRESS -100
#define __LDBL_MANT_DIG__ 113
#define ERRCODE_AMBIGUOUS_COLUMN MAKE_SQLSTATE('4','2','7','0','2')
#define F_GIST_POINT_FETCH 3282
#define ERRCODE_DUPLICATE_ALIAS MAKE_SQLSTATE('4','2','7','1','2')
#define ItemPointerGetOffsetNumberNoCheck(pointer) ( (pointer)->ip_posid )
#define F_XIDEQ 68
#define StrNCpy(dst,src,len) do { char * _dst = (dst); Size _len = (len); if (_len > 0) { strncpy(_dst, (src), _len); _dst[_len-1] = '\0'; } } while (0)
#define F_PERCENTILE_CONT_INTERVAL_FINAL 3977
#define STATUS_EOF (-2)
#define F_MACADDR_EQ 830
#define F_TS_HEADLINE_BYID 3744
#define F_JSON_OBJECT 3202
#define F_BYTEACMP 1954
#define ERRCODE_FDW_DYNAMIC_PARAMETER_VALUE_NEEDED MAKE_SQLSTATE('H','V','0','0','2')
#define F_JSONB_INT4 3451
#define F_JSONB_CONTAINED 4050
#define F_PERCENTILE_CONT_INTERVAL_MULTI_FINAL 3983
#define ERRCODE_INVALID_CURSOR_STATE MAKE_SQLSTATE('2','4','0','0','0')
#define F_JSONB_INT8 3452
#define F_HAS_LANGUAGE_PRIVILEGE_ID_NAME 2264
#define F_ARRAY_LE 393
#define F_PG_GET_SERIAL_SEQUENCE 1665
#define ERRCODE_OPERATOR_INTERVENTION MAKE_SQLSTATE('5','7','0','0','0')
#define F_PG_ADVISORY_XACT_LOCK_SHARED_INT8 3090
#define F_PG_GET_VIEWDEF 1641
#define NO_ADDRESS NO_DATA
#define F_ARRAY_LT 391
#define __UINT_LEAST16_MAX__ 0xffff
#define F_INTERVAL_OUT 1161
#define _STDBOOL_H 
#define F_GINARRAYCONSISTENT 2744
#define F_PG_STAT_GET_BGWRITER_TIMED_CHECKPOINTS 2769
#define __ARM_SIZEOF_WCHAR_T 4
#define F_TXID_VISIBLE_IN_SNAPSHOT 2948
#define IP_ROUTER_ALERT 5
#define HAVE_STRING_H 1
#define F_CASH_RECV 2492
#define __DBL_DECIMAL_DIG__ 17
#define __ATOMIC_ACQUIRE 2
#define Float4GetDatumFast(X) Float4GetDatum(X)
#define CMSG_NXTHDR(mhdr,cmsg) __cmsg_nxthdr (mhdr, cmsg)
#define F_BINARY_UPGRADE_SET_NEXT_TOAST_PG_CLASS_OID 3588
#define __FLT128_MAX_10_EXP__ 4932
#define F_ON_PPATH 137
#define F_JSON_BUILD_ARRAY 3198
#define F_HAS_TABLE_PRIVILEGE_NAME 1926
#define GAI_WAIT 0
#define IP_DEFAULT_MULTICAST_TTL 1
#define F_PG_RELATION_IS_UPDATABLE 3842
#define F_BOX_OVERBELOW 2563
#define F_BTBOOLCMP 1693
#define F_NUMERIC_FLOAT8 1746
#define __off64_t_defined 
#define IP_PMTUDISC_OMIT 5
#define SOL_LLC 268
#define ItemPointerCopy(fromPointer,toPointer) ( AssertMacro(PointerIsValid(toPointer)), AssertMacro(PointerIsValid(fromPointer)), *(toPointer) = *(fromPointer) )
#define F_MACADDR_GT 833
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define F_WINDOW_NTH_VALUE 3114
#define F_GTSVECTOR_COMPRESS 3648
#define F_PG_CONTROL_CHECKPOINT 3442
#define F_INTER_SB 373
#define AF_APPLETALK PF_APPLETALK
#define F_INT2VECTORSEND 2411
#define F_POINT_BELOW 134
#define VARATT_IS_EXTERNAL_ONDISK(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_ONDISK)
#define INT64CONST(x) (x ##L)
#define F_ARRAY_NE 390
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define F_TIMETZ_LT 1354
#define F_PG_STAT_GET_DB_BLOCKS_HIT 1945
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#define F_PG_ADVISORY_UNLOCK_INT8 2884
#define __UINT_LEAST8_TYPE__ unsigned char
#define USE_LLVM 1
#define _T_WCHAR_ 
#define F_DFLOOR 2309
#define EUNATCH 49
#define SOL_ATM 264
#define F_ICREGEXNESEL 1823
#define ERRCODE_UNTRANSLATABLE_CHARACTER MAKE_SQLSTATE('2','2','P','0','5')
#define F_IN_RANGE_INT2_INT8 4130
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define F_CIRCLE_BOX 1480
#define ERRCODE_E_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','2')
#define NI_MAXSERV 32
#define ERRCODE_CONNECTION_DOES_NOT_EXIST MAKE_SQLSTATE('0','8','0','0','3')
#define F_NUMRANGE_SUBDIFF 3924
#define INT_LEAST16_MIN (-32767-1)
#define restrict __restrict__
#define F_SHA512_BYTEA 3422
#define USE_ICU 1
#define IPPROTO_IP IPPROTO_IP
#define F_BYTEAEQ 1948
#define F_FLOAT48DIV 280
#define SO_KEEPALIVE 9
#define AF_PPPOX PF_PPPOX
#define _NETINET_IN_H 1
#define ENOCSI 50
#define __stub___compat_get_kernel_syms 
#define SO_SNDBUF 7
#define F_REGTYPEIN 2220
#define F_PG_ADVISORY_XACT_LOCK_SHARED_INT4 3094
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define F_TIME_MI_INTERVAL 1748
#define F_ARRAY_TO_TEXT 395
#define ATTNUM_H 
#define F_PG_GET_MULTIXACT_MEMBERS 3819
#define F_PATH_N_LE 985
#define __S64_TYPE long int
#define BlockIdCopy(toBlockId,fromBlockId) ( AssertMacro(PointerIsValid(toBlockId)), AssertMacro(PointerIsValid(fromBlockId)), (toBlockId)->bi_hi = (fromBlockId)->bi_hi, (toBlockId)->bi_lo = (fromBlockId)->bi_lo )
#define _PRINTF_NAN_LEN_MAX 4
#define __FLT128_DIG__ 33
#define PG_BINARY_W "w"
#define F_PG_BACKUP_START_TIME 3814
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define __stub_fchflags 
#define __SQUAD_TYPE long int
#define PG_RETURN_OID(x) return ObjectIdGetDatum(x)
#define F_PG_SIZE_BYTES 3334
#define F_TIME_GE 1105
#define PG_GETARG_VARLENA_PP(n) PG_DETOAST_DATUM_PACKED(PG_GETARG_DATUM(n))
#define __INTMAX_C(c) c ## L
#define F_NUMERIC_SEND 2461
#define F_JSON_ARRAY_LENGTH 3956
#define F_REGEXP_SPLIT_TO_ARRAY_NO_FLAGS 2767
#define _BITS_FLOATN_COMMON_H 
#define ERRCODE_INVALID_ARGUMENT_FOR_NTILE MAKE_SQLSTATE('2','2','0','1','4')
#define F_IN_RANGE_INT4_INT8 4127
#define __GNU_LIBRARY__ 6
#define IPPROTO_MTP IPPROTO_MTP
#define F_SET_CONFIG_BY_NAME 2078
#define DatumGetBpCharPCopy(X) ((BpChar *) PG_DETOAST_DATUM_COPY(X))
#define F_SCHEMA_TO_XML_AND_XMLSCHEMA 2935
#define F_JSONB_HASH 4045
#define F_BYTEAGT 1951
#define F_SPG_RANGE_QUAD_CHOOSE 3470
#define ACCEPT_TYPE_ARG1 int
#define ERRCODE_INVALID_XML_COMMENT MAKE_SQLSTATE('2','2','0','0','S')
#define F_INTERVAL_SCALE 1200
#define _VA_LIST_T_H 
#define F_TIME_NE 1106
#define INDEX_MAX_KEYS 32
#define __CHAR_BIT__ 8
#define F_JSONB_BUILD_ARRAY 3271
#define __FSWORD_T_TYPE __SWORD_TYPE
#define F_REGTYPERECV 2454
#define USE_OPENSSL 1
#define TrapMacro(condition,errorType) (true)
#define SOL_RDS 276
#define F_GTSQUERY_UNION 3698
#define SHORTALIGN(LEN) TYPEALIGN(ALIGNOF_SHORT, (LEN))
#define EAFNOSUPPORT 97
#define F_MACADDR_LE 832
#define F_PG_TRY_ADVISORY_XACT_LOCK_SHARED_INT8 3092
#define F_PG_STAT_GET_DB_TUPLES_INSERTED 2760
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define F_PG_STAT_GET_BACKEND_PID 1937
#define F_TIME_OUT 1144
#define F_INTERVAL_FINITE 1390
#define EREMCHG 78
#define F_TSQUERY_NUMNODE 3672
#define ERRCODE_DUPLICATE_COLUMN MAKE_SQLSTATE('4','2','7','0','1')
#define PG_VERSION_STR "PostgreSQL 11.18 (Ubuntu 11.18-1.pgdg22.04+1) on aarch64-unknown-linux-gnu, compiled by gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0, 64-bit"
#define F_HAS_FUNCTION_PRIVILEGE_ID_NAME 2258
#define F_INT2OUT 39
#define EEXIST 17
#define F_PG_STAT_GET_BGWRITER_BUF_WRITTEN_CLEAN 2772
#define F_TS_PARSE_BYID 3715
#define ACCEPT_TYPE_RETURN int
#define __attribute_pure__ __attribute__ ((__pure__))
#define F_TEXT_FORMAT_NV 3540
#define EACCES 13
#define F_TSVECTORRECV 3639
#define __UINT8_MAX__ 0xff
#define F_INT24EQ 158
#define F_BYTEAIN 1244
#define F_BE_LO_EXPORT 765
#define F_INT2UM 213
#define F_FLOAT8_COVAR_SAMP 2816
#define IPPROTO_UDP IPPROTO_UDP
#define F_PT_CONTAINED_POLY 1429
#define SOCK_RAW SOCK_RAW
#define IPV6_PMTUDISC_INTERFACE 4
#define PG_DIAG_MESSAGE_PRIMARY 'M'
#define F_LINE_SEND 2489
#define HAVE_GETOPT 1
#define F_TINTERVALLENGE 271
#define F_RANGE_CONTAINS 3859
#define WCHAR_MAX __WCHAR_MAX
#define F_PG_LSN_RECV 3238
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define EDESTADDRREQ 89
#define F_PG_IMPORT_SYSTEM_COLLATIONS 3445
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define F_ARRAY_LENGTH 2176
#define F_BOX_SUB 1423
#define F_INT8RECV 2408
#define F_IN_RANGE_FLOAT4_FLOAT8 4140
#define F_PG_RELATION_SIZE 2332
#define HAVE_UUID_E2FS 1
#define F_MACADDR_NE 835
#define __sigset_t_defined 1
#define __SIZEOF_PTHREAD_ATTR_T 64
#define ERRCODE_DATA_EXCEPTION MAKE_SQLSTATE('2','2','0','0','0')
#define F_PG_IDENTIFY_OBJECT_AS_ADDRESS 3382
#define PG_RE_THROW() pg_re_throw()
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define F_SPG_KD_INNER_CONSISTENT 4026
#define F_NUMERIC_POLY_AVG 3389
#define __LC_NAME 8
#define F_LINE_IN 1490
#define F_PG_NOTIFY 3036
#define F_INET_ABBREV 598
#define IP_TTL 2
#define F_SPG_BOX_QUAD_PICKSPLIT 5014
#define INT8_MAX (127)
#define UInt64GetDatum(X) ((Datum) (X))
#define F_REGPROCIN 44
#define HAVE_STDLIB_H 1
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define F_BYTEASEND 2413
#define F_PG_STAT_GET_DB_BLOCKS_FETCHED 1944
#define F_WINDOW_ROW_NUMBER 3100
#define F_PG_LSN_CMP 3251
#define F_OVERLAPS_TIME 1308
#define __HAVE_FLOAT16 0
#define stderr stderr
#define F_MACADDR_OR 3146
#define F_POLY_CENTER 227
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define F_HAS_COLUMN_PRIVILEGE_NAME_NAME_NAME 3012
#define ERRCODE_TOO_MANY_ROWS MAKE_SQLSTATE('P','0','0','0','3')
#define DEBUG5 10
#define LC_ALL __LC_ALL
#define F_VARCHAR 669
#define F_TIME_LT 1102
#define elog(elevel,...) do { elog_start(__FILE__, __LINE__, PG_FUNCNAME_MACRO); elog_finish(elevel, __VA_ARGS__); if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define _XOPEN_SOURCE 700
#define UINT_LEAST32_WIDTH 32
#define EILSEQ 84
#define ERRCODE_INVALID_TRANSACTION_INITIATION MAKE_SQLSTATE('0','B','0','0','0')
#define F_TIMETZ_SCALE 1969
#define F_INT4SHL 1902
#define F_HAS_TYPE_PRIVILEGE_ID_ID 3141
#define F_BYTEALT 1949
#define ESPIPE 29
#define SOCK_RDM SOCK_RDM
#define __STDLIB_MB_LEN_MAX 16
#define SO_TIMESTAMPNS_OLD 35
#define F_DATE_NE_TIMESTAMP 2343
#define F_INT48MUL 1280
#define INT32_MIN (-2147483647-1)
#define ERRCODE_TRANSACTION_ROLLBACK MAKE_SQLSTATE('4','0','0','0','0')
#define F_PG_LOGICAL_SLOT_PEEK_BINARY_CHANGES 3785
#define F_FTOI8 653
#define EPERM 1
#define __OFF_T_MATCHES_OFF64_T 1
#define ERRCODE_SYNTAX_ERROR_OR_ACCESS_RULE_VIOLATION MAKE_SQLSTATE('4','2','0','0','0')
#define F_TEXT_SUBSTR 877
#define F_TS_RANKCD_TT 3710
#define F_TO_TSQUERY 3750
#define F_TIMESTAMP_LT_TIMESTAMPTZ 2520
#define iscntrl(c) __isctype((c), _IScntrl)
#define EMLINK 31
#define F_HAS_TABLESPACE_PRIVILEGE_ID_ID 2393
#define UINT_FAST16_WIDTH __WORDSIZE
#define IP_MAX_MEMBERSHIPS 20
#define F_TIME_GT 1104
#define F_CIRCLE_DIV_PT 1149
#define AI_NUMERICSERV 0x0400
#define IPV6_PMTUDISC_WANT 1
#define HAVE_STRUCT_ADDRINFO 1
#define USE_STDBOOL 1
#define F_VOID_SEND 3121
#define F_NAMEICREGEXEQ 1240
#define PG_INT32_MAX (0x7FFFFFFF)
#define F_BYTEANE 1953
#define F_ACLREMOVE 1036
#define F_TINTERVALLENGT 269
#define __WCHAR_MAX__ 0xffffffffU
#define VARATT_IS_1B_E(PTR) ((((varattrib_1b *) (PTR))->va_header) == 0x01)
#define SOL_PPPOL2TP 273
#define AF_IB PF_IB
#define F_RANGE_CONSTRUCTOR3 3841
#define ERRCODE_ARRAY_ELEMENT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define SO_NETNS_COOKIE 71
#define F_PG_REPLICATION_ORIGIN_CREATE 6003
#define INT16_MAX (32767)
#define F_SHA384_BYTEA 3421
#define F_JSON_ARRAY_ELEMENT 3949
#define HAVE_GCC__SYNC_INT32_TAS 1
#define F_HAS_COLUMN_PRIVILEGE_NAME_ID_NAME 3014
#define IPV6_NEXTHOP 9
#define PG_RETURN_CHAR(x) return CharGetDatum(x)
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define PG_RETURN_TEXT_P(x) PG_RETURN_POINTER(x)
#define F_NETWORK_GE 924
#define __STATFS_MATCHES_STATFS64 1
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define F_OIDSMALLER 1966
#define EAI_INTR -104
#define F_BTTEXTCMP 360
#define WIFEXITED(status) __WIFEXITED (status)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define AF_MCTP PF_MCTP
#define HAVE_PG_ATTRIBUTE_NORETURN 1
#define F_NUMERIC_INT8 1779
#define F_INDEX_AM_HANDLER_OUT 327
#define F_REGPROCOUT 45
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define F_SPG_QUAD_PICKSPLIT 4020
#define F_SPGHANDLER 334
#define htons(x) __bswap_16 (x)
#define F_REGPROCRECV 2444
#define F_PG_RELATION_FILEPATH 3034
#define HAVE_WORKING_LINK 1
#define __GCC_IEC_559 2
#define SO_PEERCRED 17
#define AG_GRAPHID_H 
#define IP_UNBLOCK_SOURCE 37
#define F_PG_ADVISORY_LOCK_SHARED_INT4 2887
#define F_VOID_IN 2298
#define MCAST_LEAVE_SOURCE_GROUP 47
#define __LITTLE_ENDIAN 1234
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define __FLT32X_DECIMAL_DIG__ 17
#define _IOFBF 0
#define IPV6_IPSEC_POLICY 34
#define F_SPG_BOX_QUAD_CHOOSE 5013
#define F_HASH_ARRAY 626
#define F_INT24LE 166
#define CMSG_LEN(len) (CMSG_ALIGN (sizeof (struct cmsghdr)) + (len))
#define F_TXID_SNAPSHOT_RECV 2941
#define ERRCODE_INVALID_XML_PROCESSING_INSTRUCTION MAKE_SQLSTATE('2','2','0','0','T')
#define __FLT_EVAL_METHOD__ 0
#define EAI_NONAME -2
#define F_OIDIN 1798
#define PointerGetDatum(X) ((Datum) (X))
#define F_INT24LT 160
#define PACKAGE_BUGREPORT "pgsql-bugs@postgresql.org"
#define F_DATE_GT_TIMESTAMPTZ 2354
#define F_TIMETZ_OUT 1351
#define F_DATE_PLI 1141
#define _IO_USER_LOCK 0x8000
#define F_CIRCLE_CONTAIN 1453
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define AF_INET6 PF_INET6
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define IPV6_2292HOPOPTS 3
#define F_HASHVARLENAEXTENDED 772
#define IP_DEFAULT_MULTICAST_LOOP 1
#define F_GENERATE_SERIES_NUMERIC 3260
#define INT_LEAST32_WIDTH 32
#define F_INT8MOD 945
#define F_CIDIN 52
#define F_VARBIT_OUT 1580
#define F_FLOAT8_TIMESTAMPTZ 1158
#define Max(x,y) ((x) > (y) ? (x) : (y))
#define SO_SELECT_ERR_QUEUE 45
#define F_INT4SMALLER 769
#define __FLT64_DECIMAL_DIG__ 17
#define F_TIMETZ_LARGER 1379
#define GRAPHIDOID get_GRAPHIDOID()
#define F_INT4RECV 2406
#define F_INT24MUL 170
#define HAVE_SYSLOG 1
#define IPV6_PMTUDISC_PROBE 3
#define F_LSEG_LENGTH 1487
#define F_PT_CONTAINED_CIRCLE 1478
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define F_NUMERIC_LN 1734
#define pg_attribute_printf(f,a) __attribute__((format(PG_PRINTF_ATTRIBUTE, f, a)))
#define F_INT42LE 167
#define palloc0_array(type,count) ((type *) palloc0(sizeof(type) * (count)))
#define __LC_CTYPE 0
#define F_TIMESTAMPTZ_TRUNC 1217
#define ERRCODE_E_R_I_E_EVENT_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','3')
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define F_INET_IN 910
#define F_IN_RANGE_TIMESTAMPTZ_INTERVAL 4135
#define __HAVE_FLOAT64 1
#define F_TSQ_MCONTAINED 3692
#define F_TSVECTOR_UPDATE_TRIGGER_BYID 3752
#define F_BITNOT 1676
#define F_INTERVAL_SMALLER 1197
#define F_BPCHARSEND 2431
#define F_BOX_ABOVE_EQ 115
#define F_ARRAY_TO_TEXT_NULL 384
#define F_BITXOR 1675
#define F_GETDATABASEENCODING 1039
#define F_TSQUERY_OR 3670
#define F_TEXT_FORMAT 3539
#define IP_UNICAST_IF 50
#define F_TIME_INTERVAL 1370
#define F_NAMEEQ 62
#define F_HAS_SCHEMA_PRIVILEGE_NAME 2272
#define F_BOOLNE 84
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define F_FLOAT8_REGR_SXX 2807
#define F_PG_STAT_GET_LAST_AUTOVACUUM_TIME 2782
#define is_nonwindows_absolute_path(filename) ( IS_NONWINDOWS_DIR_SEP((filename)[0]) )
#define PG_MAGIC_FUNCTION_NAME Pg_magic_func
#define HAVE_POLL_H 1
#define F_BYTEAGE 1952
#define F_JSON_OBJECT_FIELD 3947
#define HAVE_TM_ZONE 1
#define F_INET_OUT 911
#define F_SPG_TEXT_CHOOSE 4028
#define F_PG_IS_OTHER_TEMP_SCHEMA 2855
#define HAVE_SSL_GET_CURRENT_COMPRESSION 1
#define F_STRING_AGG_TRANSFN 3535
#define CharGetDatum(X) ((Datum) (X))
#define Int64GetDatumFast(X) Int64GetDatum(X)
#define VARTAG_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_tag)
#define PG_INT128_TYPE __int128
#define F_PG_SIZE_PRETTY_NUMERIC 3166
#define F_BOX_RECV 2484
#define F_SPG_QUAD_CONFIG 4018
#define HAVE_LIBREADLINE 1
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define F_GIN_EXTRACT_TSQUERY_5ARGS 3087
#define F_RANGE_OUT 3835
#define F_DISPELL_INIT 3731
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#define __UINT_FAST32_TYPE__ long unsigned int
#define MCAST_LEAVE_GROUP 45
#define F_DCOT 1607
#define F_PG_LAST_WAL_RECEIVE_LSN 3820
#define F_XPATH_EXISTS 3049
#define SOL_BLUETOOTH 274
#define F_PLAINTO_TSQUERY_BYID 3747
#define EOWNERDEAD 130
#define VARSIZE_1B(PTR) ((((varattrib_1b *) (PTR))->va_header >> 1) & 0x7F)
#define F_HYPOTHETICAL_CUME_DIST_FINAL 3991
#define F_BTINT8SORTSUPPORT 3131
#define F_NAMEGT 657
#define __CFLOAT128 _Complex _Float128
#define F_BTNAMESORTSUPPORT 3135
#define F_RECORD_IMAGE_GE 3186
#define F_TIMESTAMP_TRANSFORM 3917
#define F_VARCHARTYPMODIN 2915
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define F_JSONB_DELETE_PATH 3304
#define HAVE_LIBLDAP 1
#define __SIG_ATOMIC_TYPE__ int
#define F_LINE_INTERSECT 1495
#define F_PG_GET_VIEWDEF_EXT 2506
#define F_TIMESTAMPTZ_GT_TIMESTAMP 2530
#define F_DATAN2D 2734
#define F_PG_CURSOR 2511
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define HAVE_PTHREAD 1
#define F_GIST_POLY_CONSISTENT 2585
#define F_PG_GET_REPLICA_IDENTITY_INDEX 6120
#define F_TIMESTAMPTZ_NE_DATE 2382
#define UINT64_C(c) c ## UL
#define F_JSONB_SEND 3803
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN (-32767-1)
#define SIZEOF_BOOL 1
#define GAI_NOWAIT 1
#define ENOTTY 25
#define F_INTERNAL_OUT 2305
#define F_PG_TRY_ADVISORY_LOCK_INT8 2882
#define HAVE_ASN1_STRING_GET0_DATA 1
#define __FINITE_MATH_ONLY__ 0
#define __stub___compat_uselib 
#define F_BRINHANDLER 335
#define F_BITFROMINT8 2075
#define h_errno (*__h_errno_location ())
#define __id_t_defined 
#define _BITS_ERRNO_H 1
#define TRACE_SORT 1
#define F_PG_SHOW_REPLICATION_ORIGIN_STATUS 6014
#define PG_RETURN_FLOAT8(x) return Float8GetDatum(x)
#define ERRCODE_INVALID_NAME MAKE_SQLSTATE('4','2','6','0','2')
#define F_DATAN 1602
#define F_HAS_TABLE_PRIVILEGE_ID_NAME 1924
#define F_PG_ADVISORY_UNLOCK_SHARED_INT8 2885
#define F_NAMEIN 34
#define F_PERCENTILE_DISC_FINAL 3973
#define F_PG_OPTIONS_TO_TABLE 2289
#define F_HAS_LANGUAGE_PRIVILEGE_ID 2267
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define F_HAS_TABLE_PRIVILEGE_NAME_NAME 1922
#define F_INT8MUL 465
#define __FLT32X_MAX_EXP__ 1024
#define F_PG_WAL_LSN_DIFF 3165
#define VARATT_IS_4B_U(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x00)
#define F_NUMERIC_SIGN 1706
#define h_addr h_addr_list[0]
#define F_NUMERIC_POLY_SERIALIZE 3339
#define F_PG_GET_CONSTRAINTDEF_EXT 2508
#define EBADF 9
#define F_POINT_SLOPE 992
#define __socklen_t_defined 
#define F_PG_REPLICATION_ORIGIN_XACT_SETUP 6010
#define F_INT42GT 163
#define __LC_IDENTIFICATION 12
#define __u_char_defined 
#define AG_GETARG_GRAPHID(a) DATUM_GET_GRAPHID(PG_GETARG_DATUM(a))
#define F_RELTIME_INTERVAL 1177
#define F_ACLITEMOUT 1032
#define F_SHELL_IN 2398
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __pid_t_defined 
#define HAVE_DECL_F_FULLFSYNC 0
#define F_BYTEASETBIT 724
#define EADV 68
#define ERANGE 34
#define __GNUC_PATCHLEVEL__ 0
#define __FLT32_HAS_DENORM__ 1
#define ECANCELED 125
#define F_DIST_PL 725
#define IPV6_HOPOPTS 54
#define AF_FILE PF_FILE
#define F_PG_TABLESPACE_DATABASES 2556
#define ERRCODE_BRANCH_TRANSACTION_ALREADY_ACTIVE MAKE_SQLSTATE('2','5','0','0','2')
#define F_PG_CONVERT_TO 1717
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define F_SHELL_OUT 2399
#define F_SPG_BBOX_QUAD_CONFIG 5010
#define SO_SECURITY_AUTHENTICATION 22
#define SCM_SRCRT IPV6_RXSRCRT
#define F_TIMESTAMP_SEND 2475
#define ItemIdIsUsed(itemId) ((itemId)->lp_flags != LP_UNUSED)
#define F_INT8NE 468
#define _ASM_GENERIC_ERRNO_BASE_H 
#define F_RANGE_GIST_PICKSPLIT 3880
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define __LEAF , __leaf__
#define _THREAD_MUTEX_INTERNAL_H 1
#define F_GIST_BOX_SAME 2584
#define __LDBL_REDIR1(name,proto,alias) name proto
#define NameStr(name) ((name).data)
#define ERRCODE_EXTERNAL_ROUTINE_EXCEPTION MAKE_SQLSTATE('3','8','0','0','0')
#define _BITS_TYPES_LOCALE_T_H 1
#define UINT8_WIDTH 8
#define MSG_WAITALL MSG_WAITALL
#define F_PG_COLLATION_FOR 3162
#define ERRCODE_STRING_DATA_LENGTH_MISMATCH MAKE_SQLSTATE('2','2','0','2','6')
#define F_JSONB_DELETE_ARRAY 3343
#define F_XIDNEQ 3308
#define F_BPCHARTYPMODIN 2913
#define F_BTFLOAT84CMP 2195
#define F_NUMERIC_DIV_TRUNC 1973
#define F_FMGR_SQL_VALIDATOR 2248
#define PG_RETURN_UINT32(x) return UInt32GetDatum(x)
#define palloc_array(type,count) ((type *) palloc(sizeof(type) * (count)))
#define INT_FAST8_MAX (127)
#define F_ICREGEXEQSEL 1820
#define _WCHAR_T_DEFINED 
#define F_JSON_TO_TSVECTOR 4215
#define F_TIMESTAMP_CMP 1314
#define F_PG_LS_WALDIR 3354
#define F_PG_LOCK_STATUS 1371
#define F_PG_STAT_GET_XACT_TUPLES_DELETED 3042
#define HAVE_INT_OPTERR 1
#define F_ABSTIMELE 255
#define F_CHR 1621
#define _BITS_STRING_FORTIFIED_H 1
#define F_TEXT_SUBSTR_NO_LEN 883
#define ENOMEM 12
#define F_HAS_TYPE_PRIVILEGE_NAME_NAME 3138
#define __SIZEOF_PTHREAD_CONDATTR_T 8
#define __INT8_C(c) c
#define _BITS_TYPES_H 1
#define GET_LABEL_ID(id) (((uint64)id) >> ENTRY_ID_BITS)
#define BoolGetDatum(X) ((Datum) ((X) ? 1 : 0))
#define F_AMVALIDATE 338
#define F_TIMETZ_EQ 1352
#define BlockIdIsValid(blockId) ((bool) PointerIsValid(blockId))
#define F_ON_PL 959
#define F_PRSD_HEADLINE 3720
#define F_VARCHARSEND 2433
#define F_SCHEMA_TO_XML 2933
#define F_ON_PS 369
#define __INT_LEAST8_WIDTH__ 8
#define F_TIMESTAMPTZ_LE_TIMESTAMP 2528
#define __INTMAX_TYPE__ long int
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define F_INITCAP 872
#define F_SPG_RANGE_QUAD_INNER_CONSISTENT 3472
#define _ERRNO_H 1
#define F_PG_TIMEZONE_ABBREVS 2599
#define F_BITFROMINT4 1683
#define F_TSQUERY_PHRASE 5003
#define F_PG_REPLICATION_ORIGIN_SESSION_PROGRESS 6009
#define SO_INCOMING_NAPI_ID 56
#define repalloc_array(pointer,type,count) ((type *) repalloc(pointer, sizeof(type) * (count)))
#define ERRCODE_UNDEFINED_FILE MAKE_SQLSTATE('5','8','P','0','1')
#define MSG_PEEK MSG_PEEK
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define F_PG_LOGICAL_EMIT_MESSAGE_BYTEA 3578
#define ERRCODE_SYSTEM_ERROR MAKE_SQLSTATE('5','8','0','0','0')
#define F_INT4RANGE_SUBDIFF 3922
#define F_POLY_IN 347
#define F_PG_STAT_GET_BACKEND_CLIENT_ADDR 1392
#define htobe16(x) __bswap_16 (x)
#define F_NAME_TEXT 406
#define F_SMGRIN 760
#define F_INT8_AVG_COMBINE 2785
#define NO_RECOVERY 3
#define F_HASHTEXTEXTENDED 448
#define NFDBITS __NFDBITS
#define F_GIST_POINT_COMPRESS 1030
#define __SHRT_MAX__ 0x7fff
#define PANIC 22
#define __STDC_ISO_10646__ 201706L
#define F_TIMETZ_GE 1356
#define __LDBL_MAX__ 1.18973149535723176508575932662800702e+4932L
#define F_INT42DIV 173
#define USE_SYSTEMD 1
#define F_CIRCLE_RADIUS 1470
#define __ARM_FEATURE_IDIV 1
#define F_PATH_CENTER 226
#define F_POINT_SEND 2429
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __FLT64X_MAX_10_EXP__ 4932
#define F_BRIN_SUMMARIZE_RANGE 3999
#define IPPROTO_IGMP IPPROTO_IGMP
#define F_DACOSD 2732
#define IPPROTO_IDP IPPROTO_IDP
#define DatumGetTextPSlice(X,m,n) ((text *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define F_ENUM_FIRST 3528
#define F_RELTIMENE 258
#define F_CIRCLE_OVERBELOW 2587
#define EKEYREJECTED 129
#define F_SPG_QUAD_LEAF_CONSISTENT 4022
#define F_ON_SB 372
#define F_ON_SL 960
#define F_REGCONFIGSEND 3739
#define SOL_IPV6 41
#define IN_CLASSC_NET 0xffffff00
#define F_PG_STAT_GET_BLOCKS_HIT 1935
#define F_HAS_SEQUENCE_PRIVILEGE_ID_ID 2184
#define F_TO_JSONB 3787
#define F_TO_ASCII_DEFAULT 1845
#define F_MACADDR_LT 831
#define __LDBL_IS_IEC_60559__ 2
#define IP_MTU 14
#define SO_RCVTIMEO_OLD 20
#define ERRCODE_UNDEFINED_COLUMN MAKE_SQLSTATE('4','2','7','0','3')
#define F_INT2INT4_SUM 3572
#define F_DIST_LB 726
#define IPV6_HDRINCL 36
#define __ARM_FP 14
#define INT_FAST16_MAX (9223372036854775807L)
#define NSS_BUFLEN_PASSWD 1024
#define AF_ROSE PF_ROSE
#define __FLT64X_IS_IEC_60559__ 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define F_BE_LO_FROM_BYTEA 3457
#define SO_LINGER 13
#define F_TIMETZ_IN 1350
#define F_TIMESTAMP_MI 1188
#define F_RANGE_GIST_UNION 3876
#define F_GIN_CMP_TSLEXEME 3724
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define ERRCODE_FDW_UNABLE_TO_ESTABLISH_CONNECTION MAKE_SQLSTATE('H','V','0','0','N')
#define F_TSVECTOR_EQ 3618
#define LP_UNUSED 0
#define F_HAS_COLUMN_PRIVILEGE_ID_ID_NAME 3018
#define F_BPCHARRECV 2430
#define HAVE_STRONG_RANDOM 1
#define __FLT64X_HAS_QUIET_NAN__ 1
#define FirstOffsetNumber ((OffsetNumber) 1)
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define F_PG_STAT_GET_LIVE_TUPLES 2878
#define F_CIRCLE_CONTAIN_PT 1477
#define _RPC_NETDB_H 1
#define F_INT4NOT 1901
#define F_NETWORKJOINSEL 3561
#define SOCK_DCCP SOCK_DCCP
#define __WINT_TYPE__ unsigned int
#define CommandIdGetDatum(X) ((Datum) (X))
#define F_PG_ENCODING_TO_CHAR 1597
#define DEBUG2 13
#define __UINT_LEAST8_MAX__ 0xff
#define F_PG_CREATE_PHYSICAL_REPLICATION_SLOT 3779
#define F_INT4_CASH 3811
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define F_HAS_COLUMN_PRIVILEGE_NAME_NAME 3020
#define F_AGGREGATE_DUMMY 2050
#define F_SUPPRESS_REDUNDANT_UPDATES_TRIGGER 1291
#define F_HASHCHAR 454
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define PF_SECURITY 14
#define SearchSysCacheCopy2(cacheId,key1,key2) SearchSysCacheCopy(cacheId, key1, key2, 0, 0)
#define PG_GETARG_INT32(n) DatumGetInt32(PG_GETARG_DATUM(n))
#define F_PG_PREPARED_STATEMENT 2510
#define EAI_CANCELED -101
#define s6_addr16 __in6_u.__u6_addr16
#define F_TIME_PL_INTERVAL 1747
#define IPV6_2292DSTOPTS 4
#define CppAsString2(x) CppAsString(x)
#define F_CURSOR_TO_XMLSCHEMA 2928
#define PG_IOLBF _IOLBF
#define UInt8GetDatum(X) ((Datum) (X))
#define __UINTMAX_TYPE__ long unsigned int
#define EINPROGRESS 115
#define __HAVE_DISTINCT_FLOAT32X 0
#define UINTPTR_WIDTH __WORDSIZE
#define F_TIMESTAMP_NE_DATE 2369
#define SHUT_WR SHUT_WR
#define PG_DIAG_TABLE_NAME 't'
#define F_LSEG_IN 119
#define __ASM_GENERIC_BITS_PER_LONG 
#define F_POINT_IN 117
#define _STDC_PREDEF_H 1
#define ENABLE_THREAD_SAFETY 1
#define EL3HLT 46
#define VARATT_NOT_PAD_BYTE(PTR) (*((uint8 *) (PTR)) != 0)
#define HAVE_WCTYPE_H 1
#define F_TEXT_STARTS_WITH 3696
#define F_BTFLOAT4CMP 354
#define F_INT28GT 1853
#define F_TIMESTAMP_CMP_DATE 2370
#define PG_DIAG_SOURCE_LINE 'L'
#define SO_PREFER_BUSY_POLL 69
#define PF_MAX 46
#define ERRCODE_FDW_INVALID_DESCRIPTOR_FIELD_IDENTIFIER MAKE_SQLSTATE('H','V','0','9','1')
#define ERRCODE_EXCLUSION_VIOLATION MAKE_SQLSTATE('2','3','P','0','1')
#define __linux 1
#define F_HAS_SEQUENCE_PRIVILEGE_ID 2186
#define F_OIDEQ 184
#define AF_CAIF PF_CAIF
#define FunctionCall1(flinfo,arg1) FunctionCall1Coll(flinfo, InvalidOid, arg1)
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define ERRCODE_PLPGSQL_ERROR MAKE_SQLSTATE('P','0','0','0','0')
#define F_INTERVAL_CMP 1315
#define F_BTFLOAT8SORTSUPPORT 3133
#define F_DIST_PB 364
#define F_DIST_PC 1476
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define F_BOX_POLY 1448
#define __OPTIMIZE__ 1
#define ERRCODE_SUCCESSFUL_COMPLETION MAKE_SQLSTATE('0','0','0','0','0')
#define F_PG_LSN_EQ 3233
#define F_DIST_PS 363
#define AI_ADDRCONFIG 0x0020
#define F_BOX_OVERRIGHT 190
#define F_GIN_TSQUERY_CONSISTENT_6ARGS 3088
#define IN_CLASSB_NSHIFT 16
#define F_INT48EQ 852
#define PF_BLUETOOTH 31
#define __CHAR_UNSIGNED__ 1
#define F_CLOSE_LSEG 1489
#define F_ENUM_EQ 3508
#define PF_KEY 15
#define F_OIDVECTORTYPES 1349
#define SearchSysCacheExists4(cacheId,key1,key2,key3,key4) SearchSysCacheExists(cacheId, key1, key2, key3, key4)
#define AF_X25 PF_X25
#define AF_MAX PF_MAX
#define F_BE_LO_IMPORT_WITH_OID 767
#define F_TIME_HASH 1688
#define F_PG_STAT_GET_BACKEND_ACTIVITY_START 2094
#define F_JSON_IN 321
#define __UINT32_MAX__ 0xffffffffU
#define ERRCODE_INVALID_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','0','C')
#define F_LTRIM1 881
#define ERRCODE_S_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','2')
#define __UID_T_TYPE __U32_TYPE
#define F_PG_GET_REPLICATION_SLOTS 3781
#define F_CASH_MUL_INT2 866
#define F_HASHMACADDR8EXTENDED 781
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define F_PG_NDISTINCT_IN 3355
#define F_INET_CLIENT_ADDR 2196
#define PF_ATMPVC 8
#define ERRCODE_UNDEFINED_SCHEMA MAKE_SQLSTATE('3','F','0','0','0')
#define SO_TIMESTAMP_OLD 29
#define ERRCODE_DATETIME_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','0','8')
#define F_PG_RELOAD_CONF 2621
#define F_RANGE_OVERRIGHT 3866
#define F_JSON_ARRAY_ELEMENTS_TEXT 3969
#define __AARCH64_CMODEL_SMALL__ 1
#define PG_INT32_MIN (-0x7FFFFFFF-1)
#define HAVE_GETIFADDRS 1
#define F_RANGE_MINUS 3869
#define OffsetNumberIsValid(offsetNumber) ((bool) ((offsetNumber != InvalidOffsetNumber) && (offsetNumber <= MaxOffsetNumber)))
#define __SIZE_T 
#define F_INT4DIV 154
#define INT_FAST32_WIDTH __WORDSIZE
#define SO_WIFI_STATUS 41
#define OffsetNumberMask (0xffff)
#define CMSG_DATA(cmsg) ((cmsg)->__cmsg_data)
#define F_GTSVECTOR_CONSISTENT_OLDSIG 3790
#define F_INTERVAL_NE 1163
#define DatumGetHeapTupleHeaderCopy(X) ((HeapTupleHeader) PG_DETOAST_DATUM_COPY(X))
#define F_CIRCLE_EQ 1462
#define F_INT8_AVG_ACCUM_INV 3387
#define F_INET_SEND 2497
#define __LDBL_MAX_EXP__ 16384
#define LONGALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_LONG, (LEN))
#define AF_NETROM PF_NETROM
#define F_RI_FKEY_NOACTION_UPD 1655
#define ALIGNOF_DOUBLE 8
#define F_TEXTOVERLAY 1404
#define F_DATE_CMP_TIMESTAMPTZ 2357
#define ERRCODE_QUERY_CANCELED MAKE_SQLSTATE('5','7','0','1','4')
#define F_FLT4_MUL_CASH 848
#define F_TINTERVALIN 246
#define F_BINARY_UPGRADE_SET_NEXT_PG_TYPE_OID 3582
#define __INT_FAST32_WIDTH__ 64
#define _ATFILE_SOURCE 1
#define F_TS_RANKCD_WTTF 3707
#define F_POLY_CIRCLE 1474
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define __FLT128_MIN_EXP__ (-16381)
#define __GNUC_VA_LIST 
#define MSG_FIN MSG_FIN
#define F_NUMERIC_COMBINE 3341
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define F_TIDLARGER 2795
#define SO_NO_CHECK 11
#define F_ICNLIKEJOINSEL 1817
#define F_TSVECTOR_LE 3617
#define F_JSONB_TYPEOF 3210
#define F_CIRCLE_DISTANCE 1471
#define UINT_FAST64_WIDTH 64
#define F_PG_STAT_GET_DB_TEMP_FILES 3150
#define F_WINDOW_CUME_DIST 3104
#define INT_LEAST8_WIDTH 8
#define F_OIDVECTORLT 677
#define F_HAS_COLUMN_PRIVILEGE_NAME_ID_ATTNUM 3015
#define WUNTRACED 2
#define F_TIMESTAMP_EQ_DATE 2366
#define F_INT42LT 161
#define F_INT28LE 1854
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define F_BITSUBSTR 1680
#define F_INT28LT 1852
#define F_FLOAT4IN 200
#define F_JSONB_INT2 3450
#define F_REGTYPEOUT 2221
#define PG_GETARG_FLOAT4(n) DatumGetFloat4(PG_GETARG_DATUM(n))
#define PG_MODULE_MAGIC_DATA { sizeof(Pg_magic_struct), PG_VERSION_NUM / 100, FUNC_MAX_ARGS, INDEX_MAX_KEYS, NAMEDATALEN, FLOAT4PASSBYVAL, FLOAT8PASSBYVAL }
#define UINT16_C(c) c
#define F_ARRAYCONTAINS 2748
#define __always_inline __inline __attribute__ ((__always_inline__))
#define F_THESAURUS_INIT 3740
#define Int32GetDatum(X) ((Datum) (X))
#define ERRCODE_AMBIGUOUS_FUNCTION MAKE_SQLSTATE('4','2','7','2','5')
#define TYPEALIGN_DOWN(ALIGNVAL,LEN) (((uintptr_t) (LEN)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define F_PG_READ_FILE_V2 3293
#define F_CASH_PL 894
#define SO_BPF_EXTENSIONS 48
#define ERRCODE_TRIGGERED_ACTION_EXCEPTION MAKE_SQLSTATE('0','9','0','0','0')
#define InitFunctionCallInfoData(Fcinfo,Flinfo,Nargs,Collation,Context,Resultinfo) do { (Fcinfo).flinfo = (Flinfo); (Fcinfo).context = (Context); (Fcinfo).resultinfo = (Resultinfo); (Fcinfo).fncollation = (Collation); (Fcinfo).isnull = false; (Fcinfo).nargs = (Nargs); } while (0)
#define F_INT24NE 164
#define F_MACADDR8_LT 4114
#define F_CIRCLE_LEFT 1454
#define F_TIMENOW 250
#define FunctionCall8(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) FunctionCall8Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FD_SETSIZE 1024
#define F_SPG_RANGE_QUAD_PICKSPLIT 3471
#define F_PG_TRY_ADVISORY_XACT_LOCK_SHARED_INT4 3096
#define __FLT32X_IS_IEC_60559__ 2
#define __KERNEL_STRICT_NAMES 
#define F_PG_SEQUENCE_PARAMETERS 3078
#define ENOMSG 42
#define F_HAS_COLUMN_PRIVILEGE_NAME_NAME_ATTNUM 3013
#define EXIT_FAILURE 1
#define RENAME_EXCHANGE (1 << 1)
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define htonl(x) __bswap_32 (x)
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define IPV6_MTU_DISCOVER 23
#define __LC_TIME 2
#define F_BOX_OVERLEFT 189
#define F_TIMETZ_PART 1273
#define qsort(a,b,c,d) pg_qsort(a,b,c,d)
#define F_RADIANS 1609
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define PF_IUCV 32
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define EALREADY 114
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define F_PG_LS_DIR_1ARG 2625
#define F_BTFLOAT48CMP 2194
#define PG_FREE_IF_COPY(ptr,n) do { if ((Pointer) (ptr) != PG_GETARG_POINTER(n)) pfree(ptr); } while (0)
#define F_INTERVAL_UM 1168
#define F_I8TOD 482
#define SO_REUSEADDR 2
#define __WCHAR_MIN__ 0U
#define ERRCODE_NO_DATA_FOUND MAKE_SQLSTATE('P','0','0','0','2')
#define __USE_KERNEL_IPV6_DEFS 0
#define AF_VSOCK PF_VSOCK
#define MCAST_JOIN_GROUP 42
#define VARATT_IS_EXTENDED(PTR) (!VARATT_IS_4B_U(PTR))
#define F_PG_FUNCTION_IS_VISIBLE 2081
#define F_PG_STAT_RESET_SINGLE_TABLE_COUNTERS 3776
#define F_PG_GET_INDEXDEF_EXT 2507
#define F_PG_STAT_RESET 2274
#define AGG_CONTEXT_AGGREGATE 1
#define VARATT_IS_SHORT(PTR) VARATT_IS_1B(PTR)
#define PG_UINT16_MAX (0xFFFF)
#define __INT64_C(c) c ## L
#define F_TS_RANK_TT 3706
#define F_JSONB_SET 3305
#define F_INTERVAL_AVG 1844
#define F_HAS_FUNCTION_PRIVILEGE_ID_ID 2259
#define DEFAULT_BGWRITER_FLUSH_AFTER 64
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define F_FLOAT4DIV 203
#define F_TIMESTAMPTZ_SEND 2477
#define F_INT28PL 841
#define SET_VARSIZE_1B(PTR,len) (((varattrib_1b *) (PTR))->va_header = (((uint8) (len)) << 1) | 0x01)
#define F_CURRENT_QUERY 817
#define F_TEXTEQ 67
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define HAVE_TYPEOF 1
#define F_INT24PL 178
#define F_BOX_BELOW 2562
#define F_INT8SEND 2409
#define __INT_WCHAR_T_H 
#define PG_GETARG_BPCHAR_P(n) DatumGetBpCharP(PG_GETARG_DATUM(n))
#define WSTOPPED 2
#define HAVE__BOOL 1
#define F_BPCHAROCTETLEN 1375
#define SO_BROADCAST 6
#define F_REGOPERATORIN 2216
#define PACKAGE_STRING "PostgreSQL 11.18"
#define __CFLOAT32 _Complex _Float32
#define F_RANGE_TYPANALYZE 3916
#define F_CLOSE_LB 963
#define __osockaddr_defined 1
#define F_BTNAMECMP 359
#define F_TO_REGROLE 4093
#define F_ANY_OUT 2295
#define ERRCODE_WITH_CHECK_OPTION_VIOLATION MAKE_SQLSTATE('4','4','0','0','0')
#define F_OIDVECTORGT 681
#define F_DATE_LE_TIMESTAMPTZ 2352
#define _FORTIFY_SOURCE 2
#define HAVE_CRYPT 1
#define F_POLY_OVERLAP 346
#define F_NETWORK_NE 925
#define DEF_PGPORT 5432
#define F_HAS_COLUMN_PRIVILEGE_ID_NAME_NAME 3016
#define HAVE_BIO_METH_NEW 1
#define PG_GETARG_BYTEA_PP(n) DatumGetByteaPP(PG_GETARG_DATUM(n))
#define F_PG_WALFILE_NAME 2851
#define ItemIdSetNormal(itemId,off,len) ( (itemId)->lp_flags = LP_NORMAL, (itemId)->lp_off = (off), (itemId)->lp_len = (len) )
#define F_PG_NUM_NONNULLS 440
#define F_BIT_OR 1674
#define DATUM_GET_GRAPHID(d) DatumGetInt64(d)
#define F_DATE_EQ_TIMESTAMP 2340
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define s6_addr __in6_u.__u6_addr8
#define F_BOOLOR_STATEFUNC 2516
#define PointerIsValid(pointer) ((const void*)(pointer) != NULL)
#define VARTAG_IS_EXPANDED(tag) (((tag) & ~1) == VARTAG_EXPANDED_RO)
#define AF_XDP PF_XDP
#define AF_TIPC PF_TIPC
#define F_BOX_MUL 1424
#define ItemPointerGetBlockNumberNoCheck(pointer) ( BlockIdGetBlockNumber(&(pointer)->ip_blkid) )
#define LOG_DESTINATION_STDERR 1
#define F_JSONB_EXTRACT_PATH 3217
#define __isascii(c) (((c) & ~0x7f) == 0)
#define F_INT84GE 479
#define F_TIMEPL 244
#define F_PG_IS_IN_BACKUP 3813
#define PG_GETARG_VARCHAR_P_SLICE(n,a,b) DatumGetVarCharPSlice(PG_GETARG_DATUM(n),a,b)
#define __toascii(c) ((c) & 0x7f)
#define F_SHOW_CONFIG_BY_NAME 2077
#define HAVE_FSEEKO 1
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define EMULTIHOP 72
#define F_BOX_CENTER 138
#define FIELDNO_HEAPTUPLEDATA_DATA 3
#define F_INET_SPG_CHOOSE 3796
#define ERRCODE_UNIQUE_VIOLATION MAKE_SQLSTATE('2','3','5','0','5')
#define RENAME_WHITEOUT (1 << 2)
#define F_SCALARLTSEL 103
#define F_TIDRECV 2438
#define F_TIMESTAMPTZTYPMODIN 2907
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define isblank(c) __isctype((c), _ISblank)
#define F_JSONB_EACH_TEXT 3932
#define F_TS_HEADLINE_BYID_OPT 3743
#define __INT_FAST64_WIDTH__ 64
#define F_TS_TOKEN_TYPE_BYID 3713
#define BLCKSZ 8192
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _DEFAULT_SOURCE 1
#define SOL_TLS 282
#define DatumGetCommandId(X) ((CommandId) (X))
#define F_JSONB_EXTRACT_PATH_TEXT 3940
#define EAI_NOTCANCELED -102
#define F_ARRAY_CAT 383
#define IPPROTO_SCTP IPPROTO_SCTP
#define ERESTART 85
#define SYSCACHE_H 
#define __USE_EXTERN_INLINES 1
#define ERRCODE_INAPPROPRIATE_ISOLATION_LEVEL_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','4')
#define HAVE_SRANDOM 1
#define F_POINT_NE 988
#define F_PG_LSN_HASH 3252
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#define F_NETWORK_GT 923
#define F_TIMETZ_HASH_EXTENDED 3410
#define F_TIMETZ_SMALLER 1380
#define FIOSETOWN 0x8901
#define F_TSVECTOR_CONCAT 3625
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#define __LOCK_ALIGNMENT 
#define PG_GETARG_TEXT_P_SLICE(n,a,b) DatumGetTextPSlice(PG_GETARG_DATUM(n),a,b)
#define __FLT32X_MANT_DIG__ 53
#define ERRCODE_INVALID_FOREIGN_KEY MAKE_SQLSTATE('4','2','8','3','0')
#define F_LINE_DISTANCE 239
#define F_LOWER 870
#define F_INT2LARGER 770
#define ERRCODE_INSUFFICIENT_RESOURCES MAKE_SQLSTATE('5','3','0','0','0')
#define HAVE_DLOPEN 1
#define ETIMEDOUT 110
#define F_CURRVAL_OID 1575
#define ERRCODE_SEQUENCE_GENERATOR_LIMIT_EXCEEDED MAKE_SQLSTATE('2','2','0','0','H')
#define HAVE__BUILTIN_TYPES_COMPATIBLE_P 1
#define ERRCODE_INVALID_AUTHORIZATION_SPECIFICATION MAKE_SQLSTATE('2','8','0','0','0')
#define F_FLOAT48LE 302
#define F_NUMERIC_TO_CHAR 1772
#define PG_GETARG_VARCHAR_PP(n) DatumGetVarCharPP(PG_GETARG_DATUM(n))
#define PG_DIAG_MESSAGE_HINT 'H'
#define F_FLOAT8_REGR_AVGX 2810
#define F_FLOAT8_REGR_AVGY 2811
#define IPPROTO_EGP IPPROTO_EGP
#define BITS_PER_BYTE 8
#define __USER_LABEL_PREFIX__ 
#define PG_INT64_MAX INT64CONST(0x7FFFFFFFFFFFFFFF)
#define F_DPOW 232
#define F_INTERNAL_IN 2304
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, __flags
#define F_PG_GET_PARTKEYDEF 3352
#define F_POLY_OVERABOVE 2568
#define F_BTRELTIMECMP 380
#define F_DATE_EQ_TIMESTAMPTZ 2353
#define F_PG_EVENT_TRIGGER_TABLE_REWRITE_OID 4566
#define F_ARRAY_OUT 751
#define F_PATH_MUL_PT 1438
#define closesocket close
#define ENODATA 61
#define AF_WANPIPE PF_WANPIPE
#define F_PG_STAT_RESET_SINGLE_FUNCTION_COUNTERS 3777
#define _BITS_ENDIANNESS_H 1
#define errcontext set_errcontext_domain(TEXTDOMAIN), errcontext_msg
#define F_PERCENTILE_CONT_FLOAT8_FINAL 3975
#define F_INT8_AVG_SERIALIZE 2786
#define F_HASHVARLENA 456
#define IPV6_AUTHHDR 10
#define __LC_MEASUREMENT 11
#define ERRCODE_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('2','2','0','0','4')
#define MAX_RANDOM_VALUE PG_INT32_MAX
#define SCM_TIMESTAMPING_PKTINFO 58
#define __FLT32_MAX_10_EXP__ 38
#define ItemPointerIsValid(pointer) ((bool) (PointerIsValid(pointer) && ((pointer)->ip_posid != 0)))
#define F_ARRAY_UPPER 2092
#define F_JSONB_HASH_EXTENDED 3416
#define F_TINTERVALLE 788
#define __GLIBC__ 2
#define F_HASH_RANGE_EXTENDED 3417
#define __END_DECLS 
#define HAVE_TERMIOS_H 1
#define F_ROW_TO_JSON_PRETTY 3156
#define F_TO_ASCII_ENCNAME 1847
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define UINT_LEAST8_MAX (255)
#define F_TIME_LARGER 1377
#define F_LINE_HORIZONTAL 1415
#define __CONCAT(x,y) x ## y
#define F_NUMERIC_ACCUM 1833
#define F_TIMESTAMP_IZONE 2070
#define ERRCODE_FDW_INCONSISTENT_DESCRIPTOR_INFORMATION MAKE_SQLSTATE('H','V','0','2','1')
#define WCONTINUED 8
#define setjmp(env) _setjmp (env)
#define HAVE_COMPUTED_GOTO 1
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define SET_VARTAG_EXTERNAL(PTR,tag) SET_VARTAG_1B_E(PTR, tag)
#define F_TIMESTAMP_GE_DATE 2368
#define F_INT84LT 476
#define F_JSONB_OBJECT_KEYS 3931
#define __STDC_HOSTED__ 1
#define F_NUMERIC_ACCUM_INV 3548
#define ERRCODE_FDW_INVALID_STRING_LENGTH_OR_BUFFER_LENGTH MAKE_SQLSTATE('H','V','0','9','0')
#define F_PG_SEQUENCE_LAST_VALUE 4032
#define F_UUID_HASH 2963
#define F_TXID_CURRENT_SNAPSHOT 2944
#define F_JSONB_ARRAY_ELEMENTS 3219
#define INTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_INT, (LEN))
#define F_NUMERIC_UPLUS 1915
#define F_PG_READ_BINARY_FILE_ALL 3828
#define F_FLOAT8_COMBINE 276
#define F_INT42GE 169
#define F_NUMERIC_VAR_POP 2514
#define F_JSON_BUILD_OBJECT 3200
#define F_GENERATE_SERIES_INT8 1069
#define FIOGETOWN 0x8903
#define ERRCODE_INVALID_GRANT_OPERATION MAKE_SQLSTATE('0','L','P','0','1')
#define F_HAS_TYPE_PRIVILEGE_ID 3143
#define __SLONG32_TYPE int
#define _BITS_UINTN_IDENTITY_H 1
#define F_LSEG_SEND 2481
#define F_GINARRAYEXTRACT_2ARGS 3076
#define DatumGetUInt16(X) ((uint16) (X))
#define F_UUID_SEND 2962
#define F_TEXTICNLIKE 1634
#define _SYS_SELECT_H 1
#define F_CHAROUT 33
#define F_FLOAT8DIV 217
#define IPPROTO_IPIP IPPROTO_IPIP
#define PG_RETURN_UINT16(x) return UInt16GetDatum(x)
#define F_GIST_POINT_DISTANCE 3064
#define ERRCODE_COLLATION_MISMATCH MAKE_SQLSTATE('4','2','P','2','1')
#define F_PG_STAT_GET_TUPLES_HOT_UPDATED 1972
#define HAVE_STDINT_H 1
#define HAVE_SYS_STAT_H 1
#define F_INT84NE 475
#define DatumGetVarCharPSlice(X,m,n) ((VarChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define ERRCODE_FLOATING_POINT_EXCEPTION MAKE_SQLSTATE('2','2','P','0','1')
#define F_PG_EVENT_TRIGGER_TABLE_REWRITE_REASON 4567
#define F_IN_RANGE_INT4_INT2 4129
#define F_CIDR_SET_MASKLEN 635
#define F_OIDTOI8 1288
#define AF_PHONET PF_PHONET
#define F_EQJOINSEL 105
#define DatumGetObjectId(X) ((Oid) (X))
#define ERRCODE_INVALID_CATALOG_NAME MAKE_SQLSTATE('3','D','0','0','0')
#define LC_GLOBAL_LOCALE ((locale_t) -1L)
#define __SSIZE_T_TYPE __SWORD_TYPE
#define SpecTokenOffsetNumber 0xfffe
#define SCOPE_DELIMITER '%'
#define TransactionIdGetDatum(X) ((Datum) (X))
#define HAVE_GCC__SYNC_INT32_CAS 1
#define __jmp_buf_tag_defined 1
#define ERRCODE_NAME_TOO_LONG MAKE_SQLSTATE('4','2','6','2','2')
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define F_TS_LEXIZE 3723
#define F_TEXT_CHAR 944
#define TMP_MAX 238328
#define ____mbstate_t_defined 1
#define ERRCODE_INVALID_TEXT_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','2')
#define PG_DIAG_INTERNAL_POSITION 'p'
#define IP_IPSEC_POLICY 16
#define F_TO_REGTYPE 3493
#define F_FLOAT8LARGER 223
#define F_INTERVAL_JUSTIFY_DAYS 1295
#define IPPROTO_PIM IPPROTO_PIM
#define F_RI_FKEY_CASCADE_DEL 1646
#define F_PG_STAT_GET_DB_DEADLOCKS 3152
#define DatumGetHeapTupleHeader(X) ((HeapTupleHeader) PG_DETOAST_DATUM(X))
#define F_INT2SMALLER 771
#define ERRCODE_FDW_INVALID_COLUMN_NAME MAKE_SQLSTATE('H','V','0','0','7')
#define F_REGDICTIONARYRECV 3773
#define HAVE_INTTYPES_H 1
#define F_INT8INC_FLOAT8_FLOAT8 2805
#define F_ARRAY_FILL 1193
#define __DBL_DIG__ 15
#define F_UNKNOWNSEND 2417
#define F_PG_GET_EXPR_EXT 2509
#define __FLT32_DIG__ 6
#define F_TEXT_NAME 407
#define ERRCODE_DISK_FULL MAKE_SQLSTATE('5','3','1','0','0')
#define EINTR 4
#define ERRCODE_INVALID_TRANSACTION_STATE MAKE_SQLSTATE('2','5','0','0','0')
#define __f32x(x) x ##f32x
#define AF_PACKET PF_PACKET
#define ERRCODE_INVALID_COLUMN_DEFINITION MAKE_SQLSTATE('4','2','6','1','1')
#define F_JSONB_OUT 3804
#define F_BOX_DISTANCE 978
#define PG_RETURN_NULL() do { fcinfo->isnull = true; return (Datum) 0; } while (0)
#define __RLIM_T_MATCHES_RLIM64_T 1
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define F_ARRAY_LOWER 2091
#define F_TIMESTAMP_IZONE_TRANSFORM 3994
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define LC_COLLATE __LC_COLLATE
#define F_BE_LO_IMPORT 764
#define UInt16GetDatum(X) ((Datum) (X))
#define F_LIKEJOINSEL 1825
#define __WCHAR_MAX __WCHAR_MAX__
#define F_XIDRECV 2440
#define F_JSONB_STRIP_NULLS 3262
#define DirectFunctionCall6(func,arg1,arg2,arg3,arg4,arg5,arg6) DirectFunctionCall6Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define SO_TIMESTAMPING_OLD 37
#define ENOLINK 67
#define PG_BACKEND_VERSIONSTR "postgres (PostgreSQL) " PG_VERSION "\n"
#define F_BOX_IN 123
#define F_BTRECORDCMP 2987
#define _IO_EOF_SEEN 0x0010
#define DEBUG1 14
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define DEBUG3 12
#define ECHILD 10
#define F_NUMERIC_LOG 1736
#define F_BINARY_DECODE 1947
#define __SHRT_WIDTH__ 16
#define SOCK_DGRAM SOCK_DGRAM
#define F_UUID_OUT 2953
#define F_BITGT 1593
#define PF_LLC 26
#define F_I8TOF 652
#define F_RANGE_RECV 3836
#define isblank_l(c,l) __isblank_l ((c), (l))
#define __f64x(x) x ##f64x
#define INVERT_COMPARE_RESULT(var) ((var) = ((var) < 0) ? 1 : -(var))
#define F_BTINT2SORTSUPPORT 3129
#define ERRCODE_NOT_NULL_VIOLATION MAKE_SQLSTATE('2','3','5','0','2')
#define PG_INT64_MIN (-INT64CONST(0x7FFFFFFFFFFFFFFF) - 1)
#define F_DCOTD 2738
#define _GCC_WCHAR_T 
#define RENAME_NOREPLACE (1 << 0)
#define F_REGOPERIN 2214
#define F_DATE_MII 1142
#define F_ANYENUM_IN 3504
#define ALIGNOF_BUFFER 32
#define __FLT32_IS_IEC_60559__ 2
#define PF_UNIX PF_LOCAL
#define ERRCODE_INVALID_REGULAR_EXPRESSION MAKE_SQLSTATE('2','2','0','1','B')
#define F_ENUM_NE 3509
#define F_DOMAIN_RECV 2598
#define __DEV_T_TYPE __UQUAD_TYPE
#define F_GET_CURRENT_TS_CONFIG 3759
#define F_FLOAT4SMALLER 211
#define F_TIMEOFDAY 274
#define F_MACADDR_CMP 836
#define __GLIBC_USE_ISOC2X 1
#define USE_OPENSSL_RANDOM 1
#define F_INT42MI 183
#define F_PATH_N_GE 986
#define F_UNKNOWNOUT 110
#define ___int_wchar_t_h 
#define F_PG_READ_FILE_ALL 3826
#define PACKAGE_TARNAME "postgresql"
#define PG_SOMAXCONN 10000
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define F_BYTEAOUT 31
#define F_REGCONFIGIN 3736
#define F_PG_JIT_AVAILABLE 315
#define __nonnull(params) __attribute_nonnull__ (params)
#define OidFunctionCall7(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7) OidFunctionCall7Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define F_NUMERIC_CASH 3824
#define ItemIdSetDead(itemId) ( (itemId)->lp_flags = LP_DEAD, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define F_BOX_AREA 975
#define s6_addr32 __in6_u.__u6_addr32
#define _SS_SIZE 128
#define F_PG_DEPENDENCIES_IN 3404
#define le32toh(x) __uint32_identity (x)
#define F_PG_GET_VIEWDEF_NAME 1640
#define F_TS_HEADLINE_JSONB_OPT 4203
#define F_PG_ADVISORY_UNLOCK_ALL 2892
#define ereport(elevel,rest) ereport_domain(elevel, TEXTDOMAIN, rest)
#define F_ENUM_LE 3512
#define NI_NOFQDN 4
#define F_IN_RANGE_INT8_INT8 4126
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define F_INET_GIST_PICKSPLIT 3558
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#define F_HAS_FUNCTION_PRIVILEGE_NAME_NAME 2256
#define __FLT16_HAS_QUIET_NAN__ 1
#define ngettext(msgid1,msgid2,n) dngettext (NULL, msgid1, msgid2, n)
#define F_QUOTE_NULLABLE 1289
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define PF_CAIF 37
#define F_BOOLTEXT 2971
#define SearchSysCacheList1(cacheId,key1) SearchSysCacheList(cacheId, 1, key1, 0, 0)
#define F_MACADDR8_GT 4116
#define F_XIDIN 50
#define HAVE_ATOMICS 1
#define HAVE_LIBCRYPTO 1
#define SCM_TXTIME SO_TXTIME
#define PACKAGE_NAME "PostgreSQL"
#define PF_ASH 18
#define OidFunctionCall9(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) OidFunctionCall9Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define dngettext(domainname,msgid1,msgid2,n) dcngettext (domainname, msgid1, msgid2, n, LC_MESSAGES)
#define F_REGNAMESPACESEND 4088
#define F_BTHANDLER 330
#define F_JSONB_TO_TSVECTOR 4213
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define F_PG_CURRENT_LOGFILE 3800
#define ereport_domain(elevel,domain,rest) do { if (errstart(elevel, __FILE__, __LINE__, PG_FUNCNAME_MACRO, domain)) errfinish rest; if (__builtin_constant_p(elevel) && (elevel) >= ERROR) pg_unreachable(); } while(0)
#define F_UPPER 871
#define F_TSQUERY_GE 3666
#define _WCHAR_T_ 
#define F_TEXT_REVERSE 3062
#define F_NUMERIC_AVG 1837
#define F_TSTZRANGE_SUBDIFF 3930
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define CACHELINEALIGN(LEN) TYPEALIGN(PG_CACHE_LINE_SIZE, (LEN))
#define F_GIST_BOX_PICKSPLIT 2582
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define IPPROTO_ESP IPPROTO_ESP
#define PG_RETURN_INT64(x) return Int64GetDatum(x)
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define F_BITLE 1594
#define F_RANGE_LE 3872
#define F_HASHOIDVECTOR 457
#define F_TO_TIMESTAMP 1778
#define F_I4TOD 316
#define __FP_FAST_FMA 1
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define NUM_ATOMICS_SEMAPHORES 64
#define VARRAWSIZE_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_rawsize)
#define EAI_FAMILY -6
#define F_DPI 1610
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define _VA_LIST_DEFINED 
#define IPV6_RECVORIGDSTADDR IPV6_ORIGDSTADDR
#define F_MACADDR_SEND 2495
#define __FLT32X_HAS_INFINITY__ 1
#define AssertVariableIsOfType(varname,typename) StaticAssertStmt(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename))
#define UINT32_WIDTH 32
#define PG_RETURN_INT32(x) return Int32GetDatum(x)
#define __INT32_MAX__ 0x7fffffff
#define F_UUID_IN 2952
#define F_PG_STAT_GET_AUTOVACUUM_COUNT 3055
#define F_TXID_SNAPSHOT_XMAX 2946
#define ERRCODE_INVALID_XML_CONTENT MAKE_SQLSTATE('2','2','0','0','N')
#define F_PG_LSN_IN 3229
#define __GLIBC_USE_DEPRECATED_GETS 0
#define __SIZEOF_PTHREAD_COND_T 48
#define AF_BRIDGE PF_BRIDGE
#define BlockIdEquals(blockId1,blockId2) ((blockId1)->bi_hi == (blockId2)->bi_hi && (blockId1)->bi_lo == (blockId2)->bi_lo)
#define F_FLOAT84NE 306
#define F_RI_FKEY_SETDEFAULT_UPD 1653
#define __FLT16_DIG__ 3
#define F_INT24DIV 172
#define FLEXIBLE_ARRAY_MEMBER 
#define F_ABSTIME_TIMESTAMP 2023
#define F_REGEXP_MATCHES_NO_FLAGS 2763
#define F_JSONB_INSERT 3579
#define F_REGDICTIONARYOUT 3772
#define F_TEXTTOXML 2896
#define F_INT2_MUL_CASH 863
#define __INT_WIDTH__ 32
#define F_CIDR_ABBREV 599
#define __SIZEOF_LONG__ 8
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1
#define F_INTERVAL_RELTIME 1194
#define F_BPCHAR_PATTERN_GE 2177
#define F_BITNE 1582
#define ERRCODE_IS_CATEGORY(ec) (((ec) & ~((1 << 12) - 1)) == 0)
#define F_BPCHAR_PATTERN_GT 2178
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define HAVE_POSIX_FALLOCATE 1
#define F_INET_GIST_PENALTY 3557
#define __STDC_IEC_559__ 1
#define IP_DROP_MEMBERSHIP 36
#define NameGetDatum(X) CStringGetDatum(NameStr(*(X)))
#define PG_GETARG_UINT32(n) DatumGetUInt32(PG_GETARG_DATUM(n))
#define SO_TYPE 3
#define PG_MAGIC_FUNCTION_NAME_STRING "Pg_magic_func"
#define ERRCODE_S_R_E_FUNCTION_EXECUTED_NO_RETURN_STATEMENT MAKE_SQLSTATE('2','F','0','0','5')
#define F_JSONB_ARRAY_ELEMENT_TEXT 3216
#define PG_RETURN_UINT64(x) return UInt64GetDatum(x)
#define __UINT16_C(c) c
#define ELOOP 40
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define F_FLOAT4LARGER 209
#define F_GIST_CIRCLE_CONSISTENT 2591
#define F_TSVECTOR_CMP 3622
#define F_SPG_KD_CHOOSE 4024
#define F_DIST_CPOLY 728
#define HAVE_LIBSELINUX 1
#define IP_MULTICAST_LOOP 34
#define F_FLOAT8RECV 2426
#define F_PG_ADVISORY_LOCK_INT8 2880
#define F_OIDVECTOROUT 55
#define DatumGetChar(X) ((char) (X))
#define NI_NAMEREQD 8
#define __DECIMAL_DIG__ 36
#define F_TSVECTOR_UNNEST 3322
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __USE_FORTIFY_LEVEL 2
#define __STDC_IEC_559_COMPLEX__ 1
#define F_BITSHIFTRIGHT 1678
#define SOL_X25 262
#define F_TIME_TIMETZ 2047
#define AF_CAN PF_CAN
#define SO_ATTACH_REUSEPORT_CBPF 51
#define F_TEXT_RIGHT 3061
#define EIO 5
#define F_CASH_DIV_FLT4 847
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define F_IN_RANGE_FLOAT8_FLOAT8 4139
#define F_GIN_CLEAN_PENDING_LIST 3789
#define F_PG_STAT_GET_FUNCTION_SELF_TIME 2980
#define _ANSI_STDARG_H_ 
#define __gnu_linux__ 1
#define __USE_XOPEN2K 1
#define F_CURRENT_SCHEMA 1402
#define __INT16_MAX__ 0x7fff
#define F_PG_STAT_GET_ARCHIVER 3195
#define _LARGEFILE_SOURCE 1
#define F_DEGREES 1608
#define _ENDIAN_H 1
#define F_PG_STAT_GET_DB_XACT_COMMIT 1942
#define __FLT128_IS_IEC_60559__ 2
#define ENABLE_NLS 1
#define __BLKSIZE_T_TYPE __S32_TYPE
#define ERRCODE_PROTOCOL_VIOLATION MAKE_SQLSTATE('0','8','P','0','1')
#define SOL_IP 0
#define ESTALE 116
#define IPPROTO_PUP IPPROTO_PUP
#define ERRCODE_INVALID_SCHEMA_NAME MAKE_SQLSTATE('3','F','0','0','0')
#define ERRCODE_INVALID_BINARY_REPRESENTATION MAKE_SQLSTATE('2','2','P','0','3')
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define F_HASHFLOAT8EXTENDED 444
#define F_PG_GET_RULEDEF 1573
#define LC_TIME __LC_TIME
#define F_SPG_BOX_QUAD_INNER_CONSISTENT 5015
#define F_BTINT48CMP 2188
#define F_HASHBPCHAREXTENDED 972
#define F_JSON_OUT 322
#define IPV6_FREEBIND 78
#define ENOTSOCK 88
#define F_MD5_TEXT 2311
#define __HAVE_FLOAT64X_LONG_DOUBLE __HAVE_FLOAT128
#define HAVE_DECL_POSIX_FADVISE 1
#define F_FLOAT4_TO_CHAR 1775
#define __bool_true_false_are_defined 1
#define SIG_ATOMIC_MIN (-2147483647-1)
#define F_TIMESTAMP_NE_TIMESTAMPTZ 2525
#define F_TS_HEADLINE_JSONB_BYID_OPT 4201
#define HAVE_DECL_VSNPRINTF 1
#define F_MACADDR8TOMACADDR 4124
#define F_FLOAT4GE 292
#define HAVE_VSNPRINTF 1
#define WCHAR_WIDTH 32
#define ERRCODE_NOT_AN_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','L')
#define F_INT48PL 1278
#define DOUBLEALIGN(LEN) TYPEALIGN(ALIGNOF_DOUBLE, (LEN))
#define F_FLOAT4GT 291
#define F_BTTINTERVALCMP 381
#define F_TIMETZ_CMP 1358
#define IP_ORIGDSTADDR 20
#define __FLT64X_MIN_10_EXP__ (-4931)
#define UINT64_FORMAT "%" INT64_MODIFIER "u"
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(c) c ## L
#define ENOSR 63
#define F_ANYARRAY_IN 2296
#define F_TIME_TRANSFORM 3944
#define _BSD_SIZE_T_ 
#define __HAVE_FLOAT64X __HAVE_FLOAT128
#define F_CIDSEND 2443
#define F_XML_IS_WELL_FORMED 3051
#define F_BTFLOAT8CMP 355
#define __intptr_t_defined 
#define __FLT16_MIN_EXP__ (-13)
#define F_XMLCOMMENT 2895
#define F_NUMERIC_AVG_ACCUM 2858
#define F_SMGROUT 761
#define F_NUMERIC_ADD 1724
#define F_FLOAT8_CORR 2817
#define F_POLY_NPOINTS 1445
#define ERRCODE_AMBIGUOUS_ALIAS MAKE_SQLSTATE('4','2','P','0','9')
#define SOL_ICMPV6 58
#define F_HYPOTHETICAL_RANK_FINAL 3987
#define __FLT64_MANT_DIG__ 53
#define FLOAT8PASSBYVAL true
#define F_NUMERIC_TRANSFORM 3157
#define F_POSTGRESQL_FDW_VALIDATOR 2316
#define __attribute_const__ __attribute__ ((__const__))
#define ERRCODE_INDETERMINATE_DATATYPE MAKE_SQLSTATE('4','2','P','1','8')
#define F_ARRAY_SEND 2401
#define F_PG_POSTMASTER_START_TIME 2560
#define F_VARCHAROUT 1047
#define F_GENERATE_SERIES_STEP_NUMERIC 3259
#define F_SHOW_CONFIG_BY_NAME_MISSING_OK 3294
#define ERRCODE_FDW_REPLY_HANDLE MAKE_SQLSTATE('H','V','0','0','K')
#define entry_id_is_valid(id) (id >= ENTRY_ID_MIN && id <= ENTRY_ID_MAX)
#define F_PG_DDL_COMMAND_OUT 87
#define F_INTERVAL_JUSTIFY_INTERVAL 2711
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define SOL_PNPIPE 275
#define F_PG_STAT_GET_XACT_TUPLES_FETCHED 3039
#define F_PG_GET_STATISTICSOBJDEF 3415
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define F_RANGESEL 3169
#define F_TIMESTAMPTYPMODIN 2905
#define htobe32(x) __bswap_32 (x)
#define F_NUMERIC_POLY_SUM 3388
#define F_BYTEAOCTETLEN 720
#define F_TSVECTOR_STRIP 3623
#define __USE_GNU_GETTEXT 1
#define HAVE_APPEND_HISTORY 1
#define F_REGEXEQSEL 1818
#define HAVE_TZNAME 1
#define __FLT64X_MANT_DIG__ 113
#define F_GIST_BOX_CONSISTENT 2578
#define AF_BLUETOOTH PF_BLUETOOTH
#define CppConcat(x,y) x ##y
#define F_INT4OR 1899
#define ERRCODE_E_R_I_E_NULL_VALUE_NOT_ALLOWED MAKE_SQLSTATE('3','9','0','0','4')
#define F_PATH_N_GT 983
#define F_XIDSEND 2441
#define F_NUMERIC_SORTSUPPORT 3283
#define ERRCODE_NONSTANDARD_USE_OF_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','P','0','6')
#define L_tmpnam 20
#define F_TXID_CURRENT_IF_ASSIGNED 3348
#define F_JSONB_OBJECT_AGG_TRANSFN 3268
#define PG_DIAG_SCHEMA_NAME 's'
#define F_REGDICTIONARYSEND 3774
#define F_HASHHANDLER 331
#define F_DEXP 233
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define F_BE_LO_LSEEK64 3170
#define isascii(c) __isascii (c)
#define PARTITION_MAX_KEYS 32
#define _T_PTRDIFF 
#define pg_noinline __attribute__((noinline))
#define toascii(c) __toascii (c)
#define __GNUC__ 11
#define F_INET_GIST_SAME 3559
#define F_PG_STAT_GET_BACKEND_XACT_START 2857
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define F_ANY_IN 2294
#define ERRCODE_ERROR_IN_ASSIGNMENT MAKE_SQLSTATE('2','2','0','0','5')
#define F_ACLITEM_EQ 1062
#define F_INT4_BOOL 2557
#define F_UUID_LE 2955
#define HAVE_SYS_TYPES_H 1
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define F_PG_STAT_GET_SUBSCRIPTION 6118
#define IPPROTO_TCP IPPROTO_TCP
#define IPV6_2292PKTOPTIONS 6
#define pg_unreachable() __builtin_unreachable()
#define pg_attribute_noreturn() __attribute__((noreturn))
#define F_ABSTIMEGT 254
#define F_FLOAT8SEND 2427
#define HAVE_GCC__ATOMIC_INT32_CAS 1
#define PG_DIAG_SQLSTATE 'C'
#define F_REGEXNESEL 1821
#define L_ctermid 9
#define ERRCODE_T_R_STATEMENT_COMPLETION_UNKNOWN MAKE_SQLSTATE('4','0','0','0','3')
#define F_TO_REGOPERATOR 3476
#define F_BITTOINT8 2076
#define F_PG_LSN_GT 3235
#define F_NUMERIC_EQ 1718
#define PG_GETARG_CHAR(n) DatumGetChar(PG_GETARG_DATUM(n))
#define IPPROTO_RAW IPPROTO_RAW
#define __CFLOAT32X _Complex _Float32x
#define PF_ISDN 34
#define F_TIME_PART 1385
#define F_RI_FKEY_CASCADE_UPD 1647
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define F_HAS_TYPE_PRIVILEGE_NAME 3142
#define F_PG_STAT_GET_TUPLES_FETCHED 1930
#define F_FLOAT4LT 289
#define VARATT_CONVERTED_SHORT_SIZE(PTR) (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT)
#define F_CASH_MUL_INT8 3344
#define pg_attribute_no_sanitize_alignment() __attribute__((no_sanitize("alignment")))
#define F_LANGUAGE_HANDLER_OUT 2303
#define F_GIN_EXTRACT_TSVECTOR_2ARGS 3077
#define AF_SMC PF_SMC
#define AF_NFC PF_NFC
#define F_FLOAT84DIV 284
#define ERRCODE_WARNING_NULL_VALUE_ELIMINATED_IN_SET_FUNCTION MAKE_SQLSTATE('0','1','0','0','3')
#define F_FLOAT4MUL 202
#define F_TIDOUT 49
#define HAVE__BUILTIN_BSWAP16 1
#define ERRCODE_STACKED_DIAGNOSTICS_ACCESSED_WITHOUT_ACTIVE_HANDLER MAKE_SQLSTATE('0','Z','0','0','2')
#define EAI_BADFLAGS -1
#define __daddr_t_defined 
#define isupper(c) __isctype((c), _ISupper)
#define F_TO_REGPROC 3494
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
#define F_ARRAY_AGG_TRANSFN 2333
#define __timeval_defined 1
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define F_RELTIMERECV 2464
#define F_TIMESTAMPTZ_SCALE 1967
#define F_INT4_ACCUM_INV 3568
#define F_NETWORK_OVERLAP 3551
#define F_RI_FKEY_RESTRICT_UPD 1649
#define EAI_MEMORY -10
#define F_DATE_RECV 2468
#define UINT64CONST(x) (x ##UL)
#define EAI_NODATA -5
#define OidFunctionCall0(functionId) OidFunctionCall0Coll(functionId, InvalidOid)
#define MSG_PROXY MSG_PROXY
#define F_FLOAT4NE 288
#define ERRCODE_INVALID_TABLESAMPLE_ARGUMENT MAKE_SQLSTATE('2','2','0','2','H')
#define SO_DETACH_REUSEPORT_BPF 68
#define F_NAMEREGEXEQ 79
#define __LDBL_MIN_EXP__ (-16381)
#define HAVE_SNPRINTF 1
#define SEEK_CUR 1
#define ELNRNG 48
#define EAI_FAIL -4
#define F_TIMESTAMPTZ_TO_CHAR 1770
#define F_INTINTERVAL 248
#define OidFunctionCall2(functionId,arg1,arg2) OidFunctionCall2Coll(functionId, InvalidOid, arg1, arg2)
#define __STRING(x) #x
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define IPV6_RECVHOPOPTS 53
#define PG_RETURN_NAME(x) return NameGetDatum(x)
#define F_PG_GET_PARTITION_CONSTRAINTDEF 3408
#define F_TABLE_TO_XML 2923
#define F_GIN_EXTRACT_JSONB 3482
#define F_REGPROCEDURESEND 2447
#define F_ENUM_SEND 3533
#define F_XML_RECV 2898
#define Int16GetDatum(X) ((Datum) (X))
#define F_INT8RANGE_SUBDIFF 3923
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define F_NUMERIC_POLY_STDDEV_SAMP 3393
#define ItemIdGetFlags(itemId) ((itemId)->lp_flags)
#define F_TINTERVALCT 264
#define F_TIMESTAMP_HASH 2039
#define F_CASH_OUT 887
#define __ONCE_ALIGNMENT 
#define __GLIBC_USE_DEPRECATED_SCANF 0
#define F_JSON_BUILD_ARRAY_NOARGS 3199
#define F_XML_IN 2893
#define __FLT64_MAX_10_EXP__ 308
#define F_INT4LARGER 768
#define F_PG_STAT_GET_DB_CONFLICT_TABLESPACE 3065
#define F_CASHLARGER 898
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define F_BE_LOREAD 954
#define F_ARRAY_APPEND 378
#define F_PG_STAT_GET_NUMSCANS 1928
#define __GLIBC_USE_LIB_EXT2 1
#define F_POINT_RECV 2428
#define HAVE_UTIME 1
#define F_LSEG_CONSTRUCT 993
#define F_ARRAY_TO_JSON 3153
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define __sigevent_t_defined 1
#define ERRCODE_INVALID_ESCAPE_OCTET MAKE_SQLSTATE('2','2','0','0','D')
#define F_FLOAT4PL 204
#define F_FLOAT8_COVAR_POP 2815
#define F_NUMERIC_SUM 3178
#define MSG_DONTROUTE MSG_DONTROUTE
#define ITEMID_H 
#define F_PG_DEPENDENCIES_RECV 3406
#define HAVE_GETRLIMIT 1
#define __FLT16_MAX_10_EXP__ 4
#define ERRCODE_UNTERMINATED_C_STRING MAKE_SQLSTATE('2','2','0','2','4')
#define F_HAS_ANY_COLUMN_PRIVILEGE_NAME_ID 3025
#define F_CIDOUT 53
#define F_POLY_OVERBELOW 2567
#define F_LSEG_PARALLEL 995
#define F_TIMESTAMPTZ_ZONE 1159
#define __DBL_IS_IEC_60559__ 2
#define ____sigval_t_defined 
#define F_TIMESTAMP_SORTSUPPORT 3137
#define AF_SECURITY PF_SECURITY
#define F_BE_LO_UNLINK 964
#define F_INTERVAL_MUL 1618
#define _STDIO_H 1
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define F_MACADDR8_SET7BIT 4125
#define F_NUMERIC_DESERIALIZE 3336
#define C_H 
#define IPV6_RECVERR_RFC4884 31
#define F_SETVAL3_OID 1765
#define SIGNAL_ARGS int postgres_signal_arg
#define UINT64_WIDTH 64
#define F_CONTSEL 1302
#define FIELDNO_FUNCTIONCALLINFODATA_ARG 6
#define HAVE_STRTOULL 1
#define F_PG_REPLICATION_ORIGIN_DROP 6004
#define F_JSON_ARRAY_ELEMENT_TEXT 3950
#define UINTMAX_WIDTH 64
#define F_REGNAMESPACEOUT 4085
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define F_BRIN_DESUMMARIZE_RANGE 4014
#define F_RANGE_BEFORE 3863
#define SO_MAX_PACING_RATE 47
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define ERRCODE_AMBIGUOUS_PARAMETER MAKE_SQLSTATE('4','2','P','0','8')
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define NI_NUMERICHOST 1
#define F_OIDVECTORRECV 2420
#define F_CURRTID_BYRELOID 1293
#define __DBL_HAS_INFINITY__ 1
#define F_CIRCLE_AREA 1468
#define F_PG_CONTROL_INIT 3444
#define SCM_CREDENTIALS SCM_CREDENTIALS
#define __SIZEOF_PTHREAD_MUTEX_T 48
#define HAVE_FDATASYNC 1
#define IP_MTU_DISCOVER 10
#define IPV6_PMTUDISC_OMIT 5
#define PG_CACHE_LINE_SIZE 128
#define F_BITCAT 1679
#define IP_MINTTL 21
#define IPPROTO_TP IPPROTO_TP
#define F_PATH_DISTANCE 370
#define F_LIKESEL 1819
#define AF_RXRPC PF_RXRPC
#define F_MACADDR8_NOT 4120
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define F_ARRAY_POSITION_START 3278
#define F_PG_STAT_GET_DB_CONFLICT_ALL 3070
#define F_PG_WALFILE_NAME_OFFSET 2850
#define MSG_FASTOPEN MSG_FASTOPEN
#define ERRCODE_INVALID_SQL_STATEMENT_NAME MAKE_SQLSTATE('2','6','0','0','0')
#define F_BRIN_MINMAX_CONSISTENT 3385
#define F_ARRAYCONTSEL 3817
#define UINT8_MAX (255)
#define PF_NETROM 6
#define F_INT2_AVG_ACCUM 1962
#define __USE_XOPEN 1
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define isspace(c) __isctype((c), _ISspace)
#define stdin stdin
#define HAVE_READLINK 1
#define IPV6_XFRM_POLICY 35
#define _FEATURES_H 1
#define F_INT84MUL 1276
#define _BITS_STDIO2_H 1
#define F_WIDTH_BUCKET_ARRAY 3218
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define F_PG_STAT_GET_TUPLES_DELETED 1933
#define F_HAS_TABLE_PRIVILEGE_ID_ID 1925
#define HAVE_INT_TIMEZONE 1
#define F_BE_LO_CLOSE 953
#define VARATT_CAN_MAKE_SHORT(PTR) (VARATT_IS_4B_U(PTR) && (VARSIZE(PTR) - VARHDRSZ + VARHDRSZ_SHORT) <= VARATT_SHORT_MAX)
#define F_REGCLASSRECV 2452
#define F_HAS_TABLESPACE_PRIVILEGE_ID_NAME 2392
#define HAVE_STRNLEN 1
#define F_TXID_STATUS 3360
#define F_JSONB_POPULATE_RECORD 3209
#define F_PG_STAT_GET_DB_STAT_RESET_TIME 3074
#define F_IN_RANGE_TIMETZ_INTERVAL 4138
#define F_NUMERIC_SQRT 1730
#define F_JSON_OBJECT_AGG_FINALFN 3196
#define F_PG_STAT_FILE_1ARG 2623
#define F_TIMESTAMP_TIME 1316
#define F_WINDOW_LAG_WITH_OFFSET 3107
#define F_TIMESTAMP_LE 1155
#define F_UUID_RECV 2961
#define __DADDR_T_TYPE __S32_TYPE
#define F_RECORD_NE 2982
#define F_FLOAT4UM 206
#define F_FLOAT4UP 1913
#define F_INTERVAL_RECV 2478
#define F_PG_STAT_GET_BACKEND_IDSET 1936
#define ENOSYS 38
#define IPV6_ORIGDSTADDR 74
#define F_GIN_TSQUERY_CONSISTENT_OLDSIG 3792
#define EDEADLK 35
#define GetSysCacheHashValue2(cacheId,key1,key2) GetSysCacheHashValue(cacheId, key1, key2, 0, 0)
#define FmgrHookIsNeeded(fn_oid) (!needs_fmgr_hook ? false : (*needs_fmgr_hook)(fn_oid))
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define StaticAssertStmt(condition,errmessage) do { _Static_assert(condition, errmessage); } while(0)
#define _ISOC11_SOURCE 1
#define F_DASIN 1600
#define __ASM_POSIX_TYPES_H 
#define ERRCODE_RESTRICT_VIOLATION MAKE_SQLSTATE('2','3','0','0','1')
#define F_INT2_ACCUM_INV 3567
#define F_NUMERIC_GE 1721
#define F_BOX_HEIGHT 977
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#define F_LENGTH_IN_ENCODING 1713
#define F_BYTEA_SORTSUPPORT 3331
#define F_TO_HEX64 2090
#define F_BINARY_UPGRADE_SET_NEXT_TOAST_PG_TYPE_OID 3585
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define IPPROTO_IPV6 IPPROTO_IPV6
#define F_NUMERIC_NE 1719
#define F_PG_REPLICATION_ORIGIN_SESSION_SETUP 6006
#define EAI_ALLDONE -103
#define F_HAS_DATABASE_PRIVILEGE_NAME_ID 2251
#define F_RELTIMELE 261
#define F_REPLACE_TEXT 2087
#define PG_VERSION "11.18 (Ubuntu 11.18-1.pgdg22.04+1)"
#define ERRCODE_INTERNAL_ERROR MAKE_SQLSTATE('X','X','0','0','0')
#define be32toh(x) __bswap_32 (x)
#define F_PG_NODE_TREE_RECV 197
#define PGUNSIXBIT(val) (((val) & 0x3F) + '0')
#define HAVE_UTIMES 1
#define USE_LIBXML 1
#define F_POLY_PATH 1447
#define __OFF64_T_TYPE __SQUAD_TYPE
#define F_NETWORK_NETMASK 696
#define AF_ECONET PF_ECONET
#define F_PG_GET_USERBYID 1642
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ long int
#define F_INETMI_INT8 2632
#define F_BOOL_ACCUM_INV 3497
#define __HAVE_FLOAT128X 0
#define F_INT8NOT 1907
#define F_REGEXP_MATCH_NO_FLAGS 3396
#define F_RECORD_EQ 2981
#define F_SPG_QUAD_CHOOSE 4019
#define _SIZE_T_DEFINED 
#define F_XML_IS_WELL_FORMED_CONTENT 3053
#define SearchSysCacheCopy3(cacheId,key1,key2,key3) SearchSysCacheCopy(cacheId, key1, key2, key3, 0)
#define SearchSysCacheCopy4(cacheId,key1,key2,key3,key4) SearchSysCacheCopy(cacheId, key1, key2, key3, key4)
#define SearchSysCacheList2(cacheId,key1,key2) SearchSysCacheList(cacheId, 2, key1, key2, 0)
#define F_BTINT4CMP 351
#define F_ICLIKESEL 1814
#define F_FLOAT48NE 300
#define ERRCODE_BAD_COPY_FILE_FORMAT MAKE_SQLSTATE('2','2','P','0','4')
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define VARDATA_EXTERNAL(PTR) VARDATA_1B_E(PTR)
#define F_MACADDR_AND 3145
#define F_GENERATE_SERIES_TIMESTAMPTZ 939
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define F_TSVECTOR_SETWEIGHT_BY_FILTER 3320
#define _WCHAR_T_DEFINED_ 
#define F_TEXTCAT 1258
#define DEVNULL "/dev/null"
#define F_BTINT2CMP 350
#define F_NAMELE 656
#define isalpha(c) __isctype((c), _ISalpha)
#define F_BE_LO_TRUNCATE64 3172
#define EBADMSG 74
#define MSG_TRYHARD MSG_DONTROUTE
#define SOL_NFC 280
#define HAVE_LINUX_EIDRM_BUG 
#define F_PG_STAT_GET_DB_TUPLES_FETCHED 2759
#define F_INT4AND 1898
#define F_OIDOUT 1799
#define __f64(x) x ##f64
#define F_OIDGT 1638
#define __USE_POSIX199506 1
#define __LDBL_HAS_DENORM__ 1
#define F_HAS_TYPE_PRIVILEGE_NAME_ID 3139
#define F_NUMERICTYPMODIN 2917
#define F_PG_LS_LOGDIR 3353
#define ECOMM 70
#define F_CIRCLE_SEND 2491
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define F_TINTERVALNE 785
#define ERRCODE_WARNING_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','1','0','0','C')
#define HAVE_UINTPTR_T 1
#define ItemPointerIndicatesMovedPartitions(pointer) ( ItemPointerGetOffsetNumber(pointer) == MovedPartitionsOffsetNumber && ItemPointerGetBlockNumberNoCheck(pointer) == MovedPartitionsBlockNumber )
#define lengthof(array) (sizeof (array) / sizeof ((array)[0]))
#define F_HAS_DATABASE_PRIVILEGE_NAME 2254
#define F_POSITIONJOINSEL 1301
#define F_ANYARRAY_SEND 2503
#define ERRCODE_CANNOT_COERCE MAKE_SQLSTATE('4','2','8','4','6')
#define F_NLIKESEL 1822
#define __stub_setlogin 
#define LC_TIME_MASK (1 << __LC_TIME)
#define PG_DIAG_INTERNAL_QUERY 'q'
#define SO_LOCK_FILTER 44
#define PG_GETARG_NAME(n) DatumGetName(PG_GETARG_DATUM(n))
#define __FLT128_HAS_INFINITY__ 1
#define LC_MESSAGES __LC_MESSAGES
#define F_PG_BACKEND_PID 2026
#define __FLT32_DECIMAL_DIG__ 9
#define F_PG_ADVISORY_XACT_LOCK_INT4 3093
#define LC_ADDRESS __LC_ADDRESS
#define DatumGetName(X) ((Name) DatumGetPointer(X))
#define F_ARRAY_NDIMS 748
#define F_POINT_DIV 1444
#define F_TIMESTAMPTZ_EQ_TIMESTAMP 2529
#define DatumGetUInt32(X) ((uint32) (X))
#define ERRCODE_CASE_NOT_FOUND MAKE_SQLSTATE('2','0','0','0','0')
#define F_TO_REGOPER 3492
#define F_JSON_TO_RECORD 3204
#define _GCC_WRAP_STDINT_H 
#define F_RANGE_GIST_CONSISTENT 3875
#define F_NETWORK_SUB 927
#define F_INT4_MUL_CASH 862
#define MemSetTest(val,len) ( ((len) & LONG_ALIGN_MASK) == 0 && (len) <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0 && (val) == 0 )
#define F_POLY_OVERLEFT 342
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_NAME_ID 3001
#define F_TIMESTAMPTZ_EQ_DATE 2379
#define F_PERCENTILE_CONT_FLOAT8_MULTI_FINAL 3981
#define F_PG_START_BACKUP 2172
#define F_NETWORK_SUP 929
#define F_NUMERIC_DIV 1727
#define ERRCODE_CHECK_VIOLATION MAKE_SQLSTATE('2','3','5','1','4')
#define F_PHRASETO_TSQUERY 5001
#define F_RI_FKEY_CHECK_UPD 1645
#define ERRCODE_INVALID_TRANSACTION_TERMINATION MAKE_SQLSTATE('2','D','0','0','0')
#define F_TEXTOUT 47
#define F_INTERVALTYPMODIN 2903
#define F_CIRCLE_POLY 1475
#define F_PG_ENCODING_MAX_LENGTH_SQL 2319
#define true 1
#define __dev_t_defined 
#define ERRCODE_WARNING_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('0','1','0','0','4')
#define EAI_SOCKTYPE -7
#define __S32_TYPE int
#define USE_LDAP 1
#define F_HASHINETEXTENDED 779
#define F_JSONB_AGG_TRANSFN 3265
#define F_BOX_LEFT 188
#define F_TSQUERY_NOT 3671
#define F_HASHMACADDR8 328
#define F_MACADDR8_RECV 3446
#define F_XMLCONCAT2 2900
#define F_PG_AVAILABLE_EXTENSION_VERSIONS 3083
#define HAVE_SYS_UN_H 1
#define SO_DONTROUTE 5
#define PG_GETARG_VARCHAR_P_COPY(n) DatumGetVarCharPCopy(PG_GETARG_DATUM(n))
#define F_FLOAT8ABS 221
#define IPV6_ROUTER_ALERT_ISOLATE 30
#define __DBL_MAX_EXP__ 1024
#define SOL_SOCKET 1
#define VARATT_IS_COMPRESSED(PTR) VARATT_IS_4B_C(PTR)
#define F_NUMERIC_SUB 1725
#define HAVE_STRSIGNAL 1
#define __WCHAR_WIDTH__ 32
#define __BIT_TYPES_DEFINED__ 1
#define HTUP_H 
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define F_BINARY_ENCODE 1946
#define F_FLOAT8_REGR_INTERCEPT 2814
#define DatumGetInt32(X) ((int32) (X))
#define F_TS_RANKCD_TTF 3709
#define _BITS_WCHAR_H 1
#define IP_RECVERR 11
#define F_INT2LE 148
#define F_DATABASE_TO_XML_AND_XMLSCHEMA 2938
#define F_OIDLT 716
#define F_PG_CONVERT_FROM 1714
#define ERRCODE_SCHEMA_AND_DATA_STATEMENT_MIXING_NOT_SUPPORTED MAKE_SQLSTATE('2','5','0','0','7')
#define FIELDNO_FUNCTIONCALLINFODATA_ISNULL 4
#define F_PG_STAT_GET_BACKEND_WAIT_EVENT 2853
#define F_CIRCLE_OVERABOVE 2588
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define F_GIST_CIRCLE_COMPRESS 2592
#define F_JSONB_EQ 4043
#define F_HAS_SCHEMA_PRIVILEGE_NAME_NAME 2268
#define DirectFunctionCall2(func,arg1,arg2) DirectFunctionCall2Coll(func, InvalidOid, arg1, arg2)
#define F_PG_REPLICATION_ORIGIN_ADVANCE 6012
#define F_POINT_BOX 4091
#define F_ENUM_LARGER 3525
#define ERFKILL 132
#define _BITS_PTHREADTYPES_ARCH_H 1
#define __FLT16_DECIMAL_DIG__ 5
#define F_LSEG_EQ 999
#define F_CIDR_RECV 2498
#define F_TIMESTAMP_ZONE 2069
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define LC_NAME_MASK (1 << __LC_NAME)
#define F_JSONB_EXISTS 4047
#define IPV6_ADDRFORM 1
#define F_PG_CONFIG 3400
#define EREMOTE 66
#define ERRCODE_DUPLICATE_FUNCTION MAKE_SQLSTATE('4','2','7','2','3')
#define _VA_LIST_ 
#define isspace_l(c,l) __isspace_l ((c), (l))
#define F_PG_CREATE_RESTORE_POINT 3098
#define F_FLOAT8GE 298
#define F_TSRANGE_SUBDIFF 3929
#define F_TINTERVALLENEQ 266
#define ETOOMANYREFS 109
#define __CPU_MASK_TYPE __ULONGWORD_TYPE
#define F_INT2_SUM 1840
#define MSG_MORE MSG_MORE
#define EPFNOSUPPORT 96
#define PG_TRY() do { sigjmp_buf *save_exception_stack = PG_exception_stack; ErrorContextCallback *save_context_stack = error_context_stack; sigjmp_buf local_sigjmp_buf; if (sigsetjmp(local_sigjmp_buf, 0) == 0) { PG_exception_stack = &local_sigjmp_buf
#define UINT_LEAST16_WIDTH 16
#define F_ARRAYCONTAINED 2749
#define DirectFunctionCall7(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7) DirectFunctionCall7Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define F_RELTIMEIN 242
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define F_PG_LAST_XACT_REPLAY_TIMESTAMP 3830
#define F_INT2MUL 152
#define F_INT82 714
#define DirectFunctionCall8(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) DirectFunctionCall8Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define F_TRANSLATE 878
#define SIZEOF_DATUM SIZEOF_VOID_P
#define F_RANGE_EQ 3855
#define __FLT_IS_IEC_60559__ 2
#define F_INTERVAL_LT 1164
#define AF_NETLINK PF_NETLINK
#define F_CIRCLE_ABOVE 1461
#define F_LSEG_GE 1486
#define MCAST_INCLUDE 1
#define F_INTERVAL_LARGER 1198
#define IPPROTO_RSVP IPPROTO_RSVP
#define F_INT4NE 144
#define PG_GETARG_BYTEA_P_COPY(n) DatumGetByteaPCopy(PG_GETARG_DATUM(n))
#define F_PG_STAT_GET_XACT_FUNCTION_SELF_TIME 3048
#define F_BE_LO_CREAT 957
#define F_PG_CURRENT_LOGFILE_1ARG 3801
#define IPV6_UNICAST_HOPS 16
#define HAVE_HISTORY_TRUNCATE_FILE 1
#define F_DSYNONYM_LEXIZE 3729
#define COMMERROR LOG_SERVER_ONLY
#define F_BITTYPMODOUT 2920
#define PF_PHONET 35
#define F_TIMESTAMP_GE_TIMESTAMPTZ 2524
#define F_DATABASE_TO_XML 2936
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __USECONDS_T_TYPE __U32_TYPE
#define Int64GetDatum(X) ((Datum) (X))
#define F_INTERVAL_COMBINE 3325
#define F_TINTERVALLENLT 268
#define HAVE_GCC__ATOMIC_INT64_CAS 1
#define _BITS_STDIO_H 1
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define IP_PMTUDISC_PROBE 3
#define F_DATE_PL_INTERVAL 2071
#define F_INT8_AVG_ACCUM 2746
#define __glibc_objsize(__o) __bos (__o)
#define F_TIME_SMALLER 1378
#define F_SPG_BOX_QUAD_LEAF_CONSISTENT 5016
#define F_BITTYPMODIN 2919
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define IP_RECVTOS 13
#define F_GIN_EXTRACT_JSONB_QUERY 3483
#define ERRCODE_TRANSACTION_RESOLUTION_UNKNOWN MAKE_SQLSTATE('0','8','0','0','7')
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define F_CIRCLE_RIGHT 1457
#define F_JSONB_IN 3806
#define PDP_ENDIAN __PDP_ENDIAN
#define F_CLOCK_TIMESTAMP 2649
#define ERRCODE_SAVEPOINT_EXCEPTION MAKE_SQLSTATE('3','B','0','0','0')
#define HAVE_STDBOOL_H 1
#define ENONET 64
#define F_TIDEQ 1292
#define F_NUMERIC_INT4 1744
#define _LINUX_STDDEF_H 
#define SO_ATTACH_FILTER 26
#define SO_PASSCRED 16
#define __FLT32_HAS_QUIET_NAN__ 1
#define F_TS_MATCH_QV 3635
#define MCAST_EXCLUDE 0
#define F_BTFLOAT4SORTSUPPORT 3132
#define ERRCODE_ESCAPE_CHARACTER_CONFLICT MAKE_SQLSTATE('2','2','0','0','B')
#define _T_WCHAR 
#define PF_NETBEUI 13
#define F_NUMERIC_ROUND 1707
#define HAVE_EDITLINE_HISTORY_H 1
#define AF_AX25 PF_AX25
#define F_DATE_GT_TIMESTAMP 2341
#define F_HAS_SCHEMA_PRIVILEGE_ID_NAME 2270
#define F_HASHOID 453
#define __SOCKADDR_ALLTYPES __SOCKADDR_ONETYPE (sockaddr) __SOCKADDR_ONETYPE (sockaddr_at) __SOCKADDR_ONETYPE (sockaddr_ax25) __SOCKADDR_ONETYPE (sockaddr_dl) __SOCKADDR_ONETYPE (sockaddr_eon) __SOCKADDR_ONETYPE (sockaddr_in) __SOCKADDR_ONETYPE (sockaddr_in6) __SOCKADDR_ONETYPE (sockaddr_inarp) __SOCKADDR_ONETYPE (sockaddr_ipx) __SOCKADDR_ONETYPE (sockaddr_iso) __SOCKADDR_ONETYPE (sockaddr_ns) __SOCKADDR_ONETYPE (sockaddr_un) __SOCKADDR_ONETYPE (sockaddr_x25)
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SO_COOKIE 57
#define AF_RDS PF_RDS
#define EBADSLT 57
#define IPPROTO_AH IPPROTO_AH
#define __SIZEOF_SIZE_T__ 8
#define F_INT8_NUMERIC 1781
#define F_RI_FKEY_SETDEFAULT_DEL 1652
#define pg_attribute_unused() __attribute__((unused))
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define _WCHAR_T 
#define F_JSON_OBJECT_FIELD_TEXT 3948
#define __SIG_ATOMIC_WIDTH__ 32
#define ERRCODE_INVALID_OBJECT_DEFINITION MAKE_SQLSTATE('4','2','P','1','7')
#define DatumGetTransactionId(X) ((TransactionId) (X))
#define F_BOX_OVERABOVE 2564
#define F_REGOPEROUT 2215
#define _XOPEN_SOURCE_EXTENDED 1
#define SO_PASSSEC 34
#define ERRCODE_FDW_INVALID_OPTION_NAME MAKE_SQLSTATE('H','V','0','0','D')
#define F_FLOAT8LE 296
#define F_CONTJOINSEL 1303
#define ERRCODE_DATABASE_DROPPED MAKE_SQLSTATE('5','7','P','0','4')
#define F_PG_HAS_ROLE_ID_ID 2708
#define F_REGPROCEDUREIN 2212
#define SO_PEERSEC 31
#define F_BITCMP 1596
#define is_windows_absolute_path(filename) ( IS_WINDOWS_DIR_SEP((filename)[0]) || (isalpha((unsigned char) ((filename)[0])) && (filename)[1] == ':' && IS_WINDOWS_DIR_SEP((filename)[2])) )
#define __ARM_ALIGN_MAX_PWR 28
#define F_PG_CONTROL_SYSTEM 3441
#define F_HAS_SERVER_PRIVILEGE_NAME_NAME 3006
#define ItemIdIsDead(itemId) ((itemId)->lp_flags == LP_DEAD)
#define IPPROTO_ICMP IPPROTO_ICMP
#define F_PG_STAT_GET_BACKEND_START 1391
#define F_PG_HAS_ROLE_NAME 2709
#define PG_DIAG_COLUMN_NAME 'c'
#define F_JSONB_LT 4039
#define SIZE_MAX (18446744073709551615UL)
#define F_BITLENGTH 1681
#define __SIZEOF_WINT_T__ 4
#define F_LSEG_LE 1484
#define F_BOX_OUT 124
#define ERRCODE_DIAGNOSTICS_EXCEPTION MAKE_SQLSTATE('0','Z','0','0','0')
#define ERRCODE_INVALID_DATETIME_FORMAT MAKE_SQLSTATE('2','2','0','0','7')
#define HAVE_SYS_SHM_H 1
#define F_TO_REGCLASS 3495
#define ERRCODE_E_R_E_CONTAINING_SQL_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','1')
#define F_NUMERIC_ABS 1704
#define MSG_WAITFORONE MSG_WAITFORONE
#define F_WEBSEARCH_TO_TSQUERY_BYID 5007
#define F_REGEXP_SPLIT_TO_ARRAY 2768
#define F_TSVECTOR_DELETE_STR 3321
#define F_MACADDR8_EQ 4113
#define F_JSONB_AGG_FINALFN 3266
#define PF_UNSPEC 0
#define ENOTNAM 118
#define F_FLOAT8NE 294
#define F_CURRENT_DATABASE 861
#define __LONG_LONG_WIDTH__ 64
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define F_INT8_AVG 1964
#define F_RELTIMEGT 260
#define F_FLOAT8PL 218
#define F_BINARY_UPGRADE_SET_NEXT_PG_ENUM_OID 3589
#define F_PG_TRY_ADVISORY_LOCK_SHARED_INT4 2889
#define DEFAULT_BACKEND_FLUSH_AFTER 0
#define F_DATE_LE_TIMESTAMP 2339
#define __U16_TYPE unsigned short int
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define F_JSON_EXTRACT_PATH_TEXT 3953
#define PG_GETARG_HEAPTUPLEHEADER(n) DatumGetHeapTupleHeader(PG_GETARG_DATUM(n))
#define __CFLOAT64 _Complex _Float64
#define F_DTAND 2737
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define F_PG_STAT_GET_XACT_TUPLES_INSERTED 3040
#define F_REGROLEOUT 4092
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX (4294967295u)
#define SIOCATMARK 0x8905
#define F_LSEG_NE 1482
#define F_TSQUERYRECV 3641
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define F_XML_OUT 2894
#define F_PG_TRY_ADVISORY_LOCK_SHARED_INT8 2883
#define ItemPointerSetOffsetNumber(pointer,offsetNumber) ( AssertMacro(PointerIsValid(pointer)), (pointer)->ip_posid = (offsetNumber) )
#define PF_MCTP 45
#define F_BPCHAROUT 1045
#define ERRCODE_E_R_I_E_INVALID_SQLSTATE_RETURNED MAKE_SQLSTATE('3','9','0','0','1')
#define UINTPTR_MAX (18446744073709551615UL)
#define F_PG_STAT_GET_DB_TUPLES_UPDATED 2761
#define F_PG_STAT_GET_ANALYZE_COUNT 3056
#define ERRCODE_RESERVED_NAME MAKE_SQLSTATE('4','2','9','3','9')
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define F_NAMEICLIKE 1635
#define F_IN_RANGE_NUMERIC_NUMERIC 4141
#define __GNU_GETTEXT_SUPPORTED_REVISION(major) ((major) == 0 ? 1 : -1)
#define _PTRDIFF_T 
#define USE_FLOAT8_BYVAL 1
#define PF_X25 9
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define F_SHA224_BYTEA 3419
#define ItemIdIsNormal(itemId) ((itemId)->lp_flags == LP_NORMAL)
#define F_CLOSE_SB 368
#define ItemIdSetUnused(itemId) ( (itemId)->lp_flags = LP_UNUSED, (itemId)->lp_off = 0, (itemId)->lp_len = 0 )
#define F_CSTRING_SEND 2501
#define ERRCODE_TOO_MANY_ARGUMENTS MAKE_SQLSTATE('5','4','0','2','3')
#define F_INDEX_AM_HANDLER_IN 326
#define __ARM_FP16_FORMAT_IEEE 1
#define F_INT4_NUMERIC 1740
#define FMGROIDS_H 
#define NETDB_INTERNAL -1
#define __WTERMSIG(status) ((status) & 0x7f)
#define F_RANGE_INTERSECT 3868
#define LC_MONETARY __LC_MONETARY
#define F_INT84 480
#define PG_RETURN_POINTER(x) return PointerGetDatum(x)
#define F_SMGRNE 763
#define F_TEXT_TO_ARRAY_NULL 376
#define F_RECORD_RECV 2402
#define PG_FUNCNAME_MACRO __func__
#define F_TSQUERY_NE 3665
#define F_PG_STAT_GET_WAL_RECEIVER 3317
#define __USE_GNU 1
#define F_BINARY_UPGRADE_SET_NEXT_HEAP_PG_CLASS_OID 3586
#define F_WEBSEARCH_TO_TSQUERY 5009
#define F_PATH_OUT 122
#define UINT16_WIDTH 16
#define F_PG_LSN_HASH_EXTENDED 3413
#define F_CASHSMALLER 899
#define __FLT_MIN_EXP__ (-125)
#define F_INT84GT 477
#define F_HASHFLOAT4 451
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define F_TIMESTAMP_TIMESTAMPTZ 2028
#define F_REGNAMESPACEIN 4084
#define F_SCALARGTJOINSEL 108
#define EL3RST 47
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define HAVE_FUNCNAME__FUNC 1
#define F_PG_IS_WAL_REPLAY_PAUSED 3073
#define WEXITED 4
#define F_POINT_OUT 118
#define F_TEXTOVERLAY_NO_LEN 1405
#define INFO 17
#define F_PG_WAL_REPLAY_RESUME 3072
#define _STRUCT_TIMESPEC 1
#define F_PG_STAT_GET_DB_BLK_WRITE_TIME 2845
#define F_PG_CONVERSION_IS_VISIBLE 2093
#define IP_MULTICAST_ALL 49
#define PG_GET_COLLATION() (fcinfo->fncollation)
#define F_INT8DEC_ANY 3547
#define F_GTSQUERY_COMPRESS 3695
#define ERRCODE_WARNING MAKE_SQLSTATE('0','1','0','0','0')
#define F_TINTERVALREL 249
#define HAVE_INT64_TIMESTAMP 
#define DEFAULT_EVENT_SOURCE "PostgreSQL"
#define UINT32_MAX (4294967295U)
#define __key_t_defined 
#define SIZEOF_VOID_P 8
#define HAVE_UNISTD_H 1
#define __uid_t_defined 
#define ItemPointerSetMovedPartitions(pointer) ItemPointerSet((pointer), MovedPartitionsBlockNumber, MovedPartitionsOffsetNumber)
#define WNOHANG 1
#define alloca(size) __builtin_alloca (size)
#define F_INT48 481
#define F_INTERVAL_HASH_EXTENDED 3418
#define F_RANGE_UPPER_INC 3852
#define F_INT28EQ 1850
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define DEF_PGPORT_STR "5432"
#define __flexarr []
#define F_TS_HEADLINE_JSON 4208
#define HAVE_SYS_IPC_H 1
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define HOST_NOT_FOUND 1
#define F_CASH_DIV_FLT8 897
#define DatumGetByteaPSlice(X,m,n) ((bytea *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define PF_IRDA 23
#define F_PG_STAT_GET_DB_XACT_ROLLBACK 1943
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define F_SPG_BOX_QUAD_CONFIG 5012
#define F_PATH_ADD_PT 1436
#define F_BTTEXT_PATTERN_SORTSUPPORT 3332
#define F_INET_GIST_COMPRESS 3555
#define F_TIMESTAMP_LE_DATE 2365
#define __THROWNL __attribute__ ((__nothrow__))
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define _SETJMP_H 1
#define __PTRDIFF_T 
#define F_TXID_CURRENT 2943
#define __exctype_l(name) extern int name (int, locale_t) __THROW
#define F_ARRAY_REPLACE 3168
#define F_BE_LO_CREATE 715
#define HAVE_LIBSSL 1
#define F_PG_STATISTICS_OBJ_IS_VISIBLE 3403
#define __HAVE_GENERIC_SELECTION 1
#define __FLT32X_MIN_EXP__ (-1021)
#define F_PATH_LENGTH 987
#define F_LINE_RECV 2488
#define F_TSVECTOR_LENGTH 3711
#define _LOCALE_H 1
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define MAXALIGN_DOWN(LEN) TYPEALIGN_DOWN(MAXIMUM_ALIGNOF, (LEN))
#define LC_MEASUREMENT __LC_MEASUREMENT
#define __INT_FAST64_TYPE__ long int
#define F_IN_RANGE_TIME_INTERVAL 4137
#define F_CURRTID_BYRELNAME 1294
#define __ARM_FP16_ARGS 1
#define MCXT_ALLOC_ZERO 0x04
#define F_JSONB_OBJECT 3263
#define F_CIRCLE_RECV 2490
#define PG_RETURN_BYTEA_P(x) PG_RETURN_POINTER(x)
#define F_ABSTIME_TIMESTAMPTZ 1173
#define F_TINTERVALOUT 247
#define F_TEXTRECV 2414
#define Assert(condition) ((void)true)
#define __FP_FAST_FMAF 1
#define PG_DIAG_DATATYPE_NAME 'd'
#define F_PRSD_END 3719
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, { 0, 0 }
#define ENOBUFS 105
#define IPV6_RECVTCLASS 66
#define _ANSI_STDDEF_H 
#define F_LSEG_VERTICAL 997
#define F_CASH_LE 891
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define ENOTEMPTY 39
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define F_NAMESEND 2423
#define F_ARRAY_AGG_FINALFN 2334
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define EADDRINUSE 98
#define _VA_LIST 
#define F_TIMESTAMPTZTYPMODOUT 2908
#define F_INTERVAL_MI 1170
#define F_INT84EQ 474
#define ItemIdHasStorage(itemId) ((itemId)->lp_len != 0)
#define IPPROTO_MH IPPROTO_MH
#define F_FLOAT4OUT 201
#define F_MACADDR_TRUNC 753
#define F_PG_CLIENT_ENCODING 810
#define F_NUMERIC_CEIL 1711
#define F_INT42NE 165
#define F_PG_WAL_REPLAY_PAUSE 3071
#define F_PG_HAS_ROLE_ID_NAME 2707
#define HAVE_X509_GET_SIGNATURE_NID 1
#define F_QUERY_TO_XML 2924
#define F_PG_OPCLASS_IS_VISIBLE 2083
#define __ARM_FEATURE_CLZ 1
#define F_PATH_RECV 2482
#define SO_BUSY_POLL 46
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define F_TEXTNE 157
#define F_TEXT_PATTERN_LE 2161
#define F_RANGE_MERGE 4057
#define isxdigit(c) __isctype((c), _ISxdigit)
#define ERRCODE_INVALID_CHARACTER_VALUE_FOR_CAST MAKE_SQLSTATE('2','2','0','1','8')
#define __unix__ 1
#define IPV6_MTU 24
#define SO_RCVLOWAT 18
#define ERRCODE_INTERVAL_FIELD_OVERFLOW MAKE_SQLSTATE('2','2','0','1','5')
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define IPV6_RECVDSTOPTS 58
#define SIG_ATOMIC_WIDTH 32
#define __SIZEOF_POINTER__ 8
#define F_MAKE_TIME 3847
#define F_PG_STOP_BACKUP 2173
#define F_CASH_MI 895
#define F_ENUM_IN 3506
#define F_PG_STAT_GET_DB_TUPLES_DELETED 2762
#define EUCLEAN 117
#define StaticAssertExpr(condition,errmessage) ((void) ({ StaticAssertStmt(condition, errmessage); true; }))
#define ERRCODE_DUPLICATE_DATABASE MAKE_SQLSTATE('4','2','P','0','4')
#define F_PG_NOTIFICATION_QUEUE_USAGE 3296
#define F_NUMERIC 1703
#define __USE_XOPEN2KXSI 1
#define __WCOREFLAG 0x80
#define F_INTERVAL_HASH 1697
#define AF_UNSPEC PF_UNSPEC
#define F_RTRIM 876
#define F_NEXTVAL_OID 1574
#define F_JSONB_CONTAINS 4046
#define F_UUID_HASH_EXTENDED 3412
#define __HAVE_DISTINCT_FLOAT64 0
#define __SIGEV_MAX_SIZE 64
#define toupper_l(c,locale) __toupper_l ((c), (locale))
#define F_ABSTIME_FINITE 275
#define ESRMNT 69
#define ItemPointerSet(pointer,blockNumber,offNum) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber), (pointer)->ip_posid = offNum )
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x) != 0, 0)
#define __isascii_l(c,l) ((l), __isascii (c))
#define F_MACADDR8_CMP 4119
#define AssertArg(condition) ((void)true)
#define ERRCODE_DUPLICATE_SCHEMA MAKE_SQLSTATE('4','2','P','0','6')
#define F_FLOAT48PL 281
#define __DBL_HAS_QUIET_NAN__ 1
#define VARATT_IS_1B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x01)
#define __HAVE_FLOAT32X 1
#define ENETRESET 102
#define F_PG_INDEX_HAS_PROPERTY 637
#define F_REGEXNEJOINSEL 1827
#define F_DSIGN 2310
#define __FLT_EVAL_METHOD_C99__ 0
#define USE_FLOAT4_BYVAL 1
#define F_FLOAT4MI 205
#define TZNAME_GLOBAL tzname
#define F_BYTEAOVERLAY 749
#define F_CASH_LT 890
#define TRY_AGAIN 2
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define HAVE_UTIME_H 1
#define SO_SNDTIMEO SO_SNDTIMEO_OLD
#define __USE_UNIX98 1
#define MaxOffsetNumber ((OffsetNumber) (BLCKSZ / sizeof(ItemIdData)))
#define SET_VARSIZE_4B(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2))
#define ERRCODE_DATETIME_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','8')
#define FunctionCallInvoke(fcinfo) ((* (fcinfo)->flinfo->fn_addr) (fcinfo))
#define F_INT8LARGER 1236
#define ERRCODE_E_R_I_E_SRF_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','2')
#define F_TIMESTAMPTZ_AGE 1199
#define F_NUMERIC_SCALE 3281
#define WINT_WIDTH 32
#define F_HASHBPCHAR 1080
#define F_BTINT24CMP 2190
#define ERRCODE_CANT_CHANGE_RUNTIME_PARAM MAKE_SQLSTATE('5','5','P','0','2')
#define IPV6_DSTOPTS 59
#define F_AREASEL 139
#define __MODE_T_TYPE __U32_TYPE
#define F_TIMETZTYPMODIN 2911
#define BUFFERALIGN(LEN) TYPEALIGN(ALIGNOF_BUFFER, (LEN))
#define EDOM 33
#define PG_END_TRY() } PG_exception_stack = save_exception_stack; error_context_stack = save_context_stack; } while (0)
#define ERRCODE_EXTERNAL_ROUTINE_INVOCATION_EXCEPTION MAKE_SQLSTATE('3','9','0','0','0')
#define F_BITTOINT4 1684
#define AF_LLC PF_LLC
#define F_TS_MATCH_TT 3760
#define EISDIR 21
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define F_TSQUERY_GT 3667
#define ItemPointerGetOffsetNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetOffsetNumberNoCheck(pointer) )
#define INT_FAST64_WIDTH 64
#define F_INTERVAL_IN 1160
#define F_ENUM_LT 3510
#define HAVE_STRUCT_OPTION 1
#define __FLT64_MIN_EXP__ (-1021)
#define F_PG_STAT_GET_BGWRITER_MAXWRITTEN_CLEAN 2773
#define F_TEXTNLIKE 851
#define IPV6_RECVERR 25
#define F_PG_HAS_ROLE_ID 2710
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define FIELDNO_FUNCTIONCALLINFODATA_ARGNULL 7
#define F_BITSUBSTR_NO_LEN 1699
#define AssertState(condition) ((void)true)
#define F_DATE_SMALLER 1139
#define WRITEBACK_MAX_PENDING_FLUSHES 256
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define F_HASH_ACLITEM 329
#define F_SPG_TEXT_LEAF_CONSISTENT 4031
#define F_PG_COLUMN_SIZE 1269
#define F_PG_STAT_GET_CHECKPOINT_SYNC_TIME 3161
#define __LDBL_DECIMAL_DIG__ 36
#define F_TIMESTAMPTZ_PL_INTERVAL 1189
#define F_REGPROCSEND 2445
#define INT_LEAST8_MAX (127)
#define F_CHARSEND 2435
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define F_BOOL_ACCUM 3496
#define SEEK_DATA 3
#define ERRCODE_L_E_INVALID_SPECIFICATION MAKE_SQLSTATE('0','F','0','0','1')
#define __aarch64__ 1
#define F_JSON_STRING_TO_TSVECTOR 4210
#define ERRCODE_HELD_CURSOR_REQUIRES_SAME_ISOLATION_LEVEL MAKE_SQLSTATE('2','5','0','0','8')
#define IP_PMTUDISC 10
#define F_CHARGE 74
#define AttrOffsetGetAttrNumber(attributeOffset) ((AttrNumber) (1 + (attributeOffset)))
#define _BITS_SETJMP_H 1
#define F_PG_STOP_BACKUP_V2 2739
#define F_GIN_EXTRACT_JSONB_PATH 3485
#define SOL_DECNET 261
#define ERRCODE_UNDEFINED_FUNCTION MAKE_SQLSTATE('4','2','8','8','3')
#define SIZE_WIDTH __WORDSIZE
#define F_ICNLIKESEL 1815
#define F_TINTERVALLENLE 270
#define __CFLOAT64X _Complex _Float64x
#define __FLT64_MIN_10_EXP__ (-307)
#define FLOAT8_FITS_IN_INT32(num) ((num) >= (float8) PG_INT32_MIN && (num) < -((float8) PG_INT32_MIN))
#define AF_KCM PF_KCM
#define F_INETAND 2628
#define PG_BINARY_R "r"
#define HAVE_DECL_LLVMCREATEGDBREGISTRATIONLISTENER 1
#define F_PG_GET_VIEWDEF_WRAP 3159
#define INT8_C(c) c
#define F_PG_STAT_GET_BLOCKS_FETCHED 1934
#define F_INET_SAME_FAMILY 4071
#define __FDS_BITS(set) ((set)->fds_bits)
#define F_DIST_POLYP 3292
#define F_RANGE_GT 3874
#define F_DATE_GE_TIMESTAMP 2342
#define F_HAS_TABLE_PRIVILEGE_NAME_ID 1923
#define F_TEXTOCTETLEN 1374
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define ERRCODE_INVALID_GRANTOR MAKE_SQLSTATE('0','L','0','0','0')
#define F_PG_STAT_GET_BGWRITER_REQUESTED_CHECKPOINTS 2770
#define F_ENUM_OUT 3507
#define ItemIdGetRedirect(itemId) ((itemId)->lp_off)
#define ERRCODE_IN_FAILED_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','2')
#define STATUS_FOUND (1)
#define F_PG_ROTATE_LOGFILE_V2 2622
#define F_TIMESTAMP_FINITE 1389
#define __FLT64X_DECIMAL_DIG__ 36
#define F_HASHTEXT 400
#define F_GTSQUERY_PICKSPLIT 3697
#define F_FLOAT8_REGR_ACCUM 2806
#define F_XML_IS_WELL_FORMED_DOCUMENT 3052
#define IP_BIND_ADDRESS_NO_PORT 24
#define F_HAS_SCHEMA_PRIVILEGE_NAME_ID 2269
#define DatumGetBpCharP(X) ((BpChar *) PG_DETOAST_DATUM(X))
#define PG_NARGS() (fcinfo->nargs)
#define F_ARRAY_TO_TSVECTOR 3327
#define F_HAS_TABLESPACE_PRIVILEGE_ID 2395
#define F_HAS_LANGUAGE_PRIVILEGE_NAME_ID 2263
#define F_NETWORK_LT 921
#define F_NETWORK_SHOW 730
#define F_TEXT_GE 743
#define F_OIDLE 717
#define F_NAMEGE 658
#define __REGISTER_PREFIX__ 
#define NI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("NI_IDN_USE_STD3_ASCII_RULES is deprecated") 128
#define __UINT16_MAX__ 0xffff
#define ERRCODE_WARNING_PRIVILEGE_NOT_GRANTED MAKE_SQLSTATE('0','1','0','0','7')
#define HAVE__BUILTIN_CONSTANT_P 1
#define F_PG_STAT_GET_BACKEND_ACTIVITY 1940
#define __INTMAX_WIDTH__ 64
#define INT_LEAST32_MAX (2147483647)
#define SO_RCVBUF 8
#define F_INT8INC_ANY 2804
#define F_CIRCLE_OVERLEFT 1455
#define ERRCODE_READ_ONLY_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','6')
#define PF_ROSE 11
#define F_CIRCLE_CONTAINED 1458
#define __USE_LARGEFILE 1
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define F_TXID_SNAPSHOT_XIP 2947
#define PG_INT64_TYPE long int
#define INT_FAST16_WIDTH __WORDSIZE
#define F_SETVAL_OID 1576
#define __BITS_PER_LONG 64
#define F_MUL_D_INTERVAL 1624
#define F_POLY_OVERRIGHT 343
#define F_PG_REPLICATION_ORIGIN_SESSION_IS_SETUP 6008
#define F_BRIN_INCLUSION_OPCINFO 4105
#define F_INT2VECTORIN 40
#define F_REGDICTIONARYIN 3771
#define F_TIMESTAMPTZ_PART 1171
#define F_TO_REGNAMESPACE 4086
#define FLOAT8_FITS_IN_INT64(num) ((num) >= (float8) PG_INT64_MIN && (num) < -((float8) PG_INT64_MIN))
#define VARATT_IS_EXTERNAL_NON_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && !VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define SET_VARTAG_1B_E(PTR,tag) (((varattrib_1b_e *) (PTR))->va_header = 0x01, ((varattrib_1b_e *) (PTR))->va_tag = (tag))
#define F_ARRAY_FILL_WITH_LOWER_BOUNDS 1286
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define F_RECORD_LE 2985
#define __LDBL_HAS_INFINITY__ 1
#define F_INTERVAL_PART 1172
#define UINT_LEAST64_WIDTH 64
#define F_BE_LOWRITE 955
#define F_UUID_LT 2954
#define EDEADLOCK EDEADLK
#define F_CASH_WORDS 935
#define F_HAS_COLUMN_PRIVILEGE_NAME_ATTNUM 3021
#define PF_INET6 10
#define palloc0_object(type) ((type *) palloc0(sizeof(type)))
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define F_FLOAT4EQ 287
#define F_TSVECTOR_DELETE_ARR 3323
#define F_DLOG10 1339
#define F_NUMERIC_STDDEV_SAMP 1839
#define F_PG_GET_OBJECT_ADDRESS 3954
#define IP_TRANSPARENT 19
#define F_PG_STAT_GET_DB_NUMBACKENDS 1941
#define ERRCODE_FOREIGN_KEY_VIOLATION MAKE_SQLSTATE('2','3','5','0','3')
#define F_REGEXP_SPLIT_TO_TABLE 2766
#define MSG_CTRUNC MSG_CTRUNC
#define HAVE_WCHAR_H 1
#define F_HAS_SCHEMA_PRIVILEGE_ID 2273
#define SO_PROTOCOL 38
#define F_JSONB_BUILD_OBJECT_NOARGS 3274
#define F_TS_HEADLINE_JSON_BYID 4206
#define ERRCODE_DUPLICATE_TABLE MAKE_SQLSTATE('4','2','P','0','7')
#define HAVE_EDITLINE_READLINE_H 1
#define F_SPG_TEXT_INNER_CONSISTENT 4030
#define F_PG_TRY_ADVISORY_XACT_LOCK_INT4 3095
#define __FLT_DIG__ 6
#define F_PG_TABLE_IS_VISIBLE 2079
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define ERRCODE_SYNTAX_ERROR MAKE_SQLSTATE('4','2','6','0','1')
#define LP_REDIRECT 2
#define F_BOX_LE 130
#define F_TIMESTAMPTZ_GE_DATE 2381
#define F_HASHENUMEXTENDED 3414
#define HAVE_SYS_RESOURCE_H 1
#define F_CIRCLE_SUB_PT 1147
#define F_BYTEAPOS 2014
#define F_UNKNOWNIN 109
#define F_DATE_TIMESTAMPTZ 1174
#define F_TS_TOKEN_TYPE_BYNAME 3714
#define ERRCODE_IO_ERROR MAKE_SQLSTATE('5','8','0','3','0')
#define F_FLOAT8_STDDEV_POP 2513
#define ItemIdMarkDead(itemId) ( (itemId)->lp_flags = LP_DEAD )
#define F_INT2RECV 2404
#define F_BTOIDVECTORCMP 404
#define F_TIMESTAMPTZ_IN 1150
#define DirectFunctionCall5(func,arg1,arg2,arg3,arg4,arg5) DirectFunctionCall5Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define HAVE_RL_FILENAME_COMPLETION_FUNCTION 1
#define F_PG_ADVISORY_UNLOCK_INT4 2890
#define F_BTOIDSORTSUPPORT 3134
#define F_FLOAT48GT 303
#define ERRCODE_INVALID_ROW_COUNT_IN_LIMIT_CLAUSE MAKE_SQLSTATE('2','2','0','1','W')
#define F_ICREGEXNEJOINSEL 1829
#define __DEC_EVAL_METHOD__ 2
#define F_TXID_SNAPSHOT_IN 2939
#define F_BTABSTIMECMP 357
#define F_INT4GE 150
#define F_TEXT_PATTERN_GT 2164
#define F_FMGR_INTERNAL_VALIDATOR 2246
#define F_PG_CHAR_TO_ENCODING 1264
#define ECONNABORTED 103
#define DatumGetVarCharP(X) ((VarChar *) PG_DETOAST_DATUM(X))
#define ERRCODE_INVALID_CURSOR_DEFINITION MAKE_SQLSTATE('4','2','P','1','1')
#define F_BINARY_UPGRADE_SET_NEXT_ARRAY_PG_TYPE_OID 3584
#define PG_DIAG_MESSAGE_DETAIL 'D'
#define PF_APPLETALK 5
#define IPV6_2292PKTINFO 2
#define F_TIMESTAMP_SMALLER 1195
#define F_RANGE_LOWER_INC 3851
#define __FLT_MANT_DIG__ 24
#define F_HASHINT2EXTENDED 441
#define F_INT42PL 179
#define F_CLOSE_PS 366
#define AF_IUCV PF_IUCV
#define F_POLY_RECV 2486
#define INT_LEAST8_MIN (-128)
#define F_TIMESTAMP_EQ_TIMESTAMPTZ 2522
#define F_TIDGE 2792
#define __FLT16_MIN_10_EXP__ (-4)
#define F_FLOAT8UP 1914
#define F_LSEG_OUT 120
#define __VERSION__ "11.3.0"
#define F_HASH_RANGE 3902
#define F_PG_COLLATION_IS_VISIBLE 3815
#define ERRCODE_CONNECTION_EXCEPTION MAKE_SQLSTATE('0','8','0','0','0')
#define F_TS_HEADLINE_JSON_OPT 4207
#define gettext_noop(x) (x)
#define F_INT4MOD 156
#define PG_GETARG_TEXT_P(n) DatumGetTextP(PG_GETARG_DATUM(n))
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define IP_PKTINFO 8
#define __UINT64_C(c) c ## UL
#define F_TSQUERY_REWRITE 3684
#define IPPROTO_ETHERNET IPPROTO_ETHERNET
#define ERRCODE_SQL_STATEMENT_NOT_YET_COMPLETE MAKE_SQLSTATE('0','3','0','0','0')
#define F_XMLTOTEXT 2922
#define DatumGetVarCharPP(X) ((VarChar *) PG_DETOAST_DATUM_PACKED(X))
#define _SYS_TYPES_H 1
#define _PTRDIFF_T_ 
#define HAVE_STDIO_H 1
#define F_DATABASE_TO_XMLSCHEMA 2937
#define F_BTBPCHAR_PATTERN_SORTSUPPORT 3333
#define LABEL_ID_MAX PG_UINT16_MAX
#define F_INT4IN 42
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _SYS_CDEFS_H 1
#define MemSet(start,val,len) do { void *_vstart = (void *) (start); int _val = (val); Size _len = (len); if ((((uintptr_t) _vstart) & LONG_ALIGN_MASK) == 0 && (_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_start = (long *) _vstart; long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_vstart, _val, _len); } while (0)
#define LONGALIGN(LEN) TYPEALIGN(ALIGNOF_LONG, (LEN))
#define F_PG_STAT_GET_XACT_BLOCKS_FETCHED 3044
#define ACCEPT_TYPE_ARG2 struct sockaddr *
#define isprint(c) __isctype((c), _ISprint)
#define ERRCODE_FDW_UNABLE_TO_CREATE_EXECUTION MAKE_SQLSTATE('H','V','0','0','L')
#define F_INT8INC 1219
#define F_FTOI2 238
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define F_PG_DDL_COMMAND_SEND 90
#define SET_VARSIZE_4B_C(PTR,len) (((varattrib_4b *) (PTR))->va_4byte.va_header = (((uint32) (len)) << 2) | 0x02)
#define F_BOX_LT 129
#define F_PG_TRY_ADVISORY_LOCK_INT4 2888
#define F_TIMESTAMP_ABSTIME 2030
#define F_INT48LE 856
#define ERRCODE_DIVISION_BY_ZERO MAKE_SQLSTATE('2','2','0','1','2')
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_ID_NAME 3002
#define INT_LEAST64_WIDTH 64
#define ITEMPTR_H 
#define HAVE_SYS_SEM_H 1
#define F_MD5_BYTEA 2321
#define F_HASHOIDEXTENDED 445
#define F_SETSEED 1599
#define F_PG_LISTENING_CHANNELS 3035
#define F_SESSION_USER 746
#define PG_PORT_H 
#define F_PG_STAT_GET_WAL_SENDERS 3099
#define PEEK_GRAPHID_STACK(stack) (graphid) get_graphid(peek_stack_head(stack))
#define NON_EXEC_STATIC static
#define F_TSVECTOR_SETWEIGHT 3624
#define INT_LEAST32_MIN (-2147483647-1)
#define F_TSQUERY_REWRITE_QUERY 3685
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define MEMSET_LOOP_LIMIT 1024
#define __GXX_ABI_VERSION 1016
#define EAI_OVERFLOW -12
#define INT_FAST8_WIDTH 8
#define F_REGCONFIGOUT 3737
#define ERRCODE_DATATYPE_MISMATCH MAKE_SQLSTATE('4','2','8','0','4')
#define F_PG_TABLE_SIZE 2997
#define PGDLLEXPORT 
#define F_NETWORK_FAMILY 711
#define F_DATE_CMP 1092
#define ENOENT 2
#define SET_VARSIZE_COMPRESSED(PTR,len) SET_VARSIZE_4B_C(PTR, len)
#define __USE_XOPEN2K8 1
#define F_RANGE_OVERLEFT 3865
#define htobe64(x) __bswap_64 (x)
#define F_BE_LO_TELL64 3171
#define CMSG_FIRSTHDR(mhdr) ((size_t) (mhdr)->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (mhdr)->msg_control : (struct cmsghdr *) 0)
#define F_INT4LE 149
#define _____fpos_t_defined 1
#define F_INETNOT 2627
#define IN_CLASSB_MAX 65536
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define islower_l(c,l) __islower_l ((c), (l))
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define ERRCODE_INDEX_CORRUPTED MAKE_SQLSTATE('X','X','0','0','2')
#define F_TIDNE 1265
#define __WINT_MAX__ 0xffffffffU
#define ERROR 20
#define EAI_SERVICE -8
#define F_NETWORK_SUPEQ 930
#define F_FLOAT48MI 282
#define PG_DIAG_STATEMENT_POSITION 'P'
#define __INT_LEAST32_MAX__ 0x7fffffff
#define F_SIMILAR_ESCAPE 1623
#define F_SPG_KD_PICKSPLIT 4025
#define ERRCODE_INVALID_ESCAPE_SEQUENCE MAKE_SQLSTATE('2','2','0','2','5')
#define F_HAS_SERVER_PRIVILEGE_NAME 3010
#define F_INT4MI 181
#define SO_OOBINLINE 10
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define EHOSTUNREACH 113
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define PF_WANPIPE 25
#define __ASM_GENERIC_POSIX_TYPES_H 
#define _T_PTRDIFF_ 
#define PF_INET 2
#define F_TSQUERYSEND 3640
#define MSG_CONFIRM MSG_CONFIRM
#define F_TEXTREGEXREPLACE 2285
#define F_BRIN_INCLUSION_UNION 4108
#define PF_FILE PF_LOCAL
#define F_ARRAY_GE 396
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define F_ARRAY_SMALLER 516
#define EBUSY 16
#define DirectFunctionCall1(func,arg1) DirectFunctionCall1Coll(func, InvalidOid, arg1)
#define DirectFunctionCall3(func,arg1,arg2,arg3) DirectFunctionCall3Coll(func, InvalidOid, arg1, arg2, arg3)
#define DirectFunctionCall4(func,arg1,arg2,arg3,arg4) DirectFunctionCall4Coll(func, InvalidOid, arg1, arg2, arg3, arg4)
#define __FLT128_MAX_EXP__ 16384
#define DirectFunctionCall9(func,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) DirectFunctionCall9Coll(func, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define IPV6_DONTFRAG 62
#define F_BOOLAND_STATEFUNC 2515
#define __INO_T_TYPE __ULONGWORD_TYPE
#define F_DATERANGE_SUBDIFF 3925
#define OidFunctionCall3(functionId,arg1,arg2,arg3) OidFunctionCall3Coll(functionId, InvalidOid, arg1, arg2, arg3)
#define F_PG_ROTATE_LOGFILE 4099
#define islower(c) __isctype((c), _ISlower)
#define be16toh(x) __bswap_16 (x)
#define F_GTSVECTOR_PENALTY 3653
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define F_POINTS_BOX 1421
#define F_TO_TSQUERY_BYID 3746
#define Int8GetDatum(X) ((Datum) (X))
#define F_ASCII 1620
#define _NETDB_H 1
#define F_PATH_IN 121
#define F_BOOLEQ 60
#define ERRCODE_UNDEFINED_PARAMETER MAKE_SQLSTATE('4','2','P','0','2')
#define F_HAS_DATABASE_PRIVILEGE_ID_ID 2253
#define F_TIME_MI_TIME 1690
#define F_BITLT 1595
#define HAVE_STRINGS_H 1
#define F_GENERATE_SERIES_TIMESTAMP 938
#define F_TABLE_TO_XML_AND_XMLSCHEMA 2929
#define F_NUMERIC_GT 1720
#define F_PG_COLUMN_IS_UPDATABLE 3843
#define F_STATEMENT_TIMESTAMP 2648
#define F_WINDOW_DENSE_RANK 3102
#define F_MACADDR_GE 834
#define F_SCALARLTJOINSEL 107
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define ERRCODE_NULL_VALUE_NO_INDICATOR_PARAMETER MAKE_SQLSTATE('2','2','0','0','2')
#define __LC_ALL 6
#define F_SCHEMA_TO_XMLSCHEMA 2934
#define IPV6_RXDSTOPTS IPV6_DSTOPTS
#define F_FLOAT4LE 290
#define F_CIRCLE_BELOW 1460
#define ERRCODE_INVALID_COLUMN_REFERENCE MAKE_SQLSTATE('4','2','P','1','0')
#define F_HAS_LANGUAGE_PRIVILEGE_NAME_NAME 2262
#define F_DATE_MI_INTERVAL 2072
#define F_FMGR_C_VALIDATOR 2247
#define __ssize_t_defined 
#define EBADFD 77
#define F_RANGE_UPPER_INF 3854
#define VARSIZE_EXTERNAL(PTR) (VARHDRSZ_EXTERNAL + VARTAG_SIZE(VARTAG_EXTERNAL(PTR)))
#define F_PG_STAT_GET_DB_CONFLICT_STARTUP_DEADLOCK 3069
#define HAVE_LIBXSLT 1
#define F_ARRAY_TO_JSON_PRETTY 3154
#define F_TIMESTAMPTZ_TIMESTAMP 2027
#define F_TSVECTORSEND 3638
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define F_INT4PL 177
#define F_RANGE_CONSTRUCTOR2 3840
#define __FLT32_MANT_DIG__ 24
#define F_INET_SPG_PICKSPLIT 3797
#define F_TO_ASCII_ENC 1846
#define F_DATE_MI 1140
#define F_NETWORK_SUBEQ 928
#define F_BYTEANLIKE 2006
#define F_PG_ADVISORY_LOCK_INT4 2886
#define ERRCODE_INDETERMINATE_COLLATION MAKE_SQLSTATE('4','2','P','2','2')
#define F_CSTRING_OUT 2293
#define F_CASH_MUL_FLT8 896
#define F_BOOLGT 57
#define F_GIST_POLY_DISTANCE 3288
#define ERRCODE_WINDOWING_ERROR MAKE_SQLSTATE('4','2','P','2','0')
#define F_NUMERIC_IN 1701
#define gettext(msgid) dgettext (NULL, msgid)
#define F_GENERATE_SERIES_INT4 1067
#define _STDDEF_H 
#define __AARCH64EL__ 1
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define F_ARRAY_DIMS 747
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define PF_KCM 41
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#define EISNAM 120
#define SOCK_PACKET SOCK_PACKET
#define F_PG_INDEXAM_HAS_PROPERTY 636
#define IP_PMTUDISC_DO 2
#define SIOCGPGRP 0x8904
#define EXFULL 54
#define F_JSONB_ARRAY_ELEMENT 3215
#define F_JSONB_STRING_TO_TSVECTOR 4209
#define IP_PKTOPTIONS 9
#define F_ENUM_LAST 3529
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define F_BOX_CONTAIN 187
#define USE_POSIX_FADVISE 
#define F_PREFIXSEL 3437
#define F_I2TOD 235
#define F_I2TOF 236
#define __SIZE_T__ 
#define F_FLOAT48MUL 279
#define IS_DIR_SEP(ch) IS_NONWINDOWS_DIR_SEP(ch)
#define __FLT16_MAX_EXP__ 16
#define F_REPEAT 1622
#define __stub_gtty 
#define PG_RETURN_DATUM(x) return (x)
#define F_INT82GE 1861
#define F_INTERVAL_TIME 1419
#define PG_GETARG_DATUM(n) (fcinfo->arg[n])
#define __NLINK_T_TYPE __U32_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define F_GIST_BOX_UNION 2583
#define PG_GETARG_BPCHAR_PP(n) DatumGetBpCharPP(PG_GETARG_DATUM(n))
#define IPV6_MULTICAST_HOPS 18
#define F_UUID_GE 2957
#define EFAULT 14
#define F_PATH_AREA 979
#define IP_PASSSEC 18
#define IPPORT_RESERVED 1024
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define F_EQSEL 101
#define BlockIdGetBlockNumber(blockId) ( AssertMacro(BlockIdIsValid(blockId)), ((((BlockNumber) (blockId)->bi_hi) << 16) | ((BlockNumber) (blockId)->bi_lo)) )
#define IPV6_TRANSPARENT 75
#define PG_RETURN_INT16(x) return Int16GetDatum(x)
#define F_GISTHANDLER 332
#define PG_GETARG_UINT16(n) DatumGetUInt16(PG_GETARG_DATUM(n))
#define F_TSQUERY_CMP 3668
#define F_POLY_DISTANCE 729
#define F_INT4INC 766
#define ItemIdGetLength(itemId) ((itemId)->lp_len)
#define F_DIST_SB 365
#define F_JSON_RECV 323
#define F_PG_STAT_CLEAR_SNAPSHOT 2230
#define LC_PAPER __LC_PAPER
#define F_TIMETZ_ZONE 2037
#define __LC_ADDRESS 9
#define INADDR_DUMMY ((in_addr_t) 0xc0000008)
#define F_NUMERIC_LE 1723
#define F_INT8_MUL_CASH 3399
#define F_TIDGT 2790
#define F_INT2SHR 1897
#define __BIGGEST_ALIGNMENT__ 16
#define _SYS_SIZE_T_H 
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define AI_ALL 0x0010
#define ERRCODE_INVALID_CURSOR_NAME MAKE_SQLSTATE('3','4','0','0','0')
#define F_NUMERIC_LT 1722
#define ERRCODE_INVALID_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','2','3')
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define INT32_MAX (2147483647)
#define F_PG_TYPEOF 1619
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define F_GIST_POINT_CONSISTENT 2179
#define F_HAS_SERVER_PRIVILEGE_ID 3011
#define __INT32_C(c) c
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define AF_INET PF_INET
#define F_PG_LOGICAL_SLOT_GET_CHANGES 3782
#define F_DATETIMETZ_TIMESTAMPTZ 1297
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define pgoff_t off_t
#define F_GINARRAYEXTRACT 2743
#define F_INT8XOR 1906
#define F_TIMESTAMP_LE_TIMESTAMPTZ 2521
#define F_NUMERIC_AVG_DESERIALIZE 2741
#define F_NAMENLIKE 859
#define LABEL_ID_MIN 1
#define F_JSON_EXTRACT_PATH 3951
#define F_DATAN2 1603
#define MSG_SYN MSG_SYN
#define F_TIMESTAMPTZ_CMP_TIMESTAMP 2533
#define F_TIDLE 2793
#define _PATH_PROTOCOLS "/etc/protocols"
#define __glibc_macro_warning1(message) _Pragma (#message)
#define F_PG_STAT_GET_XACT_TUPLES_UPDATED 3041
#define __wur __attribute_warn_unused_result__
#define ERRCODE_TRIGGERED_DATA_CHANGE_VIOLATION MAKE_SQLSTATE('2','7','0','0','0')
#define F_BPCHARLEN 1318
#define F_TO_TSVECTOR 3749
#define F_PG_COLLATION_ACTUAL_VERSION 3448
#define LC_CTYPE __LC_CTYPE
#define F_REGEXP_MATCHES 2764
#define F_NUMERIC_POLY_STDDEV_POP 3392
#define AI_IDN_USE_STD3_ASCII_RULES __glibc_macro_warning ("AI_IDN_USE_STD3_ASCII_RULES is deprecated") 0x0200
#define PG_DETOAST_DATUM_COPY(datum) pg_detoast_datum_copy((struct varlena *) DatumGetPointer(datum))
#define F_BOOLLE 1691
#define F_CASH_EQ 888
#define F_BITSETBIT 3033
#define RegProcedureIsValid(p) OidIsValid(p)
#define F_BOOLLT 56
#define __FLT128_HAS_DENORM__ 1
#define VARATT_IS_EXTERNAL_EXPANDED(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_IS_EXPANDED(VARTAG_EXTERNAL(PTR)))
#define PG_GETARG_FLOAT8(n) DatumGetFloat8(PG_GETARG_DATUM(n))
#define SO_INCOMING_CPU 49
#define _BITS_FLOATN_H 
#define PG_DETOAST_DATUM_PACKED(datum) pg_detoast_datum_packed((struct varlena *) DatumGetPointer(datum))
#define ERRCODE_T_R_DEADLOCK_DETECTED MAKE_SQLSTATE('4','0','P','0','1')
#define F_TXID_SNAPSHOT_OUT 2940
#define F_INT8SMALLER 1237
#define F_NAMEREGEXNE 1252
#define FLOAT4_FITS_IN_INT16(num) ((num) >= (float4) PG_INT16_MIN && (num) < -((float4) PG_INT16_MIN))
#define DOUBLEALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_DOUBLE, (LEN))
#define F_PG_GET_TRIGGERDEF 1662
#define F_TINTERVALLENNE 267
#define UINT_FAST16_MAX (18446744073709551615UL)
#define ERRCODE_INVALID_ROLE_SPECIFICATION MAKE_SQLSTATE('0','P','0','0','0')
#define F_SCALARGTSEL 104
#define __error_t_defined 1
#define F_FLOAT4RECV 2424
#define __SCHAR_WIDTH__ 8
#define F_REGEXEQJOINSEL 1824
#define __ORDER_PDP_ENDIAN__ 3412
#define F_VARBIT 1687
#define F_NETWORK_SMALLER 3563
#define F_FLOAT84MUL 283
#define F_EVENT_TRIGGER_OUT 3595
#define F_CASH_GE 893
#define F_TINTERVALSEND 2467
#define F_INT28GE 1855
#define __PDP_ENDIAN 3412
#define F_LINE_EQ 1492
#define AG_RETURN_GRAPHID(x) return GRAPHID_GET_DATUM(x)
#define F_CASH_GT 892
#define INTALIGN(LEN) TYPEALIGN(ALIGNOF_INT, (LEN))
#define _ISOC95_SOURCE 1
#define FunctionCall2(flinfo,arg1,arg2) FunctionCall2Coll(flinfo, InvalidOid, arg1, arg2)
#define FunctionCall3(flinfo,arg1,arg2,arg3) FunctionCall3Coll(flinfo, InvalidOid, arg1, arg2, arg3)
#define FunctionCall5(flinfo,arg1,arg2,arg3,arg4,arg5) FunctionCall5Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define FunctionCall6(flinfo,arg1,arg2,arg3,arg4,arg5,arg6) FunctionCall6Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define FunctionCall7(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7) FunctionCall7Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define INT_FAST8_MIN (-128)
#define FunctionCall9(flinfo,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) FunctionCall9Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define F_PG_NODE_TREE_SEND 198
#define EL2HLT 51
#define IP_ADD_MEMBERSHIP 35
#define ERRCODE_INVALID_ARGUMENT_FOR_NTH_VALUE MAKE_SQLSTATE('2','2','0','1','6')
#define __ARM_64BIT_STATE 1
#define F_INT4RANGE_CANONICAL 3914
#define SIZEOF_OFF_T 8
#define F_POLY_LEFT 341
#define F_PG_SAFE_SNAPSHOT_BLOCKING_PIDS 3376
#define F_PG_IDENTIFY_OBJECT 3839
#define be64toh(x) __bswap_64 (x)
#define MAXPGPATH 1024
#define F_TIMETZ_LE 1355
#define F_INT8DEC 3546
#define BYTE_ORDER __BYTE_ORDER
#define ENOKEY 126
#define F_FLOAT4_NUMERIC 1742
#define F_PG_STAT_GET_PROGRESS_INFO 3318
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define PF_ROUTE PF_NETLINK
#define __INT_FAST32_TYPE__ long int
#define __have_pthread_attr_t 1
#define BlockNumberIsValid(blockNumber) ((bool) ((BlockNumber) (blockNumber) != InvalidBlockNumber))
#define ACCEPT_TYPE_ARG3 socklen_t
#define F_INT8_ACCUM_INV 3569
#define F_JSON_STRING_TO_TSVECTOR_BYID 4212
#define bool _Bool
#define AF_ROUTE PF_ROUTE
#define VARSIZE_ANY_EXHDR(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR)-VARHDRSZ_EXTERNAL : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR)-VARHDRSZ_SHORT : VARSIZE_4B(PTR)-VARHDRSZ))
#define VARDATA(PTR) VARDATA_4B(PTR)
#define IPV6_UNICAST_IF 76
#define F_TIMESTAMP_AGE 2058
#define GRAPHID_GET_DATUM(x) Int64GetDatum(x)
#define F_TO_TSVECTOR_BYID 3745
#define _BITS_TYPESIZES_H 1
#define F_CASH_IN 886
#define F_FLOAT8MUL 216
#define F_PG_STAT_RESET_SHARED 3775
#define F_PG_READ_FILE_OFF_LEN 2624
#define htole32(x) __uint32_identity (x)
#define F_HAS_TABLESPACE_PRIVILEGE_NAME 2394
#define F_BINARY_UPGRADE_SET_NEXT_PG_AUTHID_OID 3590
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define F_PG_OPERATOR_IS_VISIBLE 2082
#define F_GIN_EXTRACT_TSVECTOR 3656
#define EINVAL 22
#define F_CURSOR_TO_XML 2925
#define GetSysCacheHashValue4(cacheId,key1,key2,key3,key4) GetSysCacheHashValue(cacheId, key1, key2, key3, key4)
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define PG_INT16_MAX (0x7FFF)
#define F_WINDOW_RANK 3101
#define WSTOPSIG(status) __WSTOPSIG (status)
#define F_PG_PREPARED_XACT 1065
#define __UINT_LEAST16_TYPE__ short unsigned int
#define F_INET_GIST_CONSISTENT 3553
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define F_TIMETZ_GT 1357
#define F_OIDSEND 2419
#define F_INET_SPG_LEAF_CONSISTENT 3799
#define ERRCODE_NO_DATA MAKE_SQLSTATE('0','2','0','0','0')
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#define STDC_HEADERS 1
#define ERRCODE_INAPPROPRIATE_ACCESS_MODE_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','3')
#define ERRCODE_TOO_MANY_COLUMNS MAKE_SQLSTATE('5','4','0','1','1')
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define PG_GETARG_BPCHAR_P_COPY(n) DatumGetBpCharPCopy(PG_GETARG_DATUM(n))
#define F_CASH_MUL_FLT4 846
#define F_PG_HAS_ROLE_NAME_NAME 2705
#define RAND_MAX 2147483647
#define F_ABSTIMESEND 2463
#define F_MACADDR8_GE 4117
#define F_XMLEXISTS 2614
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define VARDATA_1B_E(PTR) (((varattrib_1b_e *) (PTR))->va_data)
#define _SIZET_ 
#define F_BYTEA_SUBSTR_NO_LEN 2013
#define F_PATH_SUB_PT 1437
#define F_DCOS 1605
#define F_NAMEICNLIKE 1636
#define EADDRNOTAVAIL 99
#define ESHUTDOWN 108
#define SO_SNDTIMEO_NEW 67
#define F_TS_RANK_TTF 3705
#define F_PG_STAT_GET_XACT_TUPLES_HOT_UPDATED 3043
#define ENTRY_ID_MAX INT64CONST(281474976710655)
#define F_HASHFLOAT8 452
#define F_BTTEXT_PATTERN_CMP 2166
#define AssertPointerAlignment(ptr,bndr) ((void)true)
#define SO_BINDTODEVICE 25
#define FOPEN_MAX 16
#define HAVE_GETADDRINFO 1
#define __SIZE_TYPE__ long unsigned int
#define DatumGetUInt64(X) ((uint64) (X))
#define WARNING 19
#define F_INT8EQ 467
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define F_BOX_ABOVE 2565
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define F_TEXTIN 46
#define F_TINTERVALRECV 2466
#define ERRCODE_FDW_TOO_MANY_HANDLES MAKE_SQLSTATE('H','V','0','1','4')
#define F_CASH_NE 889
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define ERRCODE_RAISE_EXCEPTION MAKE_SQLSTATE('P','0','0','0','1')
#define F_INT2NOT 1895
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define F_LSEG_HORIZONTAL 998
#define F_PG_GET_RULEDEF_EXT 2504
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define __FLT64X_DIG__ 33
#define F_JSONB_BUILD_ARRAY_NOARGS 3272
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define F_NUMERIC_EXP 1732
#define F_PG_DATABASE_SIZE_NAME 2168
#define F_PG_GET_FUNCTIONDEF 2098
#define __ARM_FEATURE_FMA 1
#define F_HAS_SEQUENCE_PRIVILEGE_NAME_NAME 2181
#define F_SPLIT_TEXT 2088
#define F_REGOPERATORRECV 2450
#define F_TSQUERY_AND 3669
#define F_HASHINET 422
#define PGINVALID_SOCKET (-1)
#define __INT8_TYPE__ signed char
#define F_INT2ABS 1253
#define F_GIST_POLY_COMPRESS 2586
#define F_BOOL_ALLTRUE 3498
#define GetSysCacheOid1(cacheId,key1) GetSysCacheOid(cacheId, key1, 0, 0, 0)
#define SOL_NETBEUI 267
#define F_GTSVECTOROUT 3647
#define F_I4TOF 318
#define F_INT8GT 470
#define F_HASHINT4EXTENDED 425
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define ERRCODE_DUPLICATE_OBJECT MAKE_SQLSTATE('4','2','7','1','0')
#define LC_NUMERIC __LC_NUMERIC
#define F_HAS_COLUMN_PRIVILEGE_ID_NAME 3022
#define F_INT4_AVG_ACCUM_INV 3571
#define F_BRIN_SUMMARIZE_NEW_VALUES 3952
#define __HAVE_DISTINCT_FLOAT128 0
#define __ELF__ 1
#define F_PG_STAT_GET_DB_TEMP_BYTES 3151
#define F_LINE_VERTICAL 1414
#define NOTICE 18
#define PACKAGE_VERSION "11.18"
#define F_INT8ABS 1230
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define IPV6_PKTINFO 50
#define F_RANGE_IN 3834
#define F_POINT_EQ 135
#define VARATT_IS_4B(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x01) == 0x00)
#define F_DATAND 2733
#define F_RELTIMEEQ 257
#define F_PG_NDISTINCT_OUT 3356
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define OidIsValid(objectId) ((bool) ((objectId) != InvalidOid))
#define MovedPartitionsBlockNumber InvalidBlockNumber
#define F_TIMESTAMPTZ_NE_TIMESTAMP 2532
#define PG_MAJORVERSION "11"
#define F_JSONB_CONCAT 3301
#define F_JSONB_FLOAT8 2580
#define F_TEXT_LARGER 458
#define SIOCGSTAMP_OLD 0x8906
#define F_INT4ABS 1251
#define isupper_l(c,l) __isupper_l ((c), (l))
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define _BITS_BYTESWAP_H 1
#define F_FTOI4 319
#define __ID_T_TYPE __U32_TYPE
#define PF_NETLINK 16
#define ALIGNOF_INT 4
#define F_INT8IN 460
#define DatumGetInt16(X) ((int16) (X))
#define MCAST_UNBLOCK_SOURCE 44
#define isdigit(c) __isctype((c), _ISdigit)
#define ERRCODE_WRONG_OBJECT_TYPE MAKE_SQLSTATE('4','2','8','0','9')
#define ELIBSCN 81
#define F_NUMERIC_POLY_DESERIALIZE 3340
#define F_SCALARGESEL 337
#define F_BITGE 1592
#define INVALID_LABEL_ID 0
#define ERRCODE_GENERATED_ALWAYS MAKE_SQLSTATE('4','2','8','C','9')
#define F_CIRCLE_SAME 1452
#define F_LSEG_INTERPT 362
#define F_FLOAT8_ACCUM 222
#define F_FLOAT8EQ 293
#define ERRCODE_FDW_INVALID_OPTION_INDEX MAKE_SQLSTATE('H','V','0','0','C')
#define F_PG_CURRENT_WAL_INSERT_LSN 2852
#define INT8_WIDTH 8
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define F_FLOAT8_REGR_SYY 2808
#define F_PARSE_IDENT 1268
#define HAVE_DECL_SNPRINTF 1
#define GetSysCacheOid2(cacheId,key1,key2) GetSysCacheOid(cacheId, key1, key2, 0, 0)
#define MCXT_ALLOC_HUGE 0x01
#define F_INT8GE 472
#define SO_DOMAIN 39
#define SOL_RAW 255
#define F_REGOPERSEND 2449
#define F_TIMESTAMP_GT_TIMESTAMPTZ 2523
#define VARATT_IS_4B_C(PTR) ((((varattrib_1b *) (PTR))->va_header & 0x03) == 0x02)
#define AI_V4MAPPED 0x0008
#define F_PG_DDL_COMMAND_RECV 88
#define GetSysCacheOid3(cacheId,key1,key2,key3) GetSysCacheOid(cacheId, key1, key2, key3, 0)
#define F_TS_TYPANALYZE 3688
#define __FLT_RADIX__ 2
#define F_GENERATE_SUBSCRIPTS 1191
#define SO_REUSEPORT 15
#define F_DACOS 1601
#define PG_INT16_MIN (-0x7FFF-1)
#define F_JSON_STRIP_NULLS 3261
#define SOL_IRDA 266
#define MAXDIM 6
#define __INT_LEAST16_TYPE__ short int
#define IP_RETOPTS 7
#define F_INT2OR 1893
#define __ARM_ARCH_PROFILE 65
#define F_PG_GET_PUBLICATION_TABLES 6119
#define __LDBL_EPSILON__ 1.92592994438723585305597794258492732e-34L
#define PG_GETARG_BOOL(n) DatumGetBool(PG_GETARG_DATUM(n))
#define F_SHOW_ALL_FILE_SETTINGS 3329
#define INTPTR_MAX (9223372036854775807L)
#define F_INET_SERVER_PORT 2199
#define F_INET_TO_CIDR 1715
#define __UINTMAX_C(c) c ## UL
#define F_BYTEA_STRING_AGG_FINALFN 3544
#define F_TIMESTAMP_CMP_TIMESTAMPTZ 2526
#define ERRCODE_S_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('2','F','0','0','4')
#define SO_ERROR 4
#define _POSIX_C_SOURCE 200809L
#define IP_MULTICAST_IF 32
#define F_MACADDR8_OR 4122
#define F_INT28DIV 948
#define HAVE_USELOCALE 1
#define __LC_MESSAGES 5
#define F_INT8UP 1910
#define F_BYTEALIKE 2005
#define F_INT84PL 1274
#define F_CIRCLE_OUT 1451
#define InvalidOffsetNumber ((OffsetNumber) 0)
#define F_JSONB_GE 4042
#define ERRCODE_SQLSERVER_REJECTED_ESTABLISHMENT_OF_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','4')
#define F_BOX_CONTAIN_PT 193
#define F_TXID_SNAPSHOT_SEND 2942
#define __ARM_PCS_AAPCS64 1
#define F_PG_GET_INDEXDEF 1643
#define F_MKTINTERVAL 676
#define LOG_DESTINATION_SYSLOG 2
#define F_PG_AVAILABLE_EXTENSIONS 3082
#define F_INT4UM 212
#define F_JSON_AGG_TRANSFN 3173
#define F_PG_TS_TEMPLATE_IS_VISIBLE 3768
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define _ALLOCA_H 1
#define IPV6_LEAVE_GROUP 21
#define INT64_MODIFIER "l"
#define F_LSEG_PERP 996
#define USE_UNNAMED_POSIX_SEMAPHORES 1
#define F_LINE_PERP 1413
#define ERRCODE_ASSERT_FAILURE MAKE_SQLSTATE('P','0','0','0','4')
#define F_RELTIMEGE 262
#define F_BOX_OVERLAP 125
#define F_PG_INDEX_COLUMN_HAS_PROPERTY 638
#define F_CHAR_BPCHAR 860
#define SO_PEERNAME 28
#define F_PATH_POLY 1449
#define AF_ATMSVC PF_ATMSVC
#define ENAVAIL 119
#define F_PG_EVENT_TRIGGER_DDL_COMMANDS 4568
#define PG_DIAG_CONTEXT 'W'
#define HAVE_NET_IF_H 1
#define F_RANGE_NE 3856
#define F_ELEM_CONTAINED_BY_RANGE 3860
#define SO_SNDBUFFORCE 32
#define F_INT8MI 464
#define F_REGEXP_MATCH 3397
#define __SIZEOF_PTHREAD_BARRIERATTR_T 8
#define F_TSQUERYOUT 3613
#define F_CHAR_TEXT 946
#define __LDBL_REDIR(name,proto) name proto
#define ItemIdSetRedirect(itemId,link) ( (itemId)->lp_flags = LP_REDIRECT, (itemId)->lp_off = (link), (itemId)->lp_len = 0 )
#define AGG_CONTEXT_WINDOW 2
#define HAVE_DECL_STRTOULL 1
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define RELSEG_SIZE 131072
#define F_TIDLT 2791
#define F_ANYNONARRAY_OUT 2778
#define MSG_TRUNC MSG_TRUNC
#define F_INT2VECTORRECV 2410
#define VARHDRSZ_SHORT offsetof(varattrib_1b, va_data)
#define OffsetToPointer(base,offset) ((void *)((char *) base + offset))
#define F_CIRCLE_MUL_PT 1148
#define F_PG_SWITCH_WAL 2848
#define F_INT82MUL 839
#define F_UUID_GT 2958
#define POSTGRES_EXT_H 
#define F_MACADDR8_AND 4121
#define F_INT4UP 1912
#define F_OIDVECTOREQ 679
#define ERRCODE_GROUPING_ERROR MAKE_SQLSTATE('4','2','8','0','3')
#define F_CIDR_IN 1267
#define ENOSTR 60
#define WCHAR_MIN __WCHAR_MIN
#define __blksize_t_defined 
#define F_TXID_SNAPSHOT_XMIN 2945
#define F_PG_MY_TEMP_SCHEMA 2854
#define F_REGCLASSIN 2218
#define __INT_LEAST64_WIDTH__ 64
#define F_MACADDR8_IN 4110
#define F_BYTEAGETBYTE 721
#define EPROTO 71
#define F_TEXTICREGEXEQ 1238
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define IP_FREEBIND 15
#define F_OIDLARGER 1965
#define ERRCODE_E_R_I_E_TRIGGER_PROTOCOL_VIOLATED MAKE_SQLSTATE('3','9','P','0','1')
#define F_PG_NDISTINCT_SEND 3358
#define F_HAS_SERVER_PRIVILEGE_ID_NAME 3008
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define F_CIRCLE_ADD_PT 1146
#define F_OIDNE 185
#define F_TIMETZTYPMODOUT 2912
#define HAVE_UNSETENV 1
#define F_BE_LO_GET_FRAGMENT 3459
#define EOVERFLOW 75
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __STDC_IEC_60559_BFP__ 201404L
#define F_PG_TABLESPACE_LOCATION 3778
#define PG_RETURN_BPCHAR_P(x) PG_RETURN_POINTER(x)
#define FunctionCall4(flinfo,arg1,arg2,arg3,arg4) FunctionCall4Coll(flinfo, InvalidOid, arg1, arg2, arg3, arg4)
#define __toascii_l(c,l) ((l), __toascii (c))
#define F_WINDOW_LEAD_WITH_OFFSET_AND_DEFAULT 3111
#define HAVE_SSL_CLEAR_OPTIONS 1
#define F_BOOLIN 1242
#define F_REGCLASSOUT 2219
#define F_PG_STAT_GET_FUNCTION_TOTAL_TIME 2979
#define F_FLOAT48LT 301
#define __SIZEOF_PTRDIFF_T__ 8
#define F_FLOAT8GT 297
#define F_GTSVECTORIN 3646
#define F_TSVECTOR_FILTER 3319
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define SEEK_SET 0
#define IS_HIGHBIT_SET(ch) ((unsigned char)(ch) & HIGHBIT)
#define AttrNumberIsForUserDefinedAttr(attributeNumber) ((bool) ((attributeNumber) > 0))
#define F_HASH_ARRAY_EXTENDED 782
#define ERRCODE_TOO_MANY_CONNECTIONS MAKE_SQLSTATE('5','3','3','0','0')
#define ERRCODE_FDW_ERROR MAKE_SQLSTATE('H','V','0','0','0')
#define IP_PMTUDISC_WANT 1
#define F_TSQUERY_LT 3662
#define F_HAS_COLUMN_PRIVILEGE_ID_ATTNUM 3023
#define IP_XFRM_POLICY 17
#define SO_TIMESTAMPNS SO_TIMESTAMPNS_OLD
#define F_TSMATCHSEL 3686
#define __ATOMIC_RELAXED 0
#define F_REGPROCEDUREOUT 2213
#define F_GIN_COMPARE_JSONB 3480
#define FUNC_MAX_ARGS 100
#define AF_IEEE802154 PF_IEEE802154
#define ERRCODE_FEATURE_NOT_SUPPORTED MAKE_SQLSTATE('0','A','0','0','0')
#define __iovec_defined 1
#define ENOTCONN 107
#define F_WINDOW_LEAD_WITH_OFFSET 3110
#define F_TIMETZ_TIME 2046
#define F_VOID_OUT 2299
#define F_THESAURUS_LEXIZE 3741
#define F_SPG_KD_CONFIG 4023
#define ObjectIdGetDatum(X) ((Datum) (X))
#define IN_CLASSA_MAX 128
#define STATUS_ERROR (-1)
#define F_MACADDR8_LE 4115
#define VARHDRSZ_EXTERNAL offsetof(varattrib_1b_e, va_data)
#define NAMEDATALEN 64
#define SO_TIMESTAMP SO_TIMESTAMP_OLD
#define SO_TXTIME 61
#define F_RANGE_SEND 3837
#define __stub_sigreturn 
#define F_POINT_ABOVE 131
#define ERRCODE_PROGRAM_LIMIT_EXCEEDED MAKE_SQLSTATE('5','4','0','0','0')
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define F_POLY_ABOVE 2569
#define F_INT82EQ 1856
#define F_PG_STAT_GET_XACT_TUPLES_RETURNED 3038
#define F_WIDTH_BUCKET_NUMERIC 2170
#define F_GIST_BOX_PENALTY 2581
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define F_PG_STAT_GET_BACKEND_WAIT_EVENT_TYPE 2788
#define F_BPCHARNE 1053
#define F_TEXTLEN 1257
#define F_GTSVECTOR_PICKSPLIT 3650
#define F_VARBITTYPMODOUT 2921
#define F_INT4OUT 43
#define ItemPointerSetInvalid(pointer) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), InvalidBlockNumber), (pointer)->ip_posid = InvalidOffsetNumber )
#define IPV6_RECVPATHMTU 60
#define GRAPHIDARRAYOID get_GRAPHIDARRAYOID()
#define F_ABSTIMEIN 240
#define SO_DETACH_FILTER 27
#define F_TIME_SCALE 1968
#define F_SMGREQ 762
#define PF_TIPC 30
#define F_PG_LSN_MI 3237
#define __restrict_arr __restrict
#define EAI_AGAIN -3
#define INTPTR_MIN (-9223372036854775807L-1)
#define F_INT2AND 1892
#define F_PREFIXJOINSEL 3438
#define F_FLOAT8_REGR_SLOPE 2813
#define IP_MSFILTER 41
#define _EXTERN_INLINE __extern_inline
#define __f32(x) x ##f32
#define ENOMEDIUM 123
#define F_MACADDR_IN 436
#define HAVE_GETPWUID_R 1
#define F_HASHINT2 449
#define F_RI_FKEY_SETNULL_UPD 1651
#define AssertVariableIsOfTypeMacro(varname,typename) (StaticAssertExpr(__builtin_types_compatible_p(__typeof__(varname), typename), CppAsString(varname) " does not have type " CppAsString(typename)))
#define PG_RETURN_BOOL(x) return BoolGetDatum(x)
#define PG_DIAG_SOURCE_FUNCTION 'R'
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define F_CASH_SEND 2493
#define __USE_MISC 1
#define SO_MARK 36
#define F_PG_STAT_GET_ACTIVITY 2022
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_NAME 3004
#define PG_KRB_SRVNAM "postgres"
#define __UWORD_TYPE unsigned long int
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define F_PG_STAT_FILE 3307
#define F_GTSQUERY_CONSISTENT_OLDSIG 3793
#define __LDBL_DIG__ 33
#define F_NUMERIC_INC 1764
#define __LC_PAPER 7
#define IP_BLOCK_SOURCE 38
#define ERRCODE_SQLCLIENT_UNABLE_TO_ESTABLISH_SQLCONNECTION MAKE_SQLSTATE('0','8','0','0','1')
#define F_INT4SEND 2407
#define F_INT82GT 1859
#define PG_MODULE_MAGIC extern PGDLLEXPORT const Pg_magic_struct *PG_MAGIC_FUNCTION_NAME(void); const Pg_magic_struct * PG_MAGIC_FUNCTION_NAME(void) { static const Pg_magic_struct Pg_magic_data = PG_MODULE_MAGIC_DATA; return &Pg_magic_data; } extern int no_such_variable
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define __FLT64_IS_IEC_60559__ 2
#define _SIZE_T_ 
#define F_TIMETYPMODIN 2909
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define F_LSEG_RECV 2480
#define __FLT16_IS_IEC_60559__ 2
#define ERRCODE_INSUFFICIENT_PRIVILEGE MAKE_SQLSTATE('4','2','5','0','1')
#define SearchSysCacheExists2(cacheId,key1,key2) SearchSysCacheExists(cacheId, key1, key2, 0, 0)
#define NI_NUMERICSERV 2
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define GetSysCacheOid4(cacheId,key1,key2,key3,key4) GetSysCacheOid(cacheId, key1, key2, key3, key4)
#define F_TIMESTAMP_HASH_EXTENDED 3411
#define F_INT8OUT 461
#define AF_ATMPVC PF_ATMPVC
#define DEFAULT_XLOG_SEG_SIZE (16*1024*1024)
#define F_UUID_NE 2959
#define UINT_FAST32_MAX (18446744073709551615UL)
#define F_DATE_LT_TIMESTAMPTZ 2351
#define F_RANGE_UPPER 3849
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define _WCHAR_T_H 
#define F_INT8UM 462
#define ENODEV 19
#define F_HASHINT4 450
#define SQL_STR_DOUBLE(ch,escape_backslash) ((ch) == '\'' || ((ch) == '\\' && (escape_backslash)))
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION_FOR_BRANCH_TRANSACTION MAKE_SQLSTATE('2','5','0','0','5')
#define IPV6_AUTOFLOWLABEL 70
#define ERRCODE_FDW_INVALID_HANDLE MAKE_SQLSTATE('H','V','0','0','B')
#define F_ARRAY_UNNEST 2331
#define F_NETWORK_HOST 699
#define ESCAPE_STRING_SYNTAX 'E'
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define F_DTOI2 237
#define F_DTOI8 483
#define HAVE_STRUCT_TM_TM_ZONE 1
#define F_JSONB_OBJECT_AGG_FINALFN 3269
#define __WCLONE 0x80000000
#define PG_GETARG_OID(n) DatumGetObjectId(PG_GETARG_DATUM(n))
#define F_PG_STAT_GET_TUPLES_RETURNED 1929
#define EBFONT 59
#define likely(x) __builtin_expect((x) != 0, 1)
#define __stub___compat_create_module 
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define F_LINE_INTERPT 1494
#define F_TIMETZ_RECV 2472
#define F_GIN_CMP_PREFIX 2700
#define F_HASHNAMEEXTENDED 447
#define EMSGSIZE 90
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define F_VARCHAR_TRANSFORM 3097
#define F_ARRAY_GT 392
#define EKEYEXPIRED 127
#define UInt32GetDatum(X) ((Datum) (X))
#define F_TIMESTAMP_PL_INTERVAL 2032
#define F_TIDSEND 2439
#define PF_PACKET 17
#define ERRCODE_FDW_INVALID_COLUMN_NUMBER MAKE_SQLSTATE('H','V','0','0','8')
#define F_DTOF 312
#define F_OPAQUE_IN 2306
#define F_BOXES_BOUND_BOX 4067
#define ERRCODE_INVALID_SCHEMA_DEFINITION MAKE_SQLSTATE('4','2','P','1','5')
#define F_FLOAT8_VAR_POP 2512
#define F_JSONB_GT 4040
#define __WCHAR_MIN __WCHAR_MIN__
#define __FLT64_DIG__ 15
#define F_JSON_TO_TSVECTOR_BYID 4216
#define AssertMacro(condition) ((void)true)
#define F_POLY_CONTAIN 340
#define F_NETWORK_BROADCAST 698
#define HAVE_GCC__SYNC_INT64_CAS 1
#define ERRCODE_SQL_ROUTINE_EXCEPTION MAKE_SQLSTATE('2','F','0','0','0')
#define SIOCSPGRP 0x8902
#define IP_PMTUDISC_DONT 0
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define F_TIMESTAMPTZ_LT_DATE 2377
#define F_HASHINT8 949
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __USE_ISOC95 1
#define F_ABSTIMEOUT 241
#define F_PATH_N_LT 982
#define HAVE_SYNC_FILE_RANGE 1
#define NULL ((void *)0)
#define HAVE_IPV6 1
#define F_BYTEAGETBIT 723
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define SO_BSDCOMPAT 14
#define F_BIT_OUT 1565
#define ERRCODE_CONNECTION_FAILURE MAKE_SQLSTATE('0','8','0','0','6')
#define F_MAKEACLITEM 1365
#define F_BPCHAR 668
#define __U64_TYPE unsigned long int
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define F_TIMESTAMP_LARGER 1196
#define IPV6_RTHDRDSTOPTS 55
#define __FLT_HAS_QUIET_NAN__ 1
#define F_ICLIKEJOINSEL 1816
#define IP_RECVOPTS 6
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE MAKE_SQLSTATE('2','2','0','0','3')
#define F_PG_DROP_REPLICATION_SLOT 3780
#define F_HASHENUM 3515
#define F_GTSQUERY_SAME 3699
#define F_ABSTIMEEQ 251
#define INT32_C(c) c
#define F_INT82LE 1860
#define __FLT_MAX_10_EXP__ 38
#define ERRCODE_INVALID_XML_DOCUMENT MAKE_SQLSTATE('2','2','0','0','M')
#define _____fpos64_t_defined 1
#define F_HAS_SEQUENCE_PRIVILEGE_ID_NAME 2183
#define ERRCODE_FDW_TABLE_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','R')
#define ALIGNOF_LONG 8
#define F_INT82LT 1858
#define __USE_ISOC99 1
#define F_ICREGEXEQJOINSEL 1826
#define F_TIMESTAMP_EQ 1152
#define _PWD_H 1
#define F_GTSQUERY_PENALTY 3700
#define LOG_DESTINATION_EVENTLOG 4
#define _PATH_NETWORKS "/etc/networks"
#define PF_IEEE802154 36
#define F_INTERVAL_PL 1169
#define F_BTRIM 884
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define CStringGetDatum(X) PointerGetDatum(X)
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define __glibc_c99_flexarr_available 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define F_TINTERVALEND 273
#define ERRCODE_INVALID_ARGUMENT_FOR_LOG MAKE_SQLSTATE('2','2','0','1','E')
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define HAVE_LDAP_H 1
#define ELIBACC 79
#define InvalidOid ((Oid) 0)
#define va_copy(d,s) __builtin_va_copy(d,s)
#define HAVE_CBRT 1
#define __glibc_objsize0(__o) __bos0 (__o)
#define F_RECORD_IMAGE_GT 3184
#define OID_MAX UINT_MAX
#define EHWPOISON 133
#define F_BRIN_INCLUSION_ADD_VALUE 4106
#define INADDR_ALLSNOOPERS_GROUP ((in_addr_t) 0xe000006a)
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define F_UUID_CMP 2960
#define ERRCODE_INVALID_ARGUMENT_FOR_WIDTH_BUCKET_FUNCTION MAKE_SQLSTATE('2','2','0','1','G')
#define HAVE_SPINLOCKS 1
#define F_ABSTIMERECV 2462
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define F_INET_SPG_CONFIG 3795
#define F_MACADDR8_SEND 3447
#define F_TO_REGPROCEDURE 3479
#define INT16_WIDTH 16
#define F_LSEG_DISTANCE 361
#define F_PG_READ_BINARY_FILE_OFF_LEN 3827
#define NI_DGRAM 16
#define HAVE_LONG_INT_64 1
#define IPV6_JOIN_ANYCAST 27
#define F_POLY_BOX 1446
#define F_DSIND 2735
#define F_INT82NE 1857
#define __unix 1
#define ERRCODE_FDW_COLUMN_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','5')
#define F_TIMESTAMP_GE 1156
#define IP_HDRINCL 3
#define F_PERCENTILE_DISC_MULTI_FINAL 3979
#define OffsetNumberNext(offsetNumber) ((OffsetNumber) (1 + (offsetNumber)))
#define F_BOX_INTERSECT 980
#define _BSD_PTRDIFF_T_ 
#define PG_VERSION_NUM 110018
#define _BITS_PTHREADTYPES_COMMON_H 1
#define IPV6_TCLASS 67
#define F_JSON_EACH_TEXT 3959
#define F_ARRAY_EQ 744
#define F_POLY_RIGHT 344
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define MCAST_JOIN_SOURCE_GROUP 46
#define F_PG_GET_KEYWORDS 1686
#define F_CHARTOI4 77
#define F_PG_XACT_COMMIT_TIMESTAMP 3581
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define _LIBINTL_H 1
#define __DBL_HAS_DENORM__ 1
#define F_TINTERVALSTART 272
#define __UINT_FAST16_TYPE__ long unsigned int
#define LP_DEAD 3
#define F_PATH_SEND 2483
#define ERRCODE_INVALID_DATABASE_DEFINITION MAKE_SQLSTATE('4','2','P','1','2')
#define F_INT4SHR 1903
#define ERRCODE_LOCATOR_EXCEPTION MAKE_SQLSTATE('0','F','0','0','0')
#define F_INT4_ACCUM 1835
#define F_NUMERIC_RECV 2460
#define F_TIME_IN 1143
#define F_QUERY_TO_XML_AND_XMLSCHEMA 2930
#define F_CLOSE_LS 1488
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define F_BTRECORDIMAGECMP 3187
#define F_TIMESTAMP_PART 2021
#define __FLT32X_HAS_QUIET_NAN__ 1
#define F_NEQJOINSEL 106
#define F_BIT 1685
#define F_RANGE_CONTAINS_ELEM 3858
#define AF_IRDA PF_IRDA
#define F_INTERVAL_SEND 2479
#define __CHAR16_TYPE__ short unsigned int
#define __FLT64X_MAX_EXP__ 16384
#define F_OVERLAPS_TIMETZ 1271
#define F_I8TOOID 1287
#define F_PG_STAT_GET_XACT_BLOCKS_HIT 3045
#define PG_GETARG_BYTEA_P(n) DatumGetByteaP(PG_GETARG_DATUM(n))
#define __ss_aligntype unsigned long int
#define F_PG_CANCEL_BACKEND 2171
#define F_HAS_FUNCTION_PRIVILEGE_NAME 2260
#define E2BIG 7
#define F_NUMERIC_FLOOR 1712
#define BIG_ENDIAN __BIG_ENDIAN
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define PF_IPX 4
#define PF_PPPOX 24
#define F_HASHCHAREXTENDED 446
#define F_CIRCLE_DIAMETER 1469
#define MAKE_SQLSTATE(ch1,ch2,ch3,ch4,ch5) (PGSIXBIT(ch1) + (PGSIXBIT(ch2) << 6) + (PGSIXBIT(ch3) << 12) + (PGSIXBIT(ch4) << 18) + (PGSIXBIT(ch5) << 24))
#define _STRINGS_H 1
#define F_TO_HEX32 2089
#define AI_IDN 0x0040
#define F_BITOVERLAY 3030
#define __SIZE_WIDTH__ 64
#define F_PG_LSN_SEND 3239
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#define F_TIMESTAMPTZ_TIMETZ 1388
#define F_ARRAY_TYPANALYZE 3816
#define HAVE_STRERROR 1
#define F_FLOAT8_STDDEV_SAMP 1832
#define PF_ECONET 19
#define SO_TIMESTAMPNS_NEW 64
#define DatumGetTextPP(X) ((text *) PG_DETOAST_DATUM_PACKED(X))
#define _WCHAR_T_DECLARED 
#define F_BOX_CONTAINED 192
#define __INT_LEAST16_MAX__ 0x7fff
#define F_TEXTLIKE 850
#define AF_MPLS PF_MPLS
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define F_ANYRANGE_OUT 3833
#define NO_DATA 4
#define F_BITOVERLAY_NO_LEN 3031
#define F_PLAINTO_TSQUERY 3751
#define F_INT28MI 942
#define F_PG_STAT_GET_LAST_ANALYZE_TIME 2783
#define __stub_revoke 
#define HAVE_SYMLINK 1
#define __INT64_MAX__ 0x7fffffffffffffffL
#define _BITS_ENDIAN_H 1
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define EAI_IDN_ENCODE -105
#define AF_KEY PF_KEY
#define F_SPG_TEXT_CONFIG 4027
#define HAVE_UUID_UUID_H 1
#define PG_GETARG_INT64(n) DatumGetInt64(PG_GETARG_DATUM(n))
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define F_INT8SHL 1908
#define F_INT4_SUM 1841
#define F_INT8SHR 1909
#define F_PG_LOGICAL_SLOT_PEEK_CHANGES 3784
#define PF_QIPCRTR 42
#define F_PG_STAT_GET_TUPLES_INSERTED 1931
#define F_PATH_N_EQ 984
#define HAVE_UNIX_SOCKETS 1
#define F_REGEXP_SPLIT_TO_TABLE_NO_FLAGS 2765
#define ItemPointerSetBlockNumber(pointer,blockNumber) ( AssertMacro(PointerIsValid(pointer)), BlockIdSet(&((pointer)->ip_blkid), blockNumber) )
#define F_LINE_OUT 1491
#define __INT_LEAST64_TYPE__ long int
#define F_JSONB_RECV 3805
#define INT64_MAX (__INT64_C(9223372036854775807))
#define F_BTTIDCMP 2794
#define htole16(x) __uint16_identity (x)
#define HAVE_GSSAPI_GSSAPI_H 1
#define F_TSQUERYTREE 3673
#define SOL_KCM 281
#define F_TIMESTAMPTZ_IZONE 1026
#define Float8GetDatumFast(X) Float8GetDatum(X)
#define F_TIMESTAMP_LT 1154
#define F_INT42EQ 159
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define USE_LIBXSLT 1
#define F_RI_FKEY_NOACTION_DEL 1654
#define F_PG_STAT_GET_VACUUM_COUNT 3054
#define F_WINDOW_LAG_WITH_OFFSET_AND_DEFAULT 3108
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define F_RELTIMESEND 2465
#define F_SPG_RANGE_QUAD_CONFIG 3469
#define F_ARRAY_AGG_ARRAY_FINALFN 4052
#define F_PG_CURRENT_WAL_LSN 2849
#define F_ABSTIMEGE 256
#define F_HAS_ANY_COLUMN_PRIVILEGE_ID_ID 3027
#define ENTRY_ID_BITS (32 + 16)
#define PG_GETARG_BPCHAR_P_SLICE(n,a,b) DatumGetBpCharPSlice(PG_GETARG_DATUM(n),a,b)
#define __STDC_VERSION__ 201710L
#define EOPNOTSUPP 95
#define ERRCODE_OBJECT_IN_USE MAKE_SQLSTATE('5','5','0','0','6')
#define __BITS_SOCKET_H 
#define F_NUMERIC_FLOAT4 1745
#define F_FLOAT8_REGR_COMBINE 3342
#define ENOTDIR 20
#define F_BOX_CIRCLE 1479
#define F_JSONB_OBJECT_TWO_ARG 3264
#define F_TS_RANK_WTT 3704
#define SO_DEBUG 1
#define SEEK_HOLE 4
#define F_DSIN 1604
#define F_JSONB_TO_RECORD 3490
#define F_GENERATE_SERIES_STEP_INT4 1066
#define F_GENERATE_SERIES_STEP_INT8 1068
#define VARATT_IS_EXTERNAL_INDIRECT(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_INDIRECT)
#define F_FLOAT8_NUMERIC 1743
#define __INT_FAST8_MAX__ 0x7f
#define __ARM_ARCH 8
#define F_DRANDOM 1598
#define F_LPAD 873
#define F_TIMESTAMP_NE 1153
#define PG_INT8_MIN (-0x7F-1)
#define __PMT(args) args
#define HAVE_RL_COMPLETION_MATCHES 1
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define F_HAS_ANY_COLUMN_PRIVILEGE_NAME 3028
#define F_TIMETYPMODOUT 2910
#define HAVE_INET_ATON 1
#define AF_NETBEUI PF_NETBEUI
#define F_BRIN_INCLUSION_CONSISTENT 4107
#define ERRCODE_INVALID_TABLE_DEFINITION MAKE_SQLSTATE('4','2','P','1','6')
#define IPV6_2292RTHDR 5
#define PG_GETARG_TEXT_PP(n) DatumGetTextPP(PG_GETARG_DATUM(n))
#define IPPROTO_NONE IPPROTO_NONE
#define ECONNRESET 104
#define WTERMSIG(status) __WTERMSIG (status)
#define F_TIMESTAMP_GT 1157
#define F_JSONB_LE 4041
#define F_LSEG_CENTER 225
#define F_ARRAY_LARGER 515
#define PGDLLIMPORT 
#define EIDRM 43
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define F_VARBIT_SEND 2459
#define F_TIMESTAMP_DATE 2029
#define ERRCODE_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','0','0','1')
#define AF_SNA PF_SNA
#define F_HAS_DATABASE_PRIVILEGE_NAME_NAME 2250
#define linux 1
#define F_TINTERVALEQ 784
#define SOL_DCCP 269
#define LP_NORMAL 1
#define MultiXactIdGetDatum(X) ((Datum) (X))
#define F_BTINT42CMP 2191
#define F_NUMERIC_LARGER 1767
#define ENXIO 6
#define F_PG_HAS_ROLE_NAME_ID 2706
#define ntohl(x) __bswap_32 (x)
#define F_NAMEICREGEXNE 1241
#define ntohs(x) __bswap_16 (x)
#define F_PG_STAT_GET_BACKEND_DBID 1938
#define F_CIRCLE_NE 1463
#define F_TEXT_LEFT 3060
#define IPV6_RTHDR_LOOSE 0
#define F_PG_TS_CONFIG_IS_VISIBLE 3758
#define F_PG_DEPENDENCIES_OUT 3405
#define F_INT2SEND 2405
#define PG_FUNCTION_ARGS FunctionCallInfo fcinfo
#define __ARM_FEATURE_UNALIGNED 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define F_FTOD 311
#define F_BTINT4SORTSUPPORT 3130
#define HAVE_GETOPT_LONG 1
#define HAVE_DECL_STRLCAT 0
#define F_INT84DIV 1277
#define _IOLBF 1
#define SO_BINDTOIFINDEX 62
#define htole64(x) __uint64_identity (x)
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define _THREAD_SHARED_TYPES_H 1
#define F_TRIGGER_IN 2300
#define EBADRQC 56
#define F_HASH_NUMERIC_EXTENDED 780
#define F_XID_AGE 1181
#define F_INETOR 2629
#define DatumGetTextP(X) ((text *) PG_DETOAST_DATUM(X))
#define F_INTERVAL_GT 1167
#define F_MAKE_INTERVAL 3464
#define __USE_POSIX2 1
#define F_POLY_SEND 2487
#define HAVE_LOCALE_T 1
#define ERRCODE_IDLE_IN_TRANSACTION_SESSION_TIMEOUT MAKE_SQLSTATE('2','5','P','0','3')
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define F_VARCHARRECV 2432
#define F_ABSTIMELT 253
#define F_SATISFIES_HASH_PARTITION 5028
#define F_CSTRING_IN 2292
#define F_TIMESTAMP_SCALE 1961
#define F_NUMERIC_VAR_SAMP 1838
#define ERRCODE_ZERO_LENGTH_CHARACTER_STRING MAKE_SQLSTATE('2','2','0','0','F')
#define F_TIMESTAMP_RECV 2474
#define ERRCODE_E_R_E_READING_SQL_DATA_NOT_PERMITTED MAKE_SQLSTATE('3','8','0','0','4')
#define F_PG_GET_EXPR 1716
#define __FLT64X_MIN_EXP__ (-16381)
#define INET6_ADDRSTRLEN 46
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define F_DISPELL_LEXIZE 3732
#define __FLT32_MIN_10_EXP__ (-37)
#define F_PG_TRIGGER_DEPTH 3163
#define IN_CLASSA_NSHIFT 24
#define F_PG_DEPENDENCIES_SEND 3407
#define F_BOX_RIGHT 191
#define SOL_XDP 283
#define __KEY_T_TYPE __S32_TYPE
#define pg_attribute_packed() __attribute__((packed))
#define sigev_notify_function _sigev_un._sigev_thread._function
#define F_INT2_ACCUM 1834
#define F_PATH_INTER 973
#define F_DATERANGE_CANONICAL 3915
#define __FLT32X_DIG__ 15
#define F_BYTEAOVERLAY_NO_LEN 752
#define F_PG_TOTAL_RELATION_SIZE 2286
#define __UINT8_TYPE__ unsigned char
#define ELOG_H 
#define SHUT_RDWR SHUT_RDWR
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 (__WORDSIZE == 64)
#define __WORDSIZE 64
#define __timer_t_defined 1
#define F_CONSTRUCT_POINT 1440
#define F_CASH_MUL_INT4 864
#define F_BPCHAREQ 1048
#define HAVE_LANGINFO_H 1
#define F_CIRCLE_IN 1450
#define HAVE__BUILTIN_OP_OVERFLOW 1
#define SET_VARSIZE(PTR,len) SET_VARSIZE_4B(PTR, len)
#define F_TIMESTAMPTZ_MI_INTERVAL 1190
#define __PTRDIFF_WIDTH__ 64
#define F_TIME_SEND 2471
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define F_EVENT_TRIGGER_IN 3594
#define __BEGIN_DECLS 
#define HAVE_BIO_GET_DATA 1
#define SCM_RIGHTS SCM_RIGHTS
#define F_INT2_AVG_ACCUM_INV 3570
#define F_JSON_TO_RECORDSET 3205
#define F_TS_MATCH_VQ 3634
#define F_JSONB_BOOL 3556
#define IPV6_RECVFRAGSIZE 77
#define F_CASH_DIV_CASH 3822
#define F_PATH_ISCLOSED 1430
#define F_MAKE_TIMESTAMP 3461
#define F_RANGE_OVERLAPS 3857
#define F_TIMETZ_HASH 1696
#define LC_TELEPHONE __LC_TELEPHONE
#define __SIZEOF_PTHREAD_MUTEXATTR_T 8
#define DatumGetPointer(X) ((Pointer) (X))
#define F_BOOLGE 1692
#define F_OIDVECTORSEND 2421
#define ENAMETOOLONG 36
#define F_PG_ADVISORY_UNLOCK_SHARED_INT4 2891
#define F_BPCHARCMP 1078
#define ERRCODE_DEPENDENT_OBJECTS_STILL_EXIST MAKE_SQLSTATE('2','B','P','0','1')
#define ERRCODE_UNDEFINED_TABLE MAKE_SQLSTATE('4','2','P','0','1')
#define F_PG_EXPORT_SNAPSHOT 3809
#define NI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("NI_IDN_ALLOW_UNASSIGNED is deprecated") 64
#define F_BOX_SEND 2485
#define F_RECORD_GT 2984
#define F_REGCONFIGRECV 3738
#define F_BTOIDCMP 356
#define F_TIMESTAMPTZ_TIME 2019
#define F_TEXT_REGCLASS 1079
#define __FLT64_HAS_INFINITY__ 1
#define SET_VARSIZE_SHORT(PTR,len) SET_VARSIZE_1B(PTR, len)
#define F_HAS_LANGUAGE_PRIVILEGE_ID_ID 2265
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define PG_GETARG_HEAPTUPLEHEADER_COPY(n) DatumGetHeapTupleHeaderCopy(PG_GETARG_DATUM(n))
#define __FLT16_HAS_INFINITY__ 1
#define ERRCODE_FDW_INVALID_DATA_TYPE MAKE_SQLSTATE('H','V','0','0','4')
#define MCXT_ALLOC_NO_OOM 0x02
#define false 0
#define IPV6_JOIN_GROUP 20
#define F_BPCHARGT 1051
#define F_INT4EQ 65
#define F_INET_GIST_FETCH 3573
#define _STRING_H 1
#define UINT_FAST32_WIDTH __WORDSIZE
#define HAVE_SYS_EPOLL_H 1
#define IPPROTO_MPLS IPPROTO_MPLS
#define F_JSON_TYPEOF 3968
#define F_TEXTREGEXEQ 1254
#define F_FLOAT8LT 295
#define _GCC_MAX_ALIGN_T 
#define HAVE_DECL_LLVMORCGETSYMBOLADDRESSIN 0
#define F_PG_CURRENT_WAL_FLUSH_LSN 3330
#define HAVE_LIBM 1
#define BlockIdSet(blockId,blockNumber) ( AssertMacro(PointerIsValid(blockId)), (blockId)->bi_hi = (blockNumber) >> 16, (blockId)->bi_lo = (blockNumber) & 0xffff )
#define F_INT2VECTOROUT 41
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define HAVE_LIBZ 1
#define F_TIMESTAMPTZ_ABSTIME 1180
#define F_GIN_EXTRACT_TSQUERY 3657
#define F_PG_NODE_TREE_OUT 196
#define ERRCODE_MOST_SPECIFIC_TYPE_MISMATCH MAKE_SQLSTATE('2','2','0','0','G')
#define ERRCODE_FDW_OUT_OF_MEMORY MAKE_SQLSTATE('H','V','0','0','1')
#define F_IN_RANGE_INT2_INT4 4131
#define F_XML_SEND 2899
#define MSG_OOB MSG_OOB
#define F_RECORD_IN 2290
#define F_REGCLASSSEND 2453
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define F_GTSVECTOR_SAME 3652
#define F_RANGE_AFTER 3864
#define le64toh(x) __uint64_identity (x)
#define F_HASH_NUMERIC 432
#define _PATH_SERVICES "/etc/services"
#define F_DATETIME_TIMESTAMP 1272
#define FILENAME_MAX 4096
#define F_INTERVAL_JUSTIFY_HOURS 1175
#define SOL_RXRPC 272
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define F_BPCHARIN 1044
#define MSG_RST MSG_RST
#define __FLT16_MANT_DIG__ 11
#define F_INT82PL 837
#define F_PATH_CLOSE 1433
#define L_cuserid 9
#define F_I4TOCHAR 78
#define VARHDRSZ ((int32) sizeof(int32))
#define F_PG_STAT_GET_BACKEND_CLIENT_PORT 1393
#define HAVE_POSIX_FADVISE 1
#define F_HASHMACADDR 399
#define __ino_t_defined 
#define ESOCKTNOSUPPORT 94
#define TEXTDOMAIN NULL
#define AF_LOCAL PF_LOCAL
#define __INTPTR_TYPE__ long int
#define F_JSONB_DELETE_IDX 3303
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ unsigned int
#define __CLOCKID_T_TYPE __S32_TYPE
#define F_PG_GET_FUNCTION_IDENTITY_ARGUMENTS 2232
#define F_IN_RANGE_TIMESTAMP_INTERVAL 4134
#define HAVE_INTPTR_T 1
#define __SLONGWORD_TYPE long int
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define F_WINDOW_FIRST_VALUE 3112
#define F_NETWORK_LARGER 3562
#define F_RECORD_GE 2986
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define F_PG_SIZE_PRETTY 2288
#define F_OIDRECV 2418
#define F_PG_RELATION_IS_PUBLISHABLE 6121
#define F_PG_OPFAMILY_IS_VISIBLE 3829
#define POSTGRES_H 
#define DatumGetVarCharPCopy(X) ((VarChar *) PG_DETOAST_DATUM_COPY(X))
#define F_PG_STAT_GET_LAST_AUTOANALYZE_TIME 2784
#define F_LINE_CONSTRUCT_PP 1493
#define F_TS_HEADLINE_JSONB_BYID 4202
#define F_CR_CIRCLE 1473
#define ERRCODE_FDW_UNABLE_TO_CREATE_REPLY MAKE_SQLSTATE('H','V','0','0','M')
#define IPV6_V6ONLY 26
#define F_INET_SET_MASKLEN 605
#define PG_RETURN_VARCHAR_P(x) PG_RETURN_POINTER(x)
#define F_GIN_TRICONSISTENT_JSONB 3488
#define IP_RECVTTL 12
#define F_NEQSEL 102
#define F_RANGE_ADJACENT 3862
#define F_TIME_EQ 1145
#define ELIBEXEC 83
#define AttrNumberGetAttrOffset(attNum) ( AssertMacro(AttrNumberIsForUserDefinedAttr(attNum)), ((attNum) - 1) )
#define PG_DIAG_SOURCE_FILE 'F'
#define __pic__ 2
#define F_FDW_HANDLER_IN 3116
#define ERRCODE_TO_CATEGORY(ec) ((ec) & ((1 << 12) - 1))
#define F_ENUM_GE 3513
#define F_RECORD_LT 2983
#define F_BOX_ADD 1422
#define F_OIDVECTORGE 680
#define UINT_LEAST16_MAX (65535)
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define HAVE__STATIC_ASSERT 1
#define F_PG_STAT_GET_DB_BLK_READ_TIME 2844
#define F_NETWORK_NETWORK 683
#define __ARM_ARCH_8A 1
#define F_PG_GET_TRIGGERDEF_EXT 2730
#define F_DATE_NE_TIMESTAMPTZ 2356
#define F_INT84MI 1275
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define F_CHARIN 1245
#define ERRCODE_LOCK_FILE_EXISTS MAKE_SQLSTATE('F','0','0','0','1')
#define F_BOX_DIAGONAL 981
#define F_PG_DDL_COMMAND_IN 86
#define F_PG_ADVISORY_XACT_LOCK_INT8 3089
#define F_BPCHARLE 1050
#define F_NETWORK_HOSTMASK 1362
#define __stub_chflags 
#define ERRCODE_LOCK_NOT_AVAILABLE MAKE_SQLSTATE('5','5','P','0','3')
#define HAVE_INT128 1
#define SysCacheSize (USERMAPPINGUSERSERVER + 1)
#define F_BPCHARLT 1049
#define __UQUAD_TYPE unsigned long int
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define ERRCODE_E_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('3','8','0','0','3')
#define ERRCODE_S_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED MAKE_SQLSTATE('2','F','0','0','3')
#define F_INT8RANGE_CANONICAL 3928
#define EDOTDOT 73
#define __BYTE_ORDER __LITTLE_ENDIAN
#define ERRCODE_INVALID_TABLESAMPLE_REPEAT MAKE_SQLSTATE('2','2','0','2','G')
#define F_POLY_SAME 339
#define F_WINDOW_PERCENT_RANK 3103
#define ALIGNOF_SHORT 2
#define PF_SMC 43
#define F_DTOI4 317
#define INT64_WIDTH 64
#define __USE_POSIX 1
#define PF_NFC 39
#define ETIME 62
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define F_INET_RECV 2496
#define HAVE_RANDOM 1
#define INT_LEAST16_WIDTH 16
#define F_TS_MATCH_TQ 3761
#define F_OIDVECTORIN 54
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define BUFSIZ 8192
#define HAVE_SHM_OPEN 1
#define __FSID_T_TYPE struct { int __val[2]; }
#define F_ARRAY_RECV 2400
#define F_TIMESTAMP_IN 1312
#define F_PG_NUM_NULLS 438
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define F_BIT_RECV 2456
#define F_TS_HEADLINE 3755
#define SO_PEEK_OFF 42
#define __FLT32_HAS_INFINITY__ 1
#define DatumGetTextPCopy(X) ((text *) PG_DETOAST_DATUM_COPY(X))
#define F_ROW_SECURITY_ACTIVE_NAME 3299
#define INT_FAST32_MAX (9223372036854775807L)
#define DatumGetCString(X) ((char *) DatumGetPointer(X))
#define EBADE 52
#define AF_ALG PF_ALG
#define F_DSIMPLE_INIT 3725
#define F_ENUM_RANGE_BOUNDS 3530
#define F_NAMELT 655
#define __UINT_FAST64_TYPE__ long unsigned int
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define F_JSONB_PRETTY 3306
#define F_BINARY_UPGRADE_SET_MISSING_VALUE 4101
#define F_HASH_ACLITEM_EXTENDED 777
#define WNOWAIT 0x01000000
#define F_BRIN_MINMAX_ADD_VALUE 3384
#define IPV6_PATHMTU 61
#define F_ENUM_CMP 3514
#define F_LASTVAL 2559
#define F_PG_READ_FILE 4100
#define EXIT_SUCCESS 0
#define __LDBL_REDIR_DECL(name) 
#define ELIBBAD 80
#define OidFunctionCall1(functionId,arg1) OidFunctionCall1Coll(functionId, InvalidOid, arg1)
#define F_WINDOW_LAST_VALUE 3113
#define F_HAS_DATABASE_PRIVILEGE_ID 2255
#define F_FLOAT8OUT 215
#define IPPROTO_MPTCP IPPROTO_MPTCP
#define F_TIMESTAMPTZ_LT_TIMESTAMP 2527
#define F_HASHINT8EXTENDED 442
#define AF_QIPCRTR PF_QIPCRTR
#define UINT_FAST8_MAX (255)
#define F_VARCHARIN 1046
#define __mode_t_defined 
#define F_JSONB_NUMERIC 3449
#define F_NUMERIC_FAC 111
#define __INT_MAX__ 0x7fffffff
#define F_NUMERIC_POLY_VAR_POP 3390
#define F_INT8OR 1905
#define F_MXID_AGE 3939
#define F_JSON_POPULATE_RECORDSET 3961
#define IN_MULTICAST(a) IN_CLASSD(a)
#define IPV6_ADDR_PREFERENCES 72
#define F_TRIGGER_OUT 2301
#define PTRDIFF_WIDTH __WORDSIZE
#define F_POINT_RIGHT 133
#define _LINUX_POSIX_TYPES_H 
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define HAVE_ISINF 1
#define __LC_COLLATE 3
#define F_CIRCLE_CENTER 1416
#define INT8_MIN (-128)
#define F_POINT_HORIZ 990
#define GetSysCacheHashValue3(cacheId,key1,key2,key3) GetSysCacheHashValue(cacheId, key1, key2, key3, 0)
#define F_GIN_CONSISTENT_JSONB 3484
#define F_TSVECTOR_NE 3619
#define F_PG_STAT_GET_XACT_NUMSCANS 3037
#define F_TS_HEADLINE_OPT 3754
#define __ASM_GENERIC_SOCKET_H 
#define SOL_IUCV 277
#define VARSIZE_SHORT(PTR) VARSIZE_1B(PTR)
#define F_TS_HEADLINE_JSON_BYID_OPT 4205
#define F_JSONB_POPULATE_RECORDSET 3475
#define BoolIsValid(boolean) ((boolean) == false || (boolean) == true)
#define __S16_TYPE short int
#define F_PG_LSN_NE 3236
#define F_BYTEALE 1950
#define F_TEXTREGEXNE 1256
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define F_TIMESTAMPTZ_CMP_DATE 2383
#define EROFS 30
#define F_GTSVECTOR_DECOMPRESS 3649
#define ERRCODE_T_R_SERIALIZATION_FAILURE MAKE_SQLSTATE('4','0','0','0','1')
#define MemSetAligned(start,val,len) do { long *_start = (long *) (start); int _val = (val); Size _len = (len); if ((_len & LONG_ALIGN_MASK) == 0 && _val == 0 && _len <= MEMSET_LOOP_LIMIT && MEMSET_LOOP_LIMIT != 0) { long *_stop = (long *) ((char *) _start + _len); while (_start < _stop) *_start++ = 0; } else memset(_start, _val, _len); } while (0)
#define EPROTONOSUPPORT 93
#define F_FLOAT8UM 220
#define DatumGetInt64(X) ((int64) (X))
#define _T_SIZE_ 
#define EBADR 53
#define EFBIG 27
#define F_GIST_CIRCLE_DISTANCE 3280
#define __TIMESIZE 64
#define PF_AX25 3
#define UINT_LEAST8_WIDTH 8
#define IPV6_RECVHOPLIMIT 51
#define HAVE_LDAP_INITIALIZE 1
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define F_INET_MERGE 4063
#define F_GIN_EXTRACT_JSONB_QUERY_PATH 3486
#define F_PG_STAT_GET_FUNCTION_CALLS 2978
#define PF_ATMSVC 20
#define OidFunctionCall6(functionId,arg1,arg2,arg3,arg4,arg5,arg6) OidFunctionCall6Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6)
#define INT16_C(c) c
#define F_OIDVECTORNE 619
#define F_QUOTE_IDENT 1282
#define __WNOTHREAD 0x20000000
#define F_DATE_SEND 2469
#define LONG_ALIGN_MASK (sizeof(long) - 1)
#define __LC_NUMERIC 1
#define F_CHAREQ 61
#define __USE_LARGEFILE64 1
#define F_PG_SLEEP 2626
#define HAVE_LIBPAM 1
#define F_NETWORKSEL 3560
#define MSG_BATCH MSG_BATCH
#define F_PG_NODE_TREE_IN 195
#define ERRCODE_FDW_SCHEMA_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','Q')
#define __INT64_TYPE__ long int
#define F_TSVECTOR_TO_ARRAY 3326
#define PF_MPLS 28
#define ERRCODE_FDW_INVALID_DATA_TYPE_DESCRIPTORS MAKE_SQLSTATE('H','V','0','0','6')
#define __FLT_MAX_EXP__ 128
#define F_QUERY_TO_XMLSCHEMA 2927
#define F_INT8AND 1904
#define F_TIME_RECV 2470
#define F_CIDEQ 69
#define F_PATH_DIV_PT 1439
#define F_BITPOSITION 1698
#define F_CIRCLE_OVERRIGHT 1456
#define F_POINT_SUB 1442
#define __cookie_io_functions_t_defined 1
#define __gid_t_defined 
#define ENETUNREACH 101
#define EXDEV 18
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define IN_LOOPBACKNET 127
#define VARDATA_1B(PTR) (((varattrib_1b *) (PTR))->va_data)
#define F_RTRIM1 401
#define IPV6_MULTICAST_IF 17
#define F_ARRAY_AGG_ARRAY_TRANSFN 4051
#define F_MODE_FINAL 3985
#define UINT32_C(c) c ## U
#define F_ARRAY_CARDINALITY 3179
#define F_NETWORK_MASKLEN 697
#define F_DLOG1 234
#define F_TIMESTAMPTYPMODOUT 2906
#define __ORDER_BIG_ENDIAN__ 4321
#define F_TEXTSEND 2415
#define _IONBF 2
#define NETDB_SUCCESS 0
#define F_RANGE_GIST_SAME 3881
#define __ptr_t void *
#define F_CHARGT 73
#define F_TSM_HANDLER_IN 3311
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define F_NUMERIC_MUL 1726
#define F_FLOAT8_REGR_R2 2812
#define F_PG_EXTENSION_UPDATE_PATHS 3084
#define HAVE_SETSID 1
#define HAVE_OPENSSL_INIT_SSL 1
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define F_PHRASETO_TSQUERY_BYID 5006
#define Abs(x) ((x) >= 0 ? (x) : -(x))
#define F_PG_GET_FUNCTION_ARG_DEFAULT 3808
#define F_INT28NE 1851
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define IS_NONWINDOWS_DIR_SEP(ch) ((ch) == '/')
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define F_BITEQ 1581
#define F_ARRAY_PREPEND 379
#define DatumGetBpCharPP(X) ((BpChar *) PG_DETOAST_DATUM_PACKED(X))
#define F_TEXT_GT 742
#define F_DSIMPLE_LEXIZE 3726
#define __clock_t_defined 1
#define __FP_FAST_FMAF32 1
#define F_TS_HEADLINE_JSONB 4204
#define F_OVERLAPS_TIMESTAMP 1304
#define HAVE__BUILTIN_UNREACHABLE 1
#define F_BPCHAR_PATTERN_LT 2174
#define __GLIBC_MINOR__ 35
#define SO_DETACH_BPF SO_DETACH_FILTER
#define F_REGROLERECV 4094
#define __UINT_LEAST32_TYPE__ unsigned int
#define EDQUOT 122
#define F_FLOAT8_VAR_SAMP 1831
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define F_REGOPERATORSEND 2451
#define F_RI_FKEY_RESTRICT_DEL 1648
#define ERRCODE_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('2','3','0','0','0')
#define HIGHBIT (0x80)
#define F_TIMESTAMP_OUT 1313
#define VARTAG_SIZE(tag) ((tag) == VARTAG_INDIRECT ? sizeof(varatt_indirect) : VARTAG_IS_EXPANDED(tag) ? sizeof(varatt_expanded) : (tag) == VARTAG_ONDISK ? sizeof(varatt_external) : TrapMacro(true, "unrecognized TOAST vartag"))
#define _CTYPE_H 1
#define AF_ASH PF_ASH
#define F_DIST_PPATH 371
#define IPPROTO_GRE IPPROTO_GRE
#define F_PG_LSN_GE 3234
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define F_BYTEA_SUBSTR 2012
#define F_PG_LOGICAL_SLOT_GET_BINARY_CHANGES 3783
#define F_BIT_AND 1673
#define F_DATE_SORTSUPPORT 3136
#define SOL_PACKET 263
#define F_FLOAT8SMALLER 224
#define F_MACADDR8_NE 4118
#define VARDATA_4B(PTR) (((varattrib_4b *) (PTR))->va_4byte.va_data)
#define F_BINARY_UPGRADE_SET_RECORD_INIT_PRIVS 4083
#define F_ANYELEMENT_IN 2312
#define HAVE__BUILTIN_BSWAP32 1
#define VARTAG_EXTERNAL(PTR) VARTAG_1B_E(PTR)
#define F_CASH_CMP 377
#define ItemIdGetOffset(itemId) ((itemId)->lp_off)
#define F_REGROLEIN 4098
#define IPV6_PMTUDISC_DO 2
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define F_HAS_TABLESPACE_PRIVILEGE_NAME_NAME 2390
#define HAVE_STRERROR_R 1
#define _BITS_STDINT_UINTN_H 1
#define F_TSVECTOR_UPDATE_TRIGGER_BYCOLUMN 3753
#define ERRCODE_ADMIN_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','1')
#define F_PG_FILENODE_RELATION 3454
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define F_INTERVAL_ACCUM_INV 3549
#define F_INTERVAL_TO_CHAR 1768
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define F_BYTEARECV 2412
#define F_HAS_TABLESPACE_PRIVILEGE_NAME_ID 2391
#define ERRCODE_UNDEFINED_PSTATEMENT MAKE_SQLSTATE('2','6','0','0','0')
#define F_PG_REPLICATION_ORIGIN_OID 6005
#define F_NOW 1299
#define USE_SYSV_SHARED_MEMORY 1
#define F_CHARRECV 2434
#define FD_SETSIZE __FD_SETSIZE
#define IPV6_RECVPKTINFO 49
#define F_I4TOI2 314
#define ENOSPC 28
#define stdout stdout
#define F_PG_LSN_OUT 3230
#define ERRCODE_S_E_INVALID_SPECIFICATION MAKE_SQLSTATE('3','B','0','0','1')
#define IP_OPTIONS 4
#define ENOEXEC 8
#define __WINT_WIDTH__ 32
#define PG_GETARG_VARCHAR_P(n) DatumGetVarCharP(PG_GETARG_DATUM(n))
#define __struct_FILE_defined 1
#define F_PG_STAT_GET_BACKEND_USERID 1939
#define __FP_FAST_FMAF64 1
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define INTPTR_WIDTH __WORDSIZE
#define FLOAT4_FITS_IN_INT32(num) ((num) >= (float4) PG_INT32_MIN && (num) < -((float4) PG_INT32_MIN))
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define HAVE_CRYPT_H 1
#define EOF (-1)
#define F_GENERATE_SUBSCRIPTS_NODIR 1192
#define __INT_LEAST8_MAX__ 0x7f
#define F_PG_STAT_GET_DB_CONFLICT_LOCK 3066
#define F_NLIKEJOINSEL 1828
#define F_INTERVAL_TRUNC 1218
#define F_JSON_OBJECT_KEYS 3957
#define __USE_POSIX199309 1
#define F_NUMERIC_AVG_COMBINE 3337
#define VARDATA_ANY(PTR) (VARATT_IS_1B(PTR) ? VARDATA_1B(PTR) : VARDATA_4B(PTR))
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#define F_IN_RANGE_INT4_INT4 4128
#define __FLT32X_MAX_10_EXP__ 308
#define F_BTTEXTSORTSUPPORT 3255
#define HAVE_MKDTEMP 1
#define F_NAME_BPCHAR 408
#define F_VOID_RECV 3120
#define F_CHARLT 1246
#define palloc0fast(sz) ( MemSetTest(0, sz) ? MemoryContextAllocZeroAligned(CurrentMemoryContext, sz) : MemoryContextAllocZero(CurrentMemoryContext, sz) )
#define ESRCH 3
#define ERRCODE_CRASH_SHUTDOWN MAKE_SQLSTATE('5','7','P','0','2')
#define F_RANGE_EMPTY 3850
#define F_PG_STAT_GET_CHECKPOINT_WRITE_TIME 3160
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define F_PG_TERMINATE_BACKEND 2096
#define HAVE__BUILTIN_BSWAP64 1
#define SO_ATTACH_REUSEPORT_EBPF 52
#define BUFFERALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_BUFFER, (LEN))
#define PG_UINT64_MAX UINT64CONST(0xFFFFFFFFFFFFFFFF)
#define F_PATH_ISOPEN 1431
#define F_CIDR_OUT 1427
#define ENTRY_ID_MASK INT64CONST(0x0000ffffffffffff)
#define F_NAMEOUT 35
#define F_ANYARRAY_RECV 2502
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define F_XMLVALIDATE 2897
#define F_PATH_OPEN 1434
#define PG_CATCH() } else { PG_exception_stack = save_exception_stack; error_context_stack = save_context_stack
#define F_DOMAIN_IN 2597
#define F_ARRAY_POSITION 3277
#define F_GINARRAYTRICONSISTENT 3920
#define SO_RCVBUFFORCE 33
#define F_GIN_CONSISTENT_JSONB_PATH 3487
#define F_CSTRING_RECV 2500
#define F_HAS_TYPE_PRIVILEGE_ID_NAME 3140
#define F_CIRCLE_GE 1467
#define __LDBL_MAX_10_EXP__ 4932
#define F_GIN_TSQUERY_TRICONSISTENT 3921
#define PG_UINT32_MAX (0xFFFFFFFFU)
#define F_DATE_LT_TIMESTAMP 2338
#define ERRCODE_DUPLICATE_FILE MAKE_SQLSTATE('5','8','P','0','2')
#define ECONNREFUSED 111
#define ERRCODE_INVALID_ARGUMENT_FOR_POWER_FUNCTION MAKE_SQLSTATE('2','2','0','1','F')
#define F_CIRCLE_GT 1465
#define F_RECORD_IMAGE_LT 3183
#define ERRCODE_WARNING_DEPRECATED_FEATURE MAKE_SQLSTATE('0','1','P','0','1')
#define HAVE__VA_ARGS 1
#define F_CHARNE 70
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define F_TSVECTORIN 3610
#define F_PG_LSN_LE 3232
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define F_RELTIMELT 259
#define F_PG_LSN_LT 3231
#define __stub_stty 
#define SCM_TIMESTAMPING_OPT_STATS 54
#define __FLT32_MIN_EXP__ (-125)
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define ERRCODE_T_R_INTEGRITY_CONSTRAINT_VIOLATION MAKE_SQLSTATE('4','0','0','0','2')
#define F_JSONB_FLOAT4 3453
#define F_FLOAT84EQ 305
#define InvalidCommandId (~(CommandId)0)
#define le16toh(x) __uint16_identity (x)
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_ID 3005
#define F_PG_GET_FUNCTION_ARGUMENTS 2162
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define ERRCODE_OBJECT_NOT_IN_PREREQUISITE_STATE MAKE_SQLSTATE('5','5','0','0','0')
#define F_JSONB_EXISTS_ANY 4048
#define F_PG_STAT_GET_LAST_VACUUM_TIME 2781
#define F_RELTIMEOUT 243
#define F_DSQRT 230
#define INT32_WIDTH 32
#define F_OIDVECTORLE 678
#define F_HAS_TABLE_PRIVILEGE_ID 1927
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define _LP64 1
#define F_ABSTIME_DATE 1179
#define F_TIDIN 48
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define F_MAKE_TIMESTAMPTZ_AT_TIMEZONE 3463
#define F_STRING_AGG_FINALFN 3536
#define MAXALIGN(LEN) TYPEALIGN(MAXIMUM_ALIGNOF, (LEN))
#define F_MACADDRTOMACADDR8 4123
#define __UINT8_C(c) c
#define GetSysCacheHashValue1(cacheId,key1) GetSysCacheHashValue(cacheId, key1, 0, 0, 0)
#define SHORTALIGN_DOWN(LEN) TYPEALIGN_DOWN(ALIGNOF_SHORT, (LEN))
#define CMSG_SPACE(len) (CMSG_ALIGN (len) + CMSG_ALIGN (sizeof (struct cmsghdr)))
#define _BITS_STDINT_INTN_H 1
#define F_PGSQL_VERSION 89
#define __FLT64_MAX_EXP__ 1024
#define F_BOOLOUT 1243
#define F_UUID_SORTSUPPORT 3300
#define F_BE_LO_GET 3458
#define F_ENUM_SMALLER 3524
#define F_JSONB_DELETE 3302
#define __INT_LEAST32_TYPE__ int
#define SOL_CAIF 278
#define F_FLOAT84GE 310
#define F_RANGE_CONTAINED_BY 3861
#define ECHRNG 44
#define EHOSTDOWN 112
#define F_ANYENUM_OUT 3505
#define F_REGROLESEND 4095
#define __ASM_GENERIC_SOCKIOS_H 
#define PF_SNA 22
#define F_TIME_CMP 1107
#define F_REGOPERATOROUT 2217
#define IS_WINDOWS_DIR_SEP(ch) ((ch) == '/' || (ch) == '\\')
#define __wchar_t__ 
#define F_TINTERVALGT 787
#define F_INET_SPG_INNER_CONSISTENT 3798
#define F_TIMESTAMPTZ_OUT 1151
#define SO_RXQ_OVFL 40
#define SEEK_END 2
#define OffsetNumberPrev(offsetNumber) ((OffsetNumber) (-1 + (offsetNumber)))
#define __UINT64_TYPE__ long unsigned int
#define EAI_ADDRFAMILY -9
#define USE_SSL 
#define ____FILE_defined 1
#define __stub___compat_query_module 
#define FirstCommandId ((CommandId) 0)
#define STATUS_WAITING (2)
#define F_UNKNOWNRECV 2416
#define PALLOC_H 
#define __ARM_NEON 1
#define _ISOC99_SOURCE 1
#define F_FLOAT8_REGR_SXY 2809
#define F_PG_TYPE_IS_VISIBLE 2080
#define ERRCODE_FDW_FUNCTION_SEQUENCE_ERROR MAKE_SQLSTATE('H','V','0','1','0')
#define F_RI_FKEY_CHECK_INS 1644
#define F_RECORD_OUT 2291
#define ENOLCK 37
#define F_PG_REPLICATION_SLOT_ADVANCE 3878
#define F_TO_JSON 3176
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define _ASM_GENERIC_ERRNO_H 
#define F_JSON_BUILD_OBJECT_NOARGS 3201
#define F_LSEG_GT 1485
#define MSG_DONTWAIT MSG_DONTWAIT
#define F_DATE_OUT 1085
#define F_FLOAT48GE 304
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define F_CIRCLE_LE 1466
#define SO_MEMINFO 55
#define F_INT24GE 168
#define F_INTERVAL_GE 1166
#define DatumGetByteaPP(X) ((bytea *) PG_DETOAST_DATUM_PACKED(X))
#define F_POINT_VERT 989
#define F_TIMETZ_NE 1353
#define F_CIRCLE_LT 1464
#define F_INT2SHL 1896
#define F_JSONB_STRING_TO_TSVECTOR_BYID 4211
#define F_SCALARLESEL 336
#define _LARGEFILE64_SOURCE 1
#define F_NETWORK_LE 922
#define F_BTBPCHAR_PATTERN_CMP 2180
#define F_PG_TS_PARSER_IS_VISIBLE 3756
#define _STDDEF_H_ 
#define F_JSONB_TO_TSVECTOR_BYID 4214
#define F_INT4XOR 1900
#define F_JSONB_ARRAY_ELEMENTS_TEXT 3465
#define _BSD_SIZE_T_DEFINED_ 
#define HAVE_SECURITY_PAM_APPL_H 1
#define F_ENUM_RANGE_ALL 3531
#define HEAPTUPLESIZE MAXALIGN(sizeof(HeapTupleData))
#define F_PG_STAT_GET_BGWRITER_STAT_RESET_TIME 3075
#define F_REGPROCEDURERECV 2446
#define F_NUMERIC_STDDEV_POP 2596
#define __stub___compat_bdflush 
#define MAXALIGN64(LEN) TYPEALIGN64(MAXIMUM_ALIGNOF, (LEN))
#define IPV6_RXHOPOPTS IPV6_HOPOPTS
#define PG_TEXTDOMAIN(domain) (domain "-" PG_MAJORVERSION)
#define F_SHA256_BYTEA 3420
#define F_HAS_LANGUAGE_PRIVILEGE_NAME 2266
#define __FLT128_HAS_QUIET_NAN__ 1
#define NI_MAXHOST 1025
#define ERRCODE_UNDEFINED_OBJECT MAKE_SQLSTATE('4','2','7','0','4')
#define ALIGNOF_PG_INT128_TYPE 16
#define F_TEXT_TO_ARRAY 394
#define FLOAT4PASSBYVAL true
#define F_TSQUERY_EQ 3664
#define F_MACADDR_OUT 437
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define F_ACLINSERT 1035
#define F_ANYARRAY_OUT 2297
#define F_DCEIL 2308
#define EXE ""
#define HAVE_DECL_LLVMGETHOSTCPUFEATURES 1
#define F_TIMETZ_MI_INTERVAL 1750
#define MAXIMUM_ALIGNOF 8
#define F_TIMETZ_IZONE 2038
#define AI_PASSIVE 0x0001
#define MaxAttrNumber 32767
#define F_PG_BLOCKING_PIDS 2561
#define F_RPAD 874
#define F_HASHFLOAT4EXTENDED 443
#define HAVE_MEMMOVE 1
#define __UINT_FAST8_TYPE__ unsigned char
#define __INT_FAST8_TYPE__ signed char
#define ERRCODE_ARRAY_SUBSCRIPT_ERROR MAKE_SQLSTATE('2','2','0','2','E')
#define F_TSQUERY_LE 3663
#define F_TEXT_LE 741
#define PF_RDS 21
#define F_PG_STAT_GET_BGWRITER_BUF_WRITTEN_CHECKPOINTS 2771
#define __PID_T_TYPE __S32_TYPE
#define F_FLOAT84LE 308
#define F_INT48DIV 1281
#define F_TO_DATE 1780
#define PG_RETURN_FLOAT4(x) return Float4GetDatum(x)
#define F_FLOAT8_TO_CHAR 1776
#define F_PG_STAT_GET_DB_CONFLICT_BUFFERPIN 3068
#define AI_CANONNAME 0x0002
#define F_BTINT84CMP 2189
#define F_BOOLRECV 2436
#define ERRCODE_DUPLICATE_PSTATEMENT MAKE_SQLSTATE('4','2','P','0','5')
#define HAVE_POLL 1
#define F_PG_STAT_GET_AUTOANALYZE_COUNT 3057
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _BITS_LOCALE_H 1
#define F_SPG_POLY_QUAD_COMPRESS 5011
#define F_INT4_AVG_COMBINE 3324
#define F_TINTERVALLT 786
#define F_VARBIT_RECV 2458
#define SearchSysCacheList3(cacheId,key1,key2,key3) SearchSysCacheList(cacheId, 3, key1, key2, key3)
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define HAVE_RAND_OPENSSL 1
#define F_TIMESTAMP_TRUNC 2020
#define F_BOX_BELOW_EQ 116
#define F_TEXTREGEXSUBSTR 2073
#define DEFAULT_PGSOCKET_DIR "/var/run/postgresql"
#define va_arg(v,l) __builtin_va_arg(v,l)
#define is_absolute_path(filename) is_nonwindows_absolute_path(filename)
#define F_NUMERIC_TRUNC 1709
#define VARATT_IS_EXTERNAL_EXPANDED_RO(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RO)
#define F_FLOAT84MI 286
#define __USE_ISOC11 1
#define VARATT_IS_EXTERNAL_EXPANDED_RW(PTR) (VARATT_IS_EXTERNAL(PTR) && VARTAG_EXTERNAL(PTR) == VARTAG_EXPANDED_RW)
#define IN_CLASSB_NET 0xffff0000
#define F_BTINT8CMP 842
#define F_TEXT_PATTERN_GE 2163
#define ERRCODE_UNDEFINED_CURSOR MAKE_SQLSTATE('3','4','0','0','0')
#define F_HAS_SEQUENCE_PRIVILEGE_NAME 2185
#define __attribute_used__ __attribute__ ((__used__))
#define F_INT4MUL 141
#define XLOG_BLCKSZ 8192
#define F_SPG_QUAD_INNER_CONSISTENT 4021
#define F_INT24GT 162
#define F_ACLEXPLODE 1689
#define __f128(x) x ##f128
#define __glibc_has_extension(ext) 0
#define USE_ARMV8_CRC32C_WITH_RUNTIME_CHECK 1
#define _SS_PADSIZE (_SS_SIZE - __SOCKADDR_COMMON_SIZE - sizeof (__ss_aligntype))
#define F_HASHNAME 455
#define F_TIMESTAMPTZ_DATE 1178
#define F_BPCHAR_SMALLER 1064
#define dummyret void
#define VARDATA_SHORT(PTR) VARDATA_1B(PTR)
#define OidFunctionCall4(functionId,arg1,arg2,arg3,arg4) OidFunctionCall4Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4)
#define OidFunctionCall5(functionId,arg1,arg2,arg3,arg4,arg5) OidFunctionCall5Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5)
#define OidFunctionCall8(functionId,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) OidFunctionCall8Coll(functionId, InvalidOid, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define __GNUC_STDC_INLINE__ 1
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define ERRCODE_STRING_DATA_RIGHT_TRUNCATION MAKE_SQLSTATE('2','2','0','0','1')
#define F_PRSD_START 3717
#define P_tmpdir "/tmp"
#define F_MACADDR_RECV 2494
#define Trap(condition,errorType) ((void)true)
#define F_TSVECTOR_LT 3616
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#define __FLT64_HAS_DENORM__ 1
#define HAVE_DECL_LLVMCREATEPERFJITEVENTLISTENER 1
#define F_TEXT_CONCAT_WS 3059
#define F_CURRENT_USER 710
#define F_BIT_SEND 2457
#define F_FLOAT84GT 309
#define F_BOOL_INT4 2558
#define __HAVE_FLOAT32 1
#define F_NAMELIKE 858
#define F_BITGETBIT 3032
#define F_WINDOW_LEAD 3109
#define __WORDSIZE_TIME64_COMPAT32 0
#define F_WINDOW_NTILE 3105
#define __HAVE_DISTINCT_FLOAT32 0
#define ENOTSUP EOPNOTSUPP
#define F_MAKE_TIMESTAMPTZ 3462
#define __STRINGS_FORTIFIED 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define IP_CHECKSUM 23
#define F_INT82DIV 840
#define isalnum(c) __isctype((c), _ISalnum)
#define F_JSON_SEND 324
#define IN_CLASSC_NSHIFT 8
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define IPV6_ROUTER_ALERT 22
#define F_TEXT_SMALLER 459
#define __kernel_old_uid_t __kernel_old_uid_t
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#define F_TIMESTAMP_GT_DATE 2367
#define SO_PRIORITY 12
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define __FP_FAST_FMAF32x 1
#define F_INT48GE 857
#define F_VARBIT_TRANSFORM 3158
#define PG_DETOAST_DATUM(datum) pg_detoast_datum((struct varlena *) DatumGetPointer(datum))
#define F_TSQUERY_PHRASE_DISTANCE 5004
#define F_BPCHAR_LARGER 1063
#define __FLT16_HAS_DENORM__ 1
#define F_INT48GT 855
#define _BITS_TYPES___LOCALE_T_H 1
#define SIZEOF_LONG 8
#define toascii_l(c,l) __toascii_l ((c), (l))
#define __STDC_UTF_32__ 1
#define _BITS_STDIO_LIM_H 1
#define F_TINTERVALOV 265
#define F_BPCHAR_SORTSUPPORT 3328
#define __INT_FAST8_WIDTH__ 8
#define ItemIdIsValid(itemId) PointerIsValid(itemId)
#define F_TEXT_LT 740
#define __USE_XOPEN_EXTENDED 1
#define F_PATH_NPOINTS 1432
#define IPV6_RECVRTHDR 56
#define F_DCOSD 2736
#define F_DSYNONYM_INIT 3728
#define ERRCODE_CONFIGURATION_LIMIT_EXCEEDED MAKE_SQLSTATE('5','3','4','0','0')
#define F_FLOAT84PL 285
#define HAVE_IFADDRS_H 1
#define _SIZE_T 
#define F_TIMESTAMP_LT_DATE 2364
#define F_WINDOW_LAG 3106
#define ENOANO 55
#define _IO_ERR_SEEN 0x0020
#define FATAL 21
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SO_RCVTIMEO SO_RCVTIMEO_OLD
#define F_DIST_SL 727
#define __ULONG32_TYPE unsigned int
#define F_INT48MI 1279
#define F_ENUM_RECV 3532
#define F_DCBRT 231
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define _PATH_HOSTS "/etc/hosts"
#define F_CIDRECV 2442
#define SOCK_STREAM SOCK_STREAM
#define F_TEXTREGEXREPLACE_NOOPT 2284
#define AI_CANONIDN 0x0080
#define F_IN_RANGE_INTERVAL_INTERVAL 4136
#define F_MAKE_DATE 3846
#define __FLT64X_HAS_INFINITY__ 1
#define __BIG_ENDIAN 4321
#define F_PG_STAT_GET_XACT_FUNCTION_TOTAL_TIME 3047
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __suseconds_t_defined 
#define F_TABLE_TO_XMLSCHEMA 2926
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define F_TEXT_CONCAT 3058
#define Min(x,y) ((x) < (y) ? (x) : (y))
#define F_PG_TIMEZONE_NAMES 2856
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define __fortify_function __extern_always_inline __attribute_artificial__
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define F_NAMERECV 2422
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define F_PG_REPLICATION_ORIGIN_PROGRESS 6013
#define __LDBL_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966L
#define __off_t_defined 
#define F_BYTEACAT 2011
#define SO_CNX_ADVICE 53
#define F_ACLCONTAINS 1037
#define ENOTBLK 15
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define F_POLY_CONTAINED 345
#define PF_XDP 44
#define F_ANYNONARRAY_IN 2777
#define SO_NOFCS 43
#define F_POINT_MUL 1443
#define F_DATE_GE_TIMESTAMPTZ 2355
#define __SIZEOF_WCHAR_T__ 4
#define unix 1
#define F_BE_LO_OPEN 952
#define F_LINE_PARALLEL 1412
#define F_POSITIONSEL 1300
#define F_XPATH 2931
#define PG_BINARY_A "a"
#define F_PG_STAT_GET_BUF_ALLOC 2859
#define ERRCODE_DEPENDENT_PRIVILEGE_DESCRIPTORS_STILL_EXIST MAKE_SQLSTATE('2','B','0','0','0')
#define F_PG_STAT_GET_BUF_FSYNC_BACKEND 3063
#define IP_MULTICAST_TTL 33
#define ERRCODE_UNDEFINED_DATABASE MAKE_SQLSTATE('3','D','0','0','0')
#define SO_ACCEPTCONN 30
#define _GCC_SIZE_T 
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#define F_INT8_SUM 1842
#define F_TIMESTAMPTZ_RECV 2476
#define __INO64_T_TYPE __UQUAD_TYPE
#define PLATFORM_DEFAULT_SYNC_METHOD SYNC_METHOD_FDATASYNC
#define HAVE_CLOCK_GETTIME 1
#define F_INT48LT 854
#define F_SHOW_ALL_SETTINGS 2084
#define label_id_is_valid(id) (id >= LABEL_ID_MIN && id <= LABEL_ID_MAX)
#define __W_CONTINUED 0xffff
#define PG_PRINTF_ATTRIBUTE gnu_printf
#define F_HASHMACADDREXTENDED 778
#define F_PG_CONVERT 1813
#define SO_PEERGROUPS 59
#define __USE_XOPEN2K8XSI 1
#define F_MACADDR_SORTSUPPORT 3359
#define USE_PREFETCH 
#define VARSIZE(PTR) VARSIZE_4B(PTR)
#define SO_SNDTIMEO_OLD 21
#define F_TINTERVALGE 789
#define IP_RECVFRAGSIZE 25
#define F_INET_GIST_UNION 3554
#define F_INT4GT 147
#define F_PATH_ADD 1435
#define __UINT32_C(c) c ## U
#define F_BE_LO_TELL 958
#define F_POLY_BELOW 2566
#define EISCONN 106
#define EAI_SYSTEM -11
#define PF_BRIDGE 7
#define F_TSVECTOROUT 3611
#define __size_t__ 
#define HAVE_LIBXML2 1
#define DatumGetBool(X) ((bool) ((X) != 0))
#define ENABLE_GSS 1
#define F_TEXTICREGEXNE 1239
#define AG_AGE_GRAPHID_DS_H 
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define F_BTINT28CMP 2192
#define F_ORDERED_SET_TRANSITION_MULTI 3971
#define F_CLOSE_SL 962
#define F_ARRAY_POSITIONS 3279
#define F_GINQUERYARRAYEXTRACT 2774
#define F_NUMERIC_CMP 1769
#define F_PG_GET_VIEWDEF_NAME_EXT 2505
#define _BITS_TIME64_H 1
#define HAVE_STRTOLL 1
#define F_TIME_LE 1103
#define F_BYTEASETBYTE 722
#define F_PG_TABLESPACE_SIZE_OID 2322
#define F_BTRIM1 885
#define __WINT_MIN__ 0U
#define SIOCGSTAMPNS_OLD 0x8907
#define TYPEALIGN(ALIGNVAL,LEN) (((uintptr_t) (LEN) + ((ALIGNVAL) - 1)) & ~((uintptr_t) ((ALIGNVAL) - 1)))
#define __TIME64_T_TYPE __TIME_T_TYPE
#define __glibc_has_builtin(name) __has_builtin (name)
#define F_NUMERIC_TO_NUMBER 1777
#define F_LTRIM 875
#define F_HAS_COLUMN_PRIVILEGE_ID_ID_ATTNUM 3019
#define __ONCE_FLAG_INIT { 0 }
#define AI_IDN_ALLOW_UNASSIGNED __glibc_macro_warning ("AI_IDN_ALLOW_UNASSIGNED is deprecated") 0x0100
#define AF_UNIX PF_UNIX
#define F_PG_STAT_GET_DB_CONFLICT_SNAPSHOT 3067
#define ERRCODE_INVALID_ROW_COUNT_IN_RESULT_OFFSET_CLAUSE MAKE_SQLSTATE('2','2','0','1','X')
#define F_CASH_DIV_INT4 865
#define _PTRDIFF_T_DECLARED 
#define F_RANGE_UNION 3867
#define F_CASH_DIV_INT8 3345
#define IP_RECVRETOPTS IP_RETOPTS
#define F_BTCHARCMP 358
#define SO_TIMESTAMP_NEW 63
#define F_INT84LE 478
#define IPPROTO_COMP IPPROTO_COMP
#define F_PRSD_NEXTTOKEN 3718
#define ERRCODE_INVALID_ESCAPE_CHARACTER MAKE_SQLSTATE('2','2','0','1','9')
#define EUSERS 87
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define PGSIXBIT(ch) (((ch) - '0') & 0x3F)
#define F_TIDSMALLER 2796
#define HAVE_GETOPT_H 1
#define F_FLOAT4_ACCUM 208
#define F_ENUM_GT 3511
#define PG_DIAG_SEVERITY 'S'
#define F_TEXTICLIKE 1633
#define AF_DECnet PF_DECnet
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define F_PG_CREATE_LOGICAL_REPLICATION_SLOT 3786
#define _SYS_SOCKET_H 1
#define F_PG_ISOLATION_TEST_SESSION_IS_BLOCKED 3378
#define F_INTERVAL_EQ 1162
#define __PIC__ 2
#define F_PG_IS_IN_RECOVERY 3810
#define F_PG_RELATION_FILENODE 2999
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define ENETDOWN 100
#define AI_NUMERICHOST 0x0004
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define F_NUMERICTYPMODOUT 2918
#define F_REGNAMESPACERECV 4087
#define F_GIN_EXTRACT_TSQUERY_OLDSIG 3791
#define F_OIDGE 1639
#define F_RANGE_LT 3871
#define F_ABSTIMENE 252
#define F_ARRAYOVERLAP 2747
#define F_OPAQUE_OUT 2307
#define __INO_T_MATCHES_INO64_T 1
#define SO_RCVTIMEO_NEW 66
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define F_INT8PL 463
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 92
#define SearchSysCacheExists1(cacheId,key1) SearchSysCacheExists(cacheId, key1, 0, 0, 0)
#define TYPEALIGN64(ALIGNVAL,LEN) (((uint64) (LEN) + ((ALIGNVAL) - 1)) & ~((uint64) ((ALIGNVAL) - 1)))
#define F_DATE_EQ 1086
#define ItemPointerGetBlockNumber(pointer) ( AssertMacro(ItemPointerIsValid(pointer)), ItemPointerGetBlockNumberNoCheck(pointer) )
#define HAVE_GETHOSTBYNAME_R 1
#define F_ANYRANGE_IN 3832
#define LC_NAME __LC_NAME
#define DatumGetByteaPCopy(X) ((bytea *) PG_DETOAST_DATUM_COPY(X))
#define F_INTER_SL 277
#define ispunct(c) __isctype((c), _ISpunct)
#define PG_GETARG_VARLENA_P(n) PG_DETOAST_DATUM(PG_GETARG_DATUM(n))
#define DatumGetUInt8(X) ((uint8) (X))
#define F_BPCHARGE 1052
#define HAVE_DECL_STRTOLL 1
#define F_INTERVAL_LE 1165
#define SO_ATTACH_BPF 50
#define WINT_MIN (0u)
#define F_BOX_WIDTH 976
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define F_TSVECTOR_GE 3620
#define HAVE_DECL_LLVMGETHOSTCPUNAME 1
#define __GLIBC_USE_IEC_60559_EXT 1
#define __fsfilcnt_t_defined 
#define F_JSON_OBJECT_AGG_TRANSFN 3180
#define FMGR_H 
#define F_HYPOTHETICAL_PERCENT_RANK_FINAL 3989
#define __blkcnt_t_defined 
#define __HAVE_FLOAT128 1
#define F_PG_INDEXES_SIZE 2998
#define F_BE_LO_LSEEK 956
#define F_INT24MI 182
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define SearchSysCacheExists3(cacheId,key1,key2,key3) SearchSysCacheExists(cacheId, key1, key2, key3, 0)
#define F_PG_STAT_GET_DB_TUPLES_RETURNED 2758
#define ETXTBSY 26
#define UINT_LEAST32_MAX (4294967295U)
#define F_VARBIT_IN 1579
#define EMFILE 24
#define F_TIMESTAMP_TO_CHAR 2049
#define F_TIME_HASH_EXTENDED 3409
#define PG_BINARY 0
#define palloc_object(type) ((type *) palloc(sizeof(type)))
#define F_DATE_GE 1090
#define HAVE_NETINET_TCP_H 1
#define __va_list__ 
#define SO_BUSY_POLL_BUDGET 70
#define isprint_l(c,l) __isprint_l ((c), (l))
#define FLOAT8_FITS_IN_INT16(num) ((num) >= (float8) PG_INT16_MIN && (num) < -((float8) PG_INT16_MIN))
#define IPV6_HOPLIMIT 52
#define F_DATE_GT 1089
#define HAVE_DECL_STRNLEN 1
#define SO_SNDLOWAT 19
#define SIZEOF_SIZE_T 8
#define VARSIZE_4B(PTR) ((((varattrib_4b *) (PTR))->va_4byte.va_header >> 2) & 0x3FFFFFFF)
#define F_TIMESTAMP_MI_INTERVAL 2033
#define F_BPCHARTYPMODOUT 2914
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define F_FLOAT8IN 214
#define F_JSONB_ARRAY_LENGTH 3207
#define SCM_TIMESTAMP SO_TIMESTAMP
#define F_INT2DIV 153
#define UINTMAX_C(c) c ## UL
#define F_REGTYPESEND 2455
#define VARATT_IS_EXTERNAL(PTR) VARATT_IS_1B_E(PTR)
#define __lldiv_t_defined 1
#define F_JSON_ARRAY_ELEMENTS 3955
#define F_BINARY_UPGRADE_CREATE_EMPTY_EXTENSION 3591
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define F_HAS_ANY_COLUMN_PRIVILEGE_NAME_NAME 3024
#define F_FLT8_MUL_CASH 919
#define ERRCODE_INVALID_PSTATEMENT_DEFINITION MAKE_SQLSTATE('4','2','P','1','4')
#define F_INT42MUL 171
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define F_PG_GET_CONSTRAINTDEF 1387
#define MSG_EOR MSG_EOR
#define F_DIST_CPOINT 3290
#define dgettext(domainname,msgid) dcgettext (domainname, msgid, LC_MESSAGES)
#define VARSIZE_ANY(PTR) (VARATT_IS_1B_E(PTR) ? VARSIZE_EXTERNAL(PTR) : (VARATT_IS_1B(PTR) ? VARSIZE_1B(PTR) : VARSIZE_4B(PTR)))
#define F_BTINT82CMP 2193
#define F_PG_LS_DIR 3297
#define __INT32_TYPE__ int
#define IPV6_CHECKSUM 7
#define PF_ALG 38
#define F_FLOAT48EQ 299
#define F_LSEG_INTERSECT 994
#define F_NAMENE 659
#define __SIZEOF_DOUBLE__ 8
#define F_DATE_IN 1084
#define F_INTERVALTYPMODOUT 2904
#define __time_t_defined 1
#define F_JSONB_EACH 3208
#define ERRCODE_FDW_NO_SCHEMAS MAKE_SQLSTATE('H','V','0','0','P')
#define MCAST_MSFILTER 48
#define F_JSON_EACH 3958
#define F_MACADDR_NOT 3144
#define ____sigset_t_defined 
#define IPV6_RTHDR_STRICT 1
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __INT_LEAST32_WIDTH__ 32
#define F_FLOAT84LT 307
#define va_start(v,l) __builtin_va_start(v,l)
#define F_BPCHAR_NAME 409
#define F_PG_STAT_GET_SNAPSHOT_TIMESTAMP 3788
#define EPROTOTYPE 91
#define PG_RETURN_CSTRING(x) return CStringGetDatum(x)
#define F_INETPL 2630
#define __SWORD_TYPE long int
#define F_POLY_CONTAIN_PT 1428
#define ERRCODE_NO_ADDITIONAL_DYNAMIC_RESULT_SETS_RETURNED MAKE_SQLSTATE('0','2','0','0','1')
#define IPPROTO_DCCP IPPROTO_DCCP
#define F_INET_CLIENT_PORT 2197
#define CMSG_ALIGN(len) (((len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
#define F_TIMEMI 245
#define AttributeNumberIsValid(attributeNumber) ((bool) ((attributeNumber) != InvalidAttrNumber))
#define F_TSM_SYSTEM_HANDLER 3314
#define IP_TOS 1
#define __SIZEOF_FLOAT__ 4
#define F_GRAPHIDEQ F_INT8EQ
#define F_TSM_HANDLER_OUT 3312
#define SO_GET_FILTER SO_ATTACH_FILTER
#define F_UNIQUE_KEY_RECHECK 1250
#define MCAST_BLOCK_SOURCE 43
#define HAVE_UNSIGNED_LONG_LONG_INT 1
#define IN_CLASSA_NET 0xff000000
#define FLOAT4_FITS_IN_INT64(num) ((num) >= (float4) PG_INT64_MIN && (num) < -((float4) PG_INT64_MIN))
#define PG_USED_FOR_ASSERTS_ONLY pg_attribute_unused()
#define F_CIDR_SEND 2499
#define ERRCODE_FDW_OPTION_NAME_NOT_FOUND MAKE_SQLSTATE('H','V','0','0','J')
#define STATUS_OK (0)
#define INTMAX_WIDTH 64
#define F_LANGUAGE_HANDLER_IN 2302
#define SearchSysCacheCopy1(cacheId,key1) SearchSysCacheCopy(cacheId, key1, 0, 0, 0)
#define _T_SIZE 
#define UINT8_C(c) c
#define F_HYPOTHETICAL_DENSE_RANK_FINAL 3993
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_NAME_NAME 3000
#define ERRCODE_OUT_OF_MEMORY MAKE_SQLSTATE('5','3','2','0','0')
#define F_INT2MI 180
#define F_DASIND 2731
#define __va_arg_pack() __builtin_va_arg_pack ()
#define EWOULDBLOCK EAGAIN
#define HAVE_RINT 1
#define F_ROW_SECURITY_ACTIVE 3298
#define F_VARBITTYPMODIN 2902
#define F_PG_ADVISORY_LOCK_SHARED_INT8 2881
#define F_DTRUNC 229
#define F_NUMERIC_POLY_COMBINE 3338
#define F_DATE_LE 1088
#define F_INT2_NUMERIC 1782
#define F_DATE_LT 1087
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define F_PG_TS_DICT_IS_VISIBLE 3757
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#define va_end(v) __builtin_va_end(v)
#define __ATOMIC_CONSUME 1
#define F_BOX_SAME 186
#define F_HAS_ANY_COLUMN_PRIVILEGE_ID 3029
#define SO_TIMESTAMPING_NEW 65
#define F_INETMI 2633
#define HAVE_LONG_LONG_INT 1
#define F_INT2MOD 155
#define __GNUC_MINOR__ 3
#define MSG_ZEROCOPY MSG_ZEROCOPY
#define __INT_FAST16_WIDTH__ 64
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define F_BYTEA_STRING_AGG_TRANSFN 3543
#define F_VARCHARTYPMODOUT 2916
#define F_JSONB_EXISTS_ALL 4049
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define F_BOX_DIV 1425
#define F_NUMERIC_POWER 1738
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __LDBL_REDIR2_DECL(name) 
#define F_INT48NE 853
#define F_HAS_SEQUENCE_PRIVILEGE_NAME_ID 2182
#define F_NUMERIC_MOD 1728
#define USE_PAM 1
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define INTMAX_C(c) c ## L
#define F_CURRENT_SCHEMAS 1403
#define HAVE_GETRUSAGE 1
#define F_PG_REPLICATION_ORIGIN_SESSION_RESET 6007
#define ESTRPIPE 86
#define F_TSVECTOR_GT 3621
#define __glibc_clang_prereq(maj,min) 0
#define ERRCODE_STATEMENT_TOO_COMPLEX MAKE_SQLSTATE('5','4','0','0','1')
#define F_DATE_NE 1091
#define __nlink_t_defined 
#define F_CHARLE 72
#define ERRCODE_INVALID_PASSWORD MAKE_SQLSTATE('2','8','P','0','1')
#define PF_RXRPC 33
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define F_INTERVAL_ACCUM 1843
#define EAGAIN 11
#define atooid(x) ((Oid) strtoul((x), NULL, 10))
#define _STDINT_H 1
#define ReleaseSysCacheList(x) ReleaseCatCacheList(x)
#define _RWLOCK_INTERNAL_H 
#define UINT_FAST8_WIDTH 8
#define __DBL_MAX_10_EXP__ 308
#define __FILE_defined 1
#define PG_GETARG_TEXT_P_COPY(n) DatumGetTextPCopy(PG_GETARG_DATUM(n))
#define F_SCALARGEJOINSEL 398
#define F_TIMETZ_PL_INTERVAL 1749
#define F_FLOAT4ABS 207
#define F_INT2EQ 63
#define UINT16_MAX (65535)
#define F_TIMESTAMPTZ_LE_DATE 2378
#define IPV6_MINHOPCOUNT 73
#define F_GTSVECTOR_UNION 3651
#define PG_DETOAST_DATUM_SLICE(datum,f,c) pg_detoast_datum_slice((struct varlena *) DatumGetPointer(datum), (int32) (f), (int32) (c))
#define SO_ZEROCOPY 60
#define F_DTAN 1606
#define F_INT82MI 838
#define HAVE_DECL_FDATASYNC 1
#define __ASM_BITSPERLONG_H 
#define F_PG_DESCRIBE_OBJECT 3537
#define isascii_l(c,l) __isascii_l ((c), (l))
#define NUM_SPINLOCK_SEMAPHORES 128
#define ERRCODE_CARDINALITY_VIOLATION MAKE_SQLSTATE('2','1','0','0','0')
#define __INT16_C(c) c
#define F_TIMESTAMPTZ_GT_DATE 2380
#define F_PRSD_LEXTYPE 3721
#define __ARM_ARCH_ISA_A64 1
#define F_JSONB_CMP 4044
#define F_GIN_TRICONSISTENT_JSONB_PATH 3489
#define ENOTRECOVERABLE 131
#define __U32_TYPE unsigned int
#define MemSetLoop(start,val,len) do { long * _start = (long *) (start); long * _stop = (long *) ((char *) _start + (Size) (len)); while (_start < _stop) *_start++ = 0; } while (0)
#define F_JSON_AGG_FINALFN 3174
#define INT64_FORMAT "%" INT64_MODIFIER "d"
#define F_HAS_FUNCTION_PRIVILEGE_ID 2261
#define F_POLY_OUT 348
#define ERRCODE_INVALID_TIME_ZONE_DISPLACEMENT_VALUE MAKE_SQLSTATE('2','2','0','0','9')
#define TIMEZONE_GLOBAL timezone
#define F_TSQ_MCONTAINS 3691
#define F_INT8DIV 466
#define pg_attribute_format_arg(a) __attribute__((format_arg(a)))
#define ERRCODE_WARNING_IMPLICIT_ZERO_BIT_PADDING MAKE_SQLSTATE('0','1','0','0','8')
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define PG_GETARG_CSTRING(n) DatumGetCString(PG_GETARG_DATUM(n))
#define EREMOTEIO 121
#define F_INT2GE 151
#define __STDC__ 1
#define __LC_MONETARY 4
#define ENFILE 23
#define VARDATA_4B_C(PTR) (((varattrib_4b *) (PTR))->va_compressed.va_data)
#define F_BE_LO_PUT 3460
#define F_INT8_TO_CHAR 1774
#define LOG_SERVER_ONLY 16
#define F_INT2GT 146
#define F_SCALARLEJOINSEL 386
#define PG_RETURN_HEAPTUPLEHEADER(x) return HeapTupleHeaderGetDatum(x)
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define ERRCODE_SNAPSHOT_TOO_OLD MAKE_SQLSTATE('7','2','0','0','0')
#define F_I2TOI4 313
#define ELIBMAX 82
#define __PTRDIFF_TYPE__ long int
#define F_NUMERIC_INT2 1783
#define F_INTERVAL_DIV 1326
#define OFF_H 
#define ItemIdIsRedirected(itemId) ((itemId)->lp_flags == LP_REDIRECT)
#define _ISOC2X_SOURCE 1
#define INVALID_ENTRY_ID INT64CONST(0)
#define SOMAXCONN 4096
#define InvalidAttrNumber 0
#define errno (*__errno_location ())
#define F_FORMAT_TYPE 1081
#define EL2NSYNC 45
#define TopSubTransactionId ((SubTransactionId) 1)
#define __ino64_t_defined 
#define F_ACLDEFAULT_SQL 3943
#define SOL_TIPC 271
#define F_BOX_GE 126
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define AF_ISDN PF_ISDN
#define __clockid_t_defined 1
#define F_PG_TRY_ADVISORY_XACT_LOCK_INT8 3091
#define F_HASHOIDVECTOREXTENDED 776
#define F_BOX_GT 127
#define F_MACADDR8_TRUNC 4112
#define F_MACADDR8_OUT 4111
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define F_PG_LAST_WAL_REPLAY_LSN 3821
#define F_TEXT_PATTERN_LT 2160
#define F_PG_LAST_COMMITTED_XACT 3583
#define F_INT2IN 38
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define F_PG_LOGICAL_EMIT_MESSAGE_TEXT 3577
#define __size_t 
#define IPV6_MULTICAST_LOOP 19
#define _BITS_SOCKADDR_H 1
#define F_INT4_AVG_ACCUM 1963
#define __ATOMIC_SEQ_CST 5
#define F_CASH_NUMERIC 3823
#define F_SPG_RANGE_QUAD_LEAF_CONSISTENT 3473
#define F_HAS_SERVER_PRIVILEGE_ID_ID 3009
#define DEBUG4 11
#define F_NETWORK_EQ 920
#define F_TS_PARSE_BYNAME 3716
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define MaxBlockNumber ((BlockNumber) 0xFFFFFFFE)
#define InvalidSubTransactionId ((SubTransactionId) 0)
#define F_BINARY_UPGRADE_SET_NEXT_INDEX_PG_CLASS_OID 3587
#define IPV6_2292HOPLIMIT 8
#define F_LIKE_ESCAPE_BYTEA 2009
#define F_TS_RANK_WTTF 3703
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define F_PG_HBA_FILE_RULES 3401
#define ERRCODE_FDW_INVALID_ATTRIBUTE_VALUE MAKE_SQLSTATE('H','V','0','2','4')
#define F_TIMETZ_SEND 2473
#define F_PG_EVENT_TRIGGER_DROPPED_OBJECTS 3566
#define F_XIDOUT 51
#define ERRCODE_CHARACTER_NOT_IN_REPERTOIRE MAKE_SQLSTATE('2','2','0','2','1')
#define ENOPKG 65
#define F_FLOAT4SEND 2425
#define F_DATE_TIMESTAMP 2024
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define ERRCODE_WARNING_PRIVILEGE_NOT_REVOKED MAKE_SQLSTATE('0','1','0','0','6')
#define IP_NODEFRAG 22
#define F_INT8LE 471
#define F_NUMERIC_AVG_SERIALIZE 2740
#define F_HAS_SCHEMA_PRIVILEGE_ID_ID 2271
#define IPV6_LEAVE_ANYCAST 28
#define InvalidBlockNumber ((BlockNumber) 0xFFFFFFFF)
#define __UINT32_TYPE__ unsigned int
#define ERRCODE_FDW_INVALID_USE_OF_NULL_POINTER MAKE_SQLSTATE('H','V','0','0','9')
#define __FLT32X_MIN_10_EXP__ (-307)
#define F_BOOL_ANYTRUE 3499
#define F_FLOAT8MI 219
#define F_BRIN_MINMAX_OPCINFO 3383
#define F_JSONB_TO_RECORDSET 3491
#define F_SPG_TEXT_PICKSPLIT 4029
#define __UINTPTR_TYPE__ long unsigned int
#define fmgr_info_set_expr(expr,finfo) ((finfo)->fn_expr = (expr))
#define F_CIRCLE_OVERLAP 1459
#define F_BITOCTETLENGTH 1682
#define F_TS_RANKCD_WTT 3708
#define F_ARRAY_IN 750
#define F_JSONB_OBJECT_FIELD_TEXT 3214
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define F_TSQUERYIN 3612
#define F_UUID_EQ 2956
#define PointerIsAligned(pointer,type) (((uintptr_t)(pointer) % (sizeof (type))) == 0)
#define F_ON_PB 136
#define NI_IDN 32
#define HeapTupleIsValid(tuple) PointerIsValid(tuple)
#define F_FDW_HANDLER_OUT 3117
#define F_PG_DATABASE_SIZE_OID 2324
#define F_RECORD_IMAGE_LE 3185
#define F_ARRAY_REMOVE 3167
#define F_TIMESTAMP_ZONE_TRANSFORM 3995
#define F_HAS_DATABASE_PRIVILEGE_ID_NAME 2252
#define F_JSON_POPULATE_RECORD 3960
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define F_INT2LT 64
#define SOL_AAL 265
#define SHUT_RD SHUT_RD
#define __linux__ 1
#define IPV6_PMTUDISC_DONT 0
#define F_NUMERIC_UMINUS 1771
#define __LDBL_MIN_10_EXP__ (-4931)
#define EMEDIUMTYPE 124
#define EKEYREVOKED 128
#define __useconds_t_defined 
#define SO_TIMESTAMPING SO_TIMESTAMPING_OLD
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define F_INT4_TO_CHAR 1773
#define SOL_NETLINK 270
#define F_HAS_SERVER_PRIVILEGE_NAME_ID 3007
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define F_INT28MUL 943
#define BLOCK_H 
#define F_QUOTE_LITERAL 1283
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define F_TSM_BERNOULLI_HANDLER 3313
#define F_TSMATCHJOINSEL 3687
#define ERRCODE_INVALID_INDICATOR_PARAMETER_VALUE MAKE_SQLSTATE('2','2','0','1','0')
#define INET_ADDRSTRLEN 16
#define F_BIT_IN 1564
#define __LC_TELEPHONE 10
#define __HAVE_DISTINCT_FLOAT64X 0
#define F_PG_STAT_GET_DEAD_TUPLES 2879
#define ERRCODE_FDW_INVALID_STRING_FORMAT MAKE_SQLSTATE('H','V','0','0','A')
#define ERRCODE_INVALID_FUNCTION_DEFINITION MAKE_SQLSTATE('4','2','P','1','3')
#define PF_DECnet 12
#define PG_UINT8_MAX (0xFF)
#define ERRCODE_INVALID_RECURSION MAKE_SQLSTATE('4','2','P','1','9')
#define F_PG_CONF_LOAD_TIME 2034
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define __SIZEOF_LONG_LONG__ 8
#define F_INT2NE 145
#define F_POINT_LEFT 132
#define F_RANGE_LOWER 3848
#define __USE_DYNAMIC_STACK_SIZE 1
#define F_INT8_ACCUM 1836
#define AF_IPX PF_IPX
#define PF_CAN 29
#define AG_AG_NAMESPACE_H 
#define IPV6_MULTICAST_ALL 29
#define F_JSON_OBJECT_TWO_ARG 3203
#define PG_GETARG_RAW_VARLENA_P(n) ((struct varlena *) PG_GETARG_POINTER(n))
#define F_RANGE_CMP 3870
#define __USE_ATFILE 1
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define F_PG_READ_BINARY_FILE 3295
#define pg_restrict __restrict__
#define F_PG_STAT_GET_XACT_FUNCTION_CALLS 3046
#define PF_IB 27
#define F_NUMERIC_POLY_VAR_SAMP 3391
#define F_INT8LT 469
#define F_RANGE_GIST_PENALTY 3879
#define HAVE_GCC__SYNC_CHAR_TAS 1
#define DEFAULT_CHECKPOINT_FLUSH_AFTER 32
#define F_NETWORK_CMP 926
#define isgraph(c) __isctype((c), _ISgraph)
#define _GCC_PTRDIFF_T 
#define F_ANYELEMENT_OUT 2313
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define ERRCODE_TRIM_ERROR MAKE_SQLSTATE('2','2','0','2','7')
#define PACKAGE_URL ""
#define F_POINT_DISTANCE 991
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define F_TEXTPOS 849
#define __FLT128_DECIMAL_DIG__ 36
#define F_PG_TABLESPACE_SIZE_NAME 2323
#define F_BPCHAR_PATTERN_LE 2175
#define ERRCODE_SUBSTRING_ERROR MAKE_SQLSTATE('2','2','0','1','1')
#define LOG_DESTINATION_CSVLOG 8
#define F_GTSQUERY_CONSISTENT 3701
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define F_RECORD_IMAGE_EQ 3181
#define F_PG_STAT_GET_TUPLES_UPDATED 1932
#define LOG 15
#define F_INT2XOR 1894
#define F_ARRAYCONTJOINSEL 3818
#define ERRCODE_CANNOT_CONNECT_NOW MAKE_SQLSTATE('5','7','P','0','3')
#define IS_GRAPHID_STACK_EMPTY(stack) get_stack_size(stack) == 0
#define F_IN_RANGE_DATE_INTERVAL 4133
#define ENOTUNIQ 76
#define F_GIN_TSQUERY_CONSISTENT 3658
#define F_PG_NDISTINCT_RECV 3357
#define __exctype(name) extern int name (int) __THROW
#define F_GINHANDLER 333
#define pg_attribute_always_inline __attribute__((always_inline)) inline
#define F_PG_STAT_GET_BUF_WRITTEN_BACKEND 2775
#define PTRDIFF_MAX (9223372036854775807L)
#define F_DATE_FINITE 1373
#define ERRCODE_NO_ACTIVE_SQL_TRANSACTION MAKE_SQLSTATE('2','5','P','0','1')
#define F_INT2PL 176
#define _STDARG_H 
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define F_WIDTH_BUCKET_FLOAT8 320
#define ERRCODE_INDICATOR_OVERFLOW MAKE_SQLSTATE('2','2','0','2','2')
#define F_INT4LT 66
#define F_FLOAT8_AVG 1830
#define F_TIMESTAMPTZ_GE_TIMESTAMP 2531
#define __WALL 0x40000000
#define F_PG_REPLICATION_ORIGIN_XACT_RESET 6011
#define F_HAS_FOREIGN_DATA_WRAPPER_PRIVILEGE_ID_ID 3003
#define __ldiv_t_defined 1
#define ___int_ptrdiff_t_h 
#define F_JSONB_BUILD_OBJECT 3273
#define __LDBL_NORM_MAX__ 1.18973149535723176508575932662800702e+4932L
#define F_POINT_ADD 1441
#define DatumGetBpCharPSlice(X,m,n) ((BpChar *) PG_DETOAST_DATUM_SLICE(X,m,n))
#define F_NUMERIC_SERIALIZE 3335
#define F_HAS_COLUMN_PRIVILEGE_ID_NAME_ATTNUM 3017
#define F_DATE_CMP_TIMESTAMP 2344
#define VARATT_SHORT_MAX 0x7F
#define F_DATE_LARGER 1138
#define F_INET_SERVER_ADDR 2198
#define __FLT_MIN_10_EXP__ (-37)
#define F_BOX_EQ 128
#define PG_RETURN_VOID() return (Datum) 0
#define F_DIST_PPOLY 3275
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define ERRCODE_DATA_CORRUPTED MAKE_SQLSTATE('X','X','0','0','1')
#define F_HAS_FUNCTION_PRIVILEGE_NAME_ID 2257
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define SOL_ALG 279
#define IP_PMTUDISC_INTERFACE 4
#define F_ACLITEMIN 1031
#define IP_RECVERR_RFC4884 26
#define F_INTER_LB 278
#define PF_VSOCK 40
#define F_BRIN_MINMAX_UNION 3386
#define F_BYTEATRIM 2015
#define F_ROW_TO_JSON 3155
#define IPV6_RTHDR 57
#define F_CASH_DIV_INT2 867
#define __ORDER_LITTLE_ENDIAN__ 1234
#define MovedPartitionsOffsetNumber 0xfffd
#define INT_LEAST16_MAX (32767)
#define ERRCODE_DUPLICATE_CURSOR MAKE_SQLSTATE('4','2','P','0','3')
#define PG_ARGISNULL(n) (fcinfo->argnull[n])
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; }
#define F_GTSVECTOR_CONSISTENT 3654
#define F_INTERVAL_TRANSFORM 3918
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define HAVE_DECL_STRLCPY 0
#define F_RANGE_LOWER_INF 3853
#define _GNU_SOURCE 1
#define F_INT8_AVG_DESERIALIZE 2787
#define SO_BUF_LOCK 72
#define F_BITSHIFTLEFT 1677
#define F_TS_STAT1 3689
#define F_TS_STAT2 3690
#define pg_attribute_aligned(a) __attribute__((aligned(a)))
#define F_DROUND 228
#define __P(args) args
#define PG_DIAG_SEVERITY_NONLOCALIZED 'V'
#define F_BTARRAYCMP 382
#define F_JSONB_NE 4038
#define ERRCODE_CONFIG_FILE_ERROR MAKE_SQLSTATE('F','0','0','0','0')
#define F_PG_GET_FUNCTION_RESULT 2165
#define PG_DIAG_CONSTRAINT_NAME 'n'
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define F_RECORD_IMAGE_NE 3182
#define F_BE_LO_TRUNCATE 1004
#define ERRCODE_INVALID_PRECEDING_OR_FOLLOWING_SIZE MAKE_SQLSTATE('2','2','0','1','3')
#define PG_FUNCTION_INFO_V1(funcname) extern Datum funcname(PG_FUNCTION_ARGS); extern PGDLLEXPORT const Pg_finfo_record * CppConcat(pg_finfo_,funcname)(void); const Pg_finfo_record * CppConcat(pg_finfo_,funcname) (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable
#define PF_LOCAL 1
#define F_INT28 754
#define F_CLOSE_PB 367
#define F_RI_FKEY_SETNULL_DEL 1650
#define PG_GETARG_INT16(n) DatumGetInt16(PG_GETARG_DATUM(n))
#define PG_GETARG_BYTEA_P_SLICE(n,a,b) DatumGetByteaPSlice(PG_GETARG_DATUM(n),a,b)
#define F_NUMERIC_SMALLER 1766
#define __ATOMIC_ACQ_REL 4
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define HAVE_SYS_SELECT_H 1
#define F_HAS_ANY_COLUMN_PRIVILEGE_ID_NAME 3026
#define __fsblkcnt_t_defined 
#define F_RANGE_GE 3873
#define F_LIKE_ESCAPE 1637
#define F_LSEG_LT 1483
#define _STDLIB_H 1
#define _(x) gettext(x)
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
