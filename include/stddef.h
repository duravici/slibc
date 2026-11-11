#ifndef _STDDEF_H_
#define _STDDEF_H_

/* ISO/IEC 9899:1999
 * 7.17 Common definitions <stddef.h> */

#include <sys/_null.h>

#define __REQUIRE_ptrdiff_t
#define __REQUIRE_size_t
#define __REQUIRE_wchar_t

/* max_align_t: C++11 only, C99 has no such type */
#if __cplusplus >= 201103L
#define __REQUIRE_max_align_t
#endif /* __cplusplus >= 201103L */

#include <sys/_types.h>

#if __GNUC__ > 3
#define offsetof(type, member) __builtin_offsetof(type, member)
#else
#define offsetof(type, member) ((size_t)((char*)&((type*)0)->member - (char*)0))
#endif /* __GNUC__ > 3 */

#endif /* ! _STDDEF_H_ */