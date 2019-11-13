/* MACRO take 4 argument, scalar type, vector class, vector type
   suffix and MLEN.
   MACRO(STYPE, VCLASS, EM, MLEN)  */

#include <stdint.h>

#define RVV_INT_TEST(MACRO)	\
  MACRO( int8_t, int,  8m1,  8)	\
  MACRO( int8_t, int,  8m2,  4)	\
  MACRO( int8_t, int,  8m4,  2)	\
  MACRO( int8_t, int,  8m8,  1)	\
  MACRO(int16_t, int, 16m1, 16)	\
  MACRO(int16_t, int, 16m2,  8)	\
  MACRO(int16_t, int, 16m4,  4)	\
  MACRO(int16_t, int, 16m8,  2)	\
  MACRO(int32_t, int, 32m1, 32)	\
  MACRO(int32_t, int, 32m2, 16)	\
  MACRO(int32_t, int, 32m4,  8)	\
  MACRO(int32_t, int, 32m8,  4)	\
  MACRO(int64_t, int, 64m1, 64)	\
  MACRO(int64_t, int, 64m2, 32)	\
  MACRO(int64_t, int, 64m4, 16)	\
  MACRO(int64_t, int, 64m8,  8)

#define RVV_INT_MASKED_TEST(MACRO)	\
  MACRO( int8_t, int,  8m1,  8, slt)	\
  MACRO( int8_t, int,  8m2,  4, slt)	\
  MACRO( int8_t, int,  8m4,  2, slt)	\
  MACRO( int8_t, int,  8m8,  1, slt)	\
  MACRO(int16_t, int, 16m1, 16, slt)	\
  MACRO(int16_t, int, 16m2,  8, slt)	\
  MACRO(int16_t, int, 16m4,  4, slt)	\
  MACRO(int16_t, int, 16m8,  2, slt)	\
  MACRO(int32_t, int, 32m1, 32, slt)	\
  MACRO(int32_t, int, 32m2, 16, slt)	\
  MACRO(int32_t, int, 32m4,  8, slt)	\
  MACRO(int32_t, int, 32m8,  4, slt)	\
  MACRO(int64_t, int, 64m1, 64, slt)	\
  MACRO(int64_t, int, 64m2, 32, slt)	\
  MACRO(int64_t, int, 64m4, 16, slt)	\
  MACRO(int64_t, int, 64m8,  8, slt)

#define RVV_UINT_TEST(MACRO)		\
  MACRO( uint8_t, uint,  8m1,  8)	\
  MACRO( uint8_t, uint,  8m2,  4)	\
  MACRO( uint8_t, uint,  8m4,  2)	\
  MACRO( uint8_t, uint,  8m8,  1)	\
  MACRO(uint16_t, uint, 16m1, 16)	\
  MACRO(uint16_t, uint, 16m2,  8)	\
  MACRO(uint16_t, uint, 16m4,  4)	\
  MACRO(uint16_t, uint, 16m8,  2)	\
  MACRO(uint32_t, uint, 32m1, 32)	\
  MACRO(uint32_t, uint, 32m2, 16)	\
  MACRO(uint32_t, uint, 32m4,  8)	\
  MACRO(uint32_t, uint, 32m8,  4)	\
  MACRO(uint64_t, uint, 64m1, 64)	\
  MACRO(uint64_t, uint, 64m2, 32)	\
  MACRO(uint64_t, uint, 64m4, 16)	\
  MACRO(uint64_t, uint, 64m8,  8)

#define RVV_UINT_MASKED_TEST(MACRO)	\
  MACRO( uint8_t, uint,  8m1,  8, sltu)	\
  MACRO( uint8_t, uint,  8m2,  4, sltu)	\
  MACRO( uint8_t, uint,  8m4,  2, sltu)	\
  MACRO( uint8_t, uint,  8m8,  1, sltu)	\
  MACRO(uint16_t, uint, 16m1, 16, sltu)	\
  MACRO(uint16_t, uint, 16m2,  8, sltu)	\
  MACRO(uint16_t, uint, 16m4,  4, sltu)	\
  MACRO(uint16_t, uint, 16m8,  2, sltu)	\
  MACRO(uint32_t, uint, 32m1, 32, sltu)	\
  MACRO(uint32_t, uint, 32m2, 16, sltu)	\
  MACRO(uint32_t, uint, 32m4,  8, sltu)	\
  MACRO(uint32_t, uint, 32m8,  4, sltu)	\
  MACRO(uint64_t, uint, 64m1, 64, sltu)	\
  MACRO(uint64_t, uint, 64m2, 32, sltu)	\
  MACRO(uint64_t, uint, 64m4, 16, sltu)	\
  MACRO(uint64_t, uint, 64m8,  8, sltu)

#define RVV_WINT_TEST(MACRO)			\
  MACRO( int8_t, int,  8m1,  8, int16_t, 16m2)	\
  MACRO( int8_t, int,  8m2,  4, int16_t, 16m4)	\
  MACRO( int8_t, int,  8m4,  2, int16_t, 16m8)	\
  MACRO(int16_t, int, 16m1, 16, int32_t, 32m2)	\
  MACRO(int16_t, int, 16m2,  8, int32_t, 32m4)	\
  MACRO(int16_t, int, 16m4,  4, int32_t, 32m8)	\
  MACRO(int32_t, int, 32m1, 32, int64_t, 64m2)	\
  MACRO(int32_t, int, 32m2, 16, int64_t, 64m4)	\
  MACRO(int32_t, int, 32m4,  8, int64_t, 64m8)

/* The unsigned is added in the macro that we call.  */
#define RVV_WUINT_TEST(MACRO)				\
  MACRO( uint8_t, int,  8m1,  8, uint16_t, 16m2)	\
  MACRO( uint8_t, int,  8m2,  4, uint16_t, 16m4)	\
  MACRO( uint8_t, int,  8m4,  2, uint16_t, 16m8)	\
  MACRO(uint16_t, int, 16m1, 16, uint32_t, 32m2)	\
  MACRO(uint16_t, int, 16m2,  8, uint32_t, 32m4)	\
  MACRO(uint16_t, int, 16m4,  4, uint32_t, 32m8)	\
  MACRO(uint32_t, int, 32m1, 32, uint64_t, 64m2)	\
  MACRO(uint32_t, int, 32m2, 16, uint64_t, 64m4)	\
  MACRO(uint32_t, int, 32m4,  8, uint64_t, 64m8)

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

#define RVV_INT_REDUC_TEST(MACRO)	\
  MACRO( int8_t, int,  8m1,  8m1, 8)	\
  MACRO( int8_t, int,  8m2,  8m1, 4)	\
  MACRO( int8_t, int,  8m4,  8m1, 2)	\
  MACRO( int8_t, int,  8m8,  8m1, 1)	\
  MACRO(int16_t, int, 16m1, 16m1, 16)	\
  MACRO(int16_t, int, 16m2, 16m1,  8)	\
  MACRO(int16_t, int, 16m4, 16m1,  4)	\
  MACRO(int16_t, int, 16m8, 16m1,  2)	\
  MACRO(int32_t, int, 32m1, 32m1, 32)	\
  MACRO(int32_t, int, 32m2, 32m1, 16)	\
  MACRO(int32_t, int, 32m4, 32m1,  8)	\
  MACRO(int32_t, int, 32m8, 32m1,  4)	\
  MACRO(int64_t, int, 64m1, 64m1, 64)	\
  MACRO(int64_t, int, 64m2, 64m1, 32)	\
  MACRO(int64_t, int, 64m4, 64m1, 16)	\
  MACRO(int64_t, int, 64m8, 64m1,  8)

#define RVV_UINT_REDUC_TEST(MACRO)	\
  MACRO( uint8_t, uint,  8m1,  8m1,  8)	\
  MACRO( uint8_t, uint,  8m2,  8m1,  4)	\
  MACRO( uint8_t, uint,  8m4,  8m1,  2)	\
  MACRO( uint8_t, uint,  8m8,  8m1,  1)	\
  MACRO(uint16_t, uint, 16m1, 16m1, 16)	\
  MACRO(uint16_t, uint, 16m2, 16m1,  8)	\
  MACRO(uint16_t, uint, 16m4, 16m1,  4)	\
  MACRO(uint16_t, uint, 16m8, 16m1,  2)	\
  MACRO(uint32_t, uint, 32m1, 32m1, 32)	\
  MACRO(uint32_t, uint, 32m2, 32m1, 16)	\
  MACRO(uint32_t, uint, 32m4, 32m1,  8)	\
  MACRO(uint32_t, uint, 32m8, 32m1,  4)	\
  MACRO(uint64_t, uint, 64m1, 64m1, 64)	\
  MACRO(uint64_t, uint, 64m2, 64m1, 32)	\
  MACRO(uint64_t, uint, 64m4, 64m1, 16)	\
  MACRO(uint64_t, uint, 64m8, 64m1,  8)

#define RVV_WINT_REDUC_TEST(MACRO)		\
  MACRO( int8_t, int,  8m1,  8, int16_t, 16m1)	\
  MACRO( int8_t, int,  8m2,  4, int16_t, 16m1)	\
  MACRO( int8_t, int,  8m4,  2, int16_t, 16m1)	\
  MACRO(int16_t, int, 16m1, 16, int32_t, 32m1)	\
  MACRO(int16_t, int, 16m2,  8, int32_t, 32m1)	\
  MACRO(int16_t, int, 16m4,  4, int32_t, 32m1)	\
  MACRO(int32_t, int, 32m1, 32, int64_t, 64m1)	\
  MACRO(int32_t, int, 32m2, 16, int64_t, 64m1)	\
  MACRO(int32_t, int, 32m4,  8, int64_t, 64m1)

#define RVV_WUINT_REDUC_TEST(MACRO)			\
  MACRO( uint8_t, uint,  8m1,  8, uint16_t, 16m1)	\
  MACRO( uint8_t, uint,  8m2,  4, uint16_t, 16m1)	\
  MACRO( uint8_t, uint,  8m4,  2, uint16_t, 16m1)	\
  MACRO(uint16_t, uint, 16m1, 16, uint32_t, 32m1)	\
  MACRO(uint16_t, uint, 16m2,  8, uint32_t, 32m1)	\
  MACRO(uint16_t, uint, 16m4,  4, uint32_t, 32m1)	\
  MACRO(uint32_t, uint, 32m1, 32, uint64_t, 64m1)	\
  MACRO(uint32_t, uint, 32m2, 16, uint64_t, 64m1)	\
  MACRO(uint32_t, uint, 32m4,  8, uint64_t, 64m1)

#define RVV_FLOAT_REDUC_TEST(MACRO)		\
  MACRO(float16_t, float, 16m1, 16m1, 16)	\
  MACRO(float16_t, float, 16m2, 16m1,  8)	\
  MACRO(float16_t, float, 16m4, 16m1,  4)	\
  MACRO(float16_t, float, 16m8, 16m1,  2)	\
  MACRO(    float, float, 32m1, 32m1, 32)	\
  MACRO(    float, float, 32m2, 32m1, 16)	\
  MACRO(    float, float, 32m4, 32m1,  8)	\
  MACRO(    float, float, 32m8, 32m1,  4)	\
  MACRO(   double, float, 64m1, 64m1, 64)	\
  MACRO(   double, float, 64m2, 64m1, 32)	\
  MACRO(   double, float, 64m4, 64m1, 16)	\
  MACRO(   double, float, 64m8, 64m1,  8)

#define RVV_WFLOAT_REDUC_TEST(MACRO)			\
  MACRO(float16_t, float, 16m1,  16,  float, 32m1)	\
  MACRO(float16_t, float, 16m2,   8,  float, 32m1)	\
  MACRO(float16_t, float, 16m4,   4,  float, 32m1)	\
  MACRO(    float, float, 32m1,  32, double, 64m1)	\
  MACRO(    float, float, 32m2,  16, double, 64m1)	\
  MACRO(    float, float, 32m4,   8, double, 64m1)

