typedef int          int_fast16_t;
typedef int          int_fast32_t;

typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;

/* ISO/IEC 9899:1999
 * 7.18.1.4 Integer types capable of holding object pointers */

typedef int          intptr_t;
typedef unsigned int uintptr_t;

#define INT_FAST16_MIN  INT32_MIN
#define INT_FAST32_MIN  INT32_MIN

#define INT_FAST16_MAX  INT32_MAX
#define INT_FAST32_MAX  INT32_MAX

#define UINT_FAST16_MAX UINT32_MAX
#define UINT_FAST32_MAX UINT32_MAX

/* ISO/IEC 9899:1999
 * 7.18.2.4 Limits of integer types capable of holding object pointers */

/* minimum value of pointer-holding signed integer type */
#define INTPTR_MIN  INT32_MIN

/* maximum value of pointer-holding signed integer type */
#define INTPTR_MAX  INT32_MAX

/* maximum value of pointer-holding unsigned integer type */
#define UINTPTR_MAX UINT32_MAX

/* ISO/IEC 9899:1999
 * 7.18.3 Limits of other integer types */

/* limits of ptrdiff_t */
#define PTRDIFF_MIN INT32_MIN
#define PTRDIFF_MAX INT32_MAX

/* limits of size_t */
#define SIZE_MAX    UINT32_MAX

#define INT64_C(c)  c ## LL
#define UINT64_C(c) c ## ULL