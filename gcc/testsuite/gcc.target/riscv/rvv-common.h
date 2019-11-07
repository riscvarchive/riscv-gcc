/* MACRO take 4 argument, scalar type, vector class, vector type
   suffix and MLEN.
   MACRO(STYPE, VCLASS, EM, MLEN)  */

#define RVV_INT_TEST(MACRO)		\
  MACRO(     char, int,  8m1,  8)	\
  MACRO(     char, int,  8m2,  4)	\
  MACRO(     char, int,  8m4,  2)	\
  MACRO(     char, int,  8m8,  1)	\
  MACRO(    short, int, 16m1, 16)	\
  MACRO(    short, int, 16m2,  8)	\
  MACRO(    short, int, 16m4,  4)	\
  MACRO(    short, int, 16m8,  2)	\
  MACRO(      int, int, 32m1, 32)	\
  MACRO(      int, int, 32m2, 16)	\
  MACRO(      int, int, 32m4,  8)	\
  MACRO(      int, int, 32m8,  4)	\
  MACRO(long long, int, 64m1, 64)	\
  MACRO(long long, int, 64m2, 32)	\
  MACRO(long long, int, 64m4, 16)	\
  MACRO(long long, int, 64m8,  8)

#define RVV_UINT_TEST(MACRO)			\
  MACRO(unsigned      char, uint,  8m1,  8)	\
  MACRO(unsigned      char, uint,  8m2,  4)	\
  MACRO(unsigned      char, uint,  8m4,  2)	\
  MACRO(unsigned      char, uint,  8m8,  1)	\
  MACRO(unsigned     short, uint, 16m1, 16)	\
  MACRO(unsigned     short, uint, 16m2,  8)	\
  MACRO(unsigned     short, uint, 16m4,  4)	\
  MACRO(unsigned     short, uint, 16m8,  2)	\
  MACRO(unsigned       int, uint, 32m1, 32)	\
  MACRO(unsigned       int, uint, 32m2, 16)	\
  MACRO(unsigned       int, uint, 32m4,  8)	\
  MACRO(unsigned       int, uint, 32m8,  4)	\
  MACRO(unsigned long long, uint, 64m1, 64)	\
  MACRO(unsigned long long, uint, 64m2, 32)	\
  MACRO(unsigned long long, uint, 64m4, 16)	\
  MACRO(unsigned long long, uint, 64m8,  8)

#define RVV_WINT_TEST(MACRO)				\
  MACRO(     char, int,  8m1,  8,     short, 16m2)	\
  MACRO(     char, int,  8m2,  4,     short, 16m4)	\
  MACRO(     char, int,  8m4,  2,     short, 16m8)	\
  MACRO(    short, int, 16m1, 16,       int, 32m2)	\
  MACRO(    short, int, 16m2,  8,       int, 32m4)	\
  MACRO(    short, int, 16m4,  4,       int, 32m8)	\
  MACRO(      int, int, 32m1, 32, long long, 64m2)	\
  MACRO(      int, int, 32m2, 16, long long, 64m4)	\
  MACRO(      int, int, 32m4,  8, long long, 64m8)

#define RVV_FLOAT_TEST(MACRO)     	\
  MACRO(float16_t, float, 16m1, 16)	\
  MACRO(float16_t, float, 16m2,  8)	\
  MACRO(float16_t, float, 16m4,  4)	\
  MACRO(float16_t, float, 16m8,  2)	\
  MACRO(    float, float, 32m1, 32)	\
  MACRO(    float, float, 32m2, 16)	\
  MACRO(    float, float, 32m4,  8)	\
  MACRO(    float, float, 32m8,  4)	\
  MACRO(   double, float, 64m1, 64)	\
  MACRO(   double, float, 64m2, 32)	\
  MACRO(   double, float, 64m4, 16)	\
  MACRO(   double, float, 64m8,  8)

#define RVV_INT_REDUC_TEST(MACRO)		\
  MACRO(     char, int,  8m1,  8m1, 8)		\
  MACRO(     char, int,  8m2,  8m1, 4)		\
  MACRO(     char, int,  8m4,  8m1, 2)		\
  MACRO(     char, int,  8m8,  8m1, 1)		\
  MACRO(    short, int, 16m1, 16m1, 16)		\
  MACRO(    short, int, 16m2, 16m1,  8)		\
  MACRO(    short, int, 16m4, 16m1,  4)		\
  MACRO(    short, int, 16m8, 16m1,  2)		\
  MACRO(      int, int, 32m1, 32m1, 32)		\
  MACRO(      int, int, 32m2, 32m1, 16)		\
  MACRO(      int, int, 32m4, 32m1,  8)		\
  MACRO(      int, int, 32m8, 32m1,  4)		\
  MACRO(long long, int, 64m1, 64m1, 64)		\
  MACRO(long long, int, 64m2, 64m1, 32)		\
  MACRO(long long, int, 64m4, 64m1, 16)		\
  MACRO(long long, int, 64m8, 64m1,  8)

#define RVV_UINT_REDUC_TEST(MACRO)				\
  MACRO(unsigned      char, uint,  8m1,  8m1,  8)		\
  MACRO(unsigned      char, uint,  8m2,  8m1,  4)		\
  MACRO(unsigned      char, uint,  8m4,  8m1,  2)		\
  MACRO(unsigned      char, uint,  8m8,  8m1,  1)		\
  MACRO(unsigned     short, uint, 16m1, 16m1, 16)		\
  MACRO(unsigned     short, uint, 16m2, 16m1,  8)		\
  MACRO(unsigned     short, uint, 16m4, 16m1,  4)		\
  MACRO(unsigned     short, uint, 16m8, 16m1,  2)		\
  MACRO(unsigned       int, uint, 32m1, 32m1, 32)		\
  MACRO(unsigned       int, uint, 32m2, 32m1, 16)		\
  MACRO(unsigned       int, uint, 32m4, 32m1,  8)		\
  MACRO(unsigned       int, uint, 32m8, 32m1,  4)		\
  MACRO(unsigned long long, uint, 64m1, 64m1, 64)		\
  MACRO(unsigned long long, uint, 64m2, 64m1, 32)		\
  MACRO(unsigned long long, uint, 64m4, 64m1, 16)		\
  MACRO(unsigned long long, uint, 64m8, 64m1,  8)
