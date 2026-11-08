#ifndef _LIMITS_H_
#define _LIMITS_H_

#include <bits/_limits.h>

/* ISO/IEC 9899:1999
 * 5.2.4.2.1 Sizes of integer types <limits.h> */

/* number of bits for smallest object that is not a bit-field (byte) */
#define CHAR_BIT 8

/* maximum value for an object of type signed char */
#define SCHAR_MAX (0x7f)

/* minimum value for an object of type signed char */
#define SCHAR_MIN (-SCHAR_MAX - 1)

/* maximum value for an object of type unsigned char */
#define UCHAR_MAX (0xff)

/* char signedness, thanks, musl.. :) */
#if '\xff' > 0
/* minimum value for an object of type char */
#define CHAR_MIN 0

/* maximum value for an object of type char */
#define CHAR_MAX UCHAR_MAX
#else
#define CHAR_MIN SCHAR_MIN
#define CHAR_MAX SCHAR_MAX
#endif /* '\xff' > 0 */

/* maximum number of bytes in a multibyte character, for any supported locale */
#define MB_LEN_MAX 4 /* 21-bit UTF-8 */

/* maximum value for an object of type short int */
#define SHRT_MAX (0x7fff)

/* minimum value for an object of type short int */
#define SHRT_MIN (-SHRT_MAX - 1)

/* maximum value for an object of type unsigned short int */
#define USHRT_MAX (0xffff)

/* maximum value for an object of type int */
#define INT_MAX (0x7fffffff)

/* minimum value for an object of type int */
#define INT_MIN (-INT_MAX - 1)

/* maximum value for an object of type unsigned int */
#define UINT_MAX (0xffffffffU)

/* minimum value for an object of type long int */
#define LONG_MIN (-LONG_MAX - 1L)

/* maximum value for an object of type unsigned long int */
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)

/* maximum value for an object of type long long int */
#define LLONG_MAX (0x7fffffffffffffffLL)

/* minimum value for an object of type long long int */
#define LLONG_MIN (-LLONG_MAX - 1LL)

/* maximum value for an object of type unsigned long long int */
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)

/* TODO: Cover POSIX as well */

#endif /* ! _LIMITS_H_ */