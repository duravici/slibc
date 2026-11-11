#ifndef _STDINT_H_
#define _STDINT_H_

/* ISO/IEC 9899:1999
 * 7.18.1 Integer types */

#define __REQUIRE_int8_t
#define __REQUIRE_int16_t
#define __REQUIRE_int32_t
#define __REQUIRE_int64_t

#define __REQUIRE_uint8_t
#define __REQUIRE_uint16_t
#define __REQUIRE_uint32_t
#define __REQUIRE_uint64_t

#include <sys/_types.h>

/* ISO/IEC 9899:1999
 * 7.18.1.2 Minimum-width integer types */

typedef int8_t   int_least8_t;
typedef int16_t  int_least16_t;
typedef int32_t  int_least32_t;
typedef int64_t  int_least64_t;

typedef uint8_t  uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;

/* ISO/IEC 9899:1999
 * 7.18.1.3 Fastest minimum-width integer types */

typedef int8_t   int_fast8_t;
typedef int64_t  int_fast64_t;

typedef uint8_t  uint_fast8_t;
typedef uint64_t uint_fast64_t;

/* ISO/IEC 9899:1999
 * 7.18.1.5 Greatest-width integer types */

typedef int64_t  intmax_t;
typedef uint64_t uintmax_t;

/* ISO/IEC 9899:1999
 * 7.18.2.1 Limits of exact-width integer types */

/* maximum values of exact-width signed integer types */
#define INT8_MAX   (0x7f)
#define INT16_MAX  (0x7fff)
#define INT32_MAX  (0x7fffffff)
#define INT64_MAX  (INT64_C(0x7fffffffffffffff))

/* minimum values of exact-width signed integer types */
#define INT8_MIN   (-INT8_MAX - 1)
#define INT16_MIN  (-INT16_MAX - 1)
#define INT32_MIN  (-INT32_MAX - 1)
#define INT64_MIN  (-INT64_MAX - 1)

/* maximum values of exact-width unsigned integer types */
#define UINT8_MAX  (0xff)
#define UINT16_MAX (0xffff)
#define UINT32_MAX (0xffffffffU)
#define UINT64_MAX (UINT64_C(0xffffffffffffffff))

/* ISO/IEC 9899:1999
 * 7.18.2.2 Limits of minimum-width integer types */

/* minimum values of minimum-width signed integer types */
#define INT_LEAST8_MIN   INT8_MIN
#define INT_LEAST16_MIN  INT16_MIN
#define INT_LEAST32_MIN  INT32_MIN
#define INT_LEAST64_MIN  INT64_MIN

/* maximum values of minimum-width signed integer types */
#define INT_LEAST8_MAX   INT8_MAX
#define INT_LEAST16_MAX  INT16_MAX
#define INT_LEAST32_MAX  INT32_MAX
#define INT_LEAST64_MAX  INT64_MAX

/* maximum values of minimum-width unsigned integer types */
#define UINT_LEAST8_MAX  UINT8_MAX
#define UINT_LEAST16_MAX UINT16_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define UINT_LEAST64_MAX UINT64_MAX

/* ISO/IEC 9899:1999
 * 7.18.2.3 Limits of fastest minimum-width integer types */

/* minimum values of fastest minimum-width signed integer types */
#define INT_FAST8_MIN    INT8_MIN
#define INT_FAST64_MIN   INT64_MIN

/* maximum values of fastest minimum-width signed integer types */
#define INT_FAST8_MAX    INT8_MAX
#define INT_FAST64_MAX   INT64_MAX

/* maximum values of fastest minimum-width unsigned integer types */
#define UINT_FAST8_MAX   UINT8_MAX
#define UINT_FAST64_MAX  UINT64_MAX

/* ISO/IEC 9899:1999
 * 7.18.2.5 Limits of greatest-width integer types */

/* minimum value of greatest-width signed integer type */
#define INTMAX_MIN  INT64_MIN

/* maximum value of greatest-width signed integer type */
#define INTMAX_MAX  INT64_MAX

/* maximum value of greatest-width unsigned integer type */
#define UINTMAX_MAX UINT64_MAX

/* ISO/IEC 9899:1999
 * 7.18.3 Limits of other integer types */

/* limits of sig_atomic_t */
#define SIG_ATOMIC_MIN INT32_MIN
#define SIG_ATOMIC_MAX INT32_MAX

/* limits of wchar_t */
#if L'\0'-1 > 0
#define WCHAR_MAX (UINT32_MAX+L'\0')
#define WCHAR_MIN (0+L'\0')
#else
#define WCHAR_MAX (INT32_MAX+L'\0')
#define WCHAR_MIN (-1-INT32_MAX+L'\0')
#endif /* L'\0' - 1 > 0 */

/* limits of wint_t */
#define WINT_MIN 0U
#define WINT_MAX UINT32_MAX

#include <bits/_stdint.h>

/* ISO/IEC 9899:1999
 * 7.18.4 Macros for integer constants */

#define INT8_C(c)    c
#define INT16_C(c)   c
#define INT32_C(c)   c

#define UINT8_C(c)   c
#define UINT16_C(c)  c
#define UINT32_C(c)  c ## U

#define INTMAX_C(c)  INT64_C(c)
#define UINTMAX_C(c) UINT64_C(c)

#endif /* ! _STDINT_H_ */