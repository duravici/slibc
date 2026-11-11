#ifndef _STDARG_H_
#define _STDARG_H_

#define __REQUIRE_va_list
#include <sys/_types.h>

/* ISO/IEC 9899:1999
 * 7.15.1 Variable argument list access macros */

/* 7.15.1.1 The va_arg macro */
#define va_arg(ap, type)     __builtin_va_arg(ap, type)

/* 7.15.1.2 The va_copy macro */
#define __va_copy(dest, src) __builtin_va_copy(dest, src)

#if __STDC_VERSION__ >= 199901L || __cplusplus >= 201103L
#define va_copy(dest, src)   __va_copy(dest, src)
#endif /* __STDC_VERSION__ >= 199901L || __cplusplus >= 201103L */

/* 7.15.1.3 The va_end macro */
#define va_end(ap)           __builtin_va_end(ap)

/* 7.15.1.4 The va_start macro */
#define va_start(ap, last)   __builtin_va_start(ap, last)

#endif /* ! _STDARG_H_ */