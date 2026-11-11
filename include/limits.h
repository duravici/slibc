#ifndef _LIMITS_H_
#define _LIMITS_H_

#include <bits/_limits.h>

/* ISO/IEC 9899:1999
 * 5.2.4.2.1 Sizes of integer types <limits.h> */

#define CHAR_BIT   8                         /* number of bits in a byte */

#define SCHAR_MAX  (0x7f)                    /* max value of signed char */
#define SCHAR_MIN  (-SCHAR_MAX - 1)          /* min value of signed char */
#define UCHAR_MAX  (0xff)                    /* max value of unsigned char */

/* thanks, musl.. */
#if '\xff' > 0
#define CHAR_MIN   0                         /* min value of char */
#define CHAR_MAX   UCHAR_MAX                 /* max value of char */
#else
#define CHAR_MIN   SCHAR_MIN                 /* min value of char */
#define CHAR_MAX   SCHAR_MAX                 /* max value of char */
#endif /* '\xff' > 0 */

#define MB_LEN_MAX 4                         /* max bytes in a multibyte char (UTF-8) */

#define SHRT_MAX   (0x7fff)                  /* max value of short */
#define SHRT_MIN   (-SHRT_MAX - 1)           /* min value of short */
#define USHRT_MAX  (0xffff)                  /* max value of unsigned short */

#define INT_MAX    (0x7fffffff)              /* max value of int */
#define INT_MIN    (-INT_MAX - 1)            /* min value of int */
#define UINT_MAX   (0xffffffffU)             /* max value of unsigned int */

#define LONG_MIN   (-LONG_MAX - 1L)          /* min value of long */
#define ULONG_MAX  (LONG_MAX * 2UL + 1UL)    /* max value of unsigned long */

#define LLONG_MAX  (0x7fffffffffffffffLL)    /* max value of long long */
#define LLONG_MIN  (-LLONG_MAX - 1LL)        /* min value of long long */
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL) /* max value of unsigned long long */

/* TODO: Cover POSIX as well */

#endif /* ! _LIMITS_H_ */