typedef long int          int_fast16_t;
typedef long int          int_fast32_t;

typedef long unsigned int uint_fast16_t;
typedef long unsigned int uint_fast32_t;

/* ISO/IEC 9899:1999
 * 7.18.1.4 Integer types capable of holding object pointers */

typedef long int          intptr_t;
typedef long unsigned int uintptr_t;

#define INT_FAST16_MIN  INT64_MIN
#define INT_FAST32_MIN  INT64_MIN

#define INT_FAST16_MAX  INT64_MAX
#define INT_FAST32_MAX  INT64_MAX

#define UINT_FAST16_MAX UINT64_MAX
#define UINT_FAST32_MAX UINT64_MAX

/* ISO/IEC 9899:1999
 * 7.18.2.4 Limits of integer types capable of holding object pointers */

/* minimum value of pointer-holding signed integer type */
#define INTPTR_MIN  INT64_MIN

/* maximum value of pointer-holding signed integer type */
#define INTPTR_MAX  INT64_MAX

/* maximum value of pointer-holding unsigned integer type */
#define UINTPTR_MAX UINT64_MAX

/* ISO/IEC 9899:1999
 * 7.18.3 Limits of other integer types */

/* limits of ptrdiff_t */
#define PTRDIFF_MIN INT64_MIN
#define PTRDIFF_MAX INT64_MAX

/* limits of size_t */
#define SIZE_MAX    UINT64_MAX

#define INT64_C(c)  c ## L
#define UINT64_C(c) c ## UL