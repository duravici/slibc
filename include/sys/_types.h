/* no include guard on purpose */
#include <bits/_types.h>

#if defined(__REQUIRE_int8_t) && !defined(__DEFINED_int8_t)
typedef signed char int8_t;
#define __DEFINED_int8_t
#endif

#if defined(__REQUIRE_int16_t) && !defined(__DEFINED_int16_t)
typedef short int int16_t;
#define __DEFINED_int16_t
#endif

#if defined(__REQUIRE_int32_t) && !defined(__DEFINED_int32_t)
typedef int int32_t;
#define __DEFINED_int32_t
#endif

#if defined(__REQUIRE_int64_t) && !defined(__DEFINED_int64_t)
typedef __int64_t int64_t;
#define __DEFINED_int64_t
#endif

#if defined(__REQUIRE_uint8_t) && !defined(__DEFINED_uint8_t)
typedef unsigned char uint8_t;
#define __DEFINED_uint8_t
#endif

#if defined(__REQUIRE_uint16_t) && !defined(__DEFINED_uint16_t)
typedef short unsigned int uint16_t;
#define __DEFINED_uint16_t
#endif

#if defined(__REQUIRE_uint32_t) && !defined(__DEFINED_uint32_t)
typedef unsigned int uint32_t;
#define __DEFINED_uint32_t
#endif

#if defined(__REQUIRE_uint64_t) && !defined(__DEFINED_uint64_t)
typedef __uint64_t uint64_t;
#define __DEFINED_uint64_t
#endif

#if defined(__REQUIRE_size_t) && !defined(__DEFINED_size_t)
typedef __size_t size_t;
#define __DEFINED_size_t
#endif

#if defined(__REQUIRE_ptrdiff_t) && !defined(__DEFINED_ptrdiff_t)
typedef __ptrdiff_t ptrdiff_t;
#define __DEFINED_ptrdiff_t
#endif

#if defined(__REQUIRE_wchar_t) && !defined(__DEFINED_wchar_t)
#ifndef __cplusplus
typedef __wchar_t wchar_t;
#endif /* ! __cplusplus */
#define __DEFINED_wchar_t
#endif

#if defined(__REQUIRE_max_align_t) && !defined(__DEFINED_max_align_t)
typedef struct {
	__MAX_ALIGN_LL long long __ll;
	long double              __ld;
} max_align_t;
#define __DEFINED_max_align_t
#endif

#if defined(__REQUIRE_va_list) && !defined(__DEFINED_va_list)
typedef __builtin_va_list va_list;
#define __DEFINED_va_list
#endif

/**************************************/

/* stdint.h */
#undef __REQUIRE_int8_t
#undef __REQUIRE_int16_t
#undef __REQUIRE_int32_t
#undef __REQUIRE_int64_t

#undef __REQUIRE_uint8_t
#undef __REQUIRE_uint16_t
#undef __REQUIRE_uint32_t
#undef __REQUIRE_uint64_t

/* stddef.h */
#undef __REQUIRE_size_t
#undef __REQUIRE_ptrdiff_t
#undef __REQUIRE_wchar_t
#undef __REQUIRE_max_align_t

/* stdarg.h */
#undef __REQUIRE_va_list