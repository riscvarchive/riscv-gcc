/* MACRO take 4 argument, scalar type, vector class, vector type
   suffix and MLEN.
   MACRO(STYPE, VCLASS, EM, MLEN)  */

#include <stdint.h>

/* Uitl type for easier expand floating point functions.  */
#define _RVV_F16_TYPE float16_t
#define _RVV_F32_TYPE float
#define _RVV_F64_TYPE double

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

#define RVV_SEW_INT_TEST(MACRO)	\
  MACRO( int8_t, int,  8m1,  8, 8)	\
  MACRO( int8_t, int,  8m2,  4, 8)	\
  MACRO( int8_t, int,  8m4,  2, 8)	\
  MACRO( int8_t, int,  8m8,  1, 8)	\
  MACRO(int16_t, int, 16m1, 16, 16)	\
  MACRO(int16_t, int, 16m2,  8, 16)	\
  MACRO(int16_t, int, 16m4,  4, 16)	\
  MACRO(int16_t, int, 16m8,  2, 16)	\
  MACRO(int32_t, int, 32m1, 32, 32)	\
  MACRO(int32_t, int, 32m2, 16, 32)	\
  MACRO(int32_t, int, 32m4,  8, 32)	\
  MACRO(int32_t, int, 32m8,  4, 32)	\
  MACRO(int64_t, int, 64m1, 64, 64)	\
  MACRO(int64_t, int, 64m2, 32, 64)	\
  MACRO(int64_t, int, 64m4, 16, 64)	\
  MACRO(int64_t, int, 64m8,  8, 64)

#define RVV_INT_TEST_ARG(MACRO, ...)		\
  MACRO( int8_t, int,  8m1,  8, __VA_ARGS__)	\
  MACRO( int8_t, int,  8m2,  4, __VA_ARGS__)	\
  MACRO( int8_t, int,  8m4,  2, __VA_ARGS__)	\
  MACRO( int8_t, int,  8m8,  1, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m1, 16, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m2,  8, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m4,  4, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m8,  2, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m1, 32, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m2, 16, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m4,  8, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m8,  4, __VA_ARGS__)	\
  MACRO(int64_t, int, 64m1, 64, __VA_ARGS__)	\
  MACRO(int64_t, int, 64m2, 32, __VA_ARGS__)	\
  MACRO(int64_t, int, 64m4, 16, __VA_ARGS__)	\
  MACRO(int64_t, int, 64m8,  8, __VA_ARGS__)

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

#define RVV_SEW_UINT_TEST(MACRO)	\
  MACRO( uint8_t, uint,  8m1,  8, 8)	\
  MACRO( uint8_t, uint,  8m2,  4, 8)	\
  MACRO( uint8_t, uint,  8m4,  2, 8)	\
  MACRO( uint8_t, uint,  8m8,  1, 8)	\
  MACRO(uint16_t, uint, 16m1, 16, 16)	\
  MACRO(uint16_t, uint, 16m2,  8, 16)	\
  MACRO(uint16_t, uint, 16m4,  4, 16)	\
  MACRO(uint16_t, uint, 16m8,  2, 16)	\
  MACRO(uint32_t, uint, 32m1, 32, 32)	\
  MACRO(uint32_t, uint, 32m2, 16, 32)	\
  MACRO(uint32_t, uint, 32m4,  8, 32)	\
  MACRO(uint32_t, uint, 32m8,  4, 32)	\
  MACRO(uint64_t, uint, 64m1, 64, 64)	\
  MACRO(uint64_t, uint, 64m2, 32, 64)	\
  MACRO(uint64_t, uint, 64m4, 16, 64)	\
  MACRO(uint64_t, uint, 64m8,  8, 64)

#define RVV_UINT_TEST_ARG(MACRO, ...)		\
  MACRO( uint8_t, uint,  8m1,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint,  8m2,  4, __VA_ARGS__)	\
  MACRO( uint8_t, uint,  8m4,  2, __VA_ARGS__)	\
  MACRO( uint8_t, uint,  8m8,  1, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m1, 16, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m2,  8, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m4,  4, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m8,  2, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m1, 32, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m2, 16, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m4,  8, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m8,  4, __VA_ARGS__)	\
  MACRO(uint64_t, uint, 64m1, 64, __VA_ARGS__)	\
  MACRO(uint64_t, uint, 64m2, 32, __VA_ARGS__)	\
  MACRO(uint64_t, uint, 64m4, 16, __VA_ARGS__)	\
  MACRO(uint64_t, uint, 64m8,  8, __VA_ARGS__)

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

#define RVV_WINT_TEST_ARG(MACRO, ...)				\
  MACRO( int8_t, int,  8m1,  8, int16_t, 16m2, __VA_ARGS__)	\
  MACRO( int8_t, int,  8m2,  4, int16_t, 16m4, __VA_ARGS__)	\
  MACRO( int8_t, int,  8m4,  2, int16_t, 16m8, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m1, 16, int32_t, 32m2, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m2,  8, int32_t, 32m4, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m4,  4, int32_t, 32m8, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m1, 32, int64_t, 64m2, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m2, 16, int64_t, 64m4, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m4,  8, int64_t, 64m8, __VA_ARGS__)

/* The unsigned is added in the macro that we call.  */
#define RVV_WUINT_TEST(MACRO)				\
  MACRO( uint8_t, uint,  8m1,  8, uint16_t, 16m2)	\
  MACRO( uint8_t, uint,  8m2,  4, uint16_t, 16m4)	\
  MACRO( uint8_t, uint,  8m4,  2, uint16_t, 16m8)	\
  MACRO(uint16_t, uint, 16m1, 16, uint32_t, 32m2)	\
  MACRO(uint16_t, uint, 16m2,  8, uint32_t, 32m4)	\
  MACRO(uint16_t, uint, 16m4,  4, uint32_t, 32m8)	\
  MACRO(uint32_t, uint, 32m1, 32, uint64_t, 64m2)	\
  MACRO(uint32_t, uint, 32m2, 16, uint64_t, 64m4)	\
  MACRO(uint32_t, uint, 32m4,  8, uint64_t, 64m8)

/* The unsigned is added in the macro that we call.  */
#define RVV_WUINT_TEST_ARG(MACRO, ...)				\
  MACRO( uint8_t, uint,  8m1,  8, uint16_t, 16m2, __VA_ARGS__)	\
  MACRO( uint8_t, uint,  8m2,  4, uint16_t, 16m4, __VA_ARGS__)	\
  MACRO( uint8_t, uint,  8m4,  2, uint16_t, 16m8, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m1, 16, uint32_t, 32m2, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m2,  8, uint32_t, 32m4, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m4,  4, uint32_t, 32m8, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m1, 32, uint64_t, 64m2, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m2, 16, uint64_t, 64m4, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m4,  8, uint64_t, 64m8, __VA_ARGS__)

#define RVV_QINT_TEST_ARG(MACRO, ...)				\
  MACRO( int8_t, int,  8m1,  8, int32_t, 32m4, __VA_ARGS__)	\
  MACRO( int8_t, int,  8m2,  4, int32_t, 32m8, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m1, 16, int64_t, 64m4, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m2,  8, int64_t, 64m8, __VA_ARGS__)	\

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

#define RVV_SEW_FLOAT_TEST(MACRO)     	\
  MACRO(float16_t, float, 16m1, 16, 16)	\
  MACRO(float16_t, float, 16m2,  8, 16)	\
  MACRO(float16_t, float, 16m4,  4, 16)	\
  MACRO(float16_t, float, 16m8,  2, 16)	\
  MACRO(    float, float, 32m1, 32, 32)	\
  MACRO(    float, float, 32m2, 16, 32)	\
  MACRO(    float, float, 32m4,  8, 32)	\
  MACRO(    float, float, 32m8,  4, 32)	\
  MACRO(   double, float, 64m1, 64, 64)	\
  MACRO(   double, float, 64m2, 32, 64)	\
  MACRO(   double, float, 64m4, 16, 64)	\
  MACRO(   double, float, 64m8,  8, 64)

#define RVV_FLOAT_TEST_ARG(MACRO, ...)			\
  MACRO(float16_t, float, 16m1, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m2,  8, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m4,  4, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m8,  2, __VA_ARGS__)	\
  MACRO(    float, float, 32m1, 32, __VA_ARGS__)	\
  MACRO(    float, float, 32m2, 16, __VA_ARGS__)	\
  MACRO(    float, float, 32m4,  8, __VA_ARGS__)	\
  MACRO(    float, float, 32m8,  4, __VA_ARGS__)	\
  MACRO(   double, float, 64m1, 64, __VA_ARGS__)	\
  MACRO(   double, float, 64m2, 32, __VA_ARGS__)	\
  MACRO(   double, float, 64m4, 16, __VA_ARGS__)	\
  MACRO(   double, float, 64m8,  8, __VA_ARGS__)

#define RVV_FLOAT_INT_TEST(MACRO)     	\
  MACRO(float16_t, float, 16m1, 16, int16_t, int)	\
  MACRO(float16_t, float, 16m2,  8, int16_t, int)	\
  MACRO(float16_t, float, 16m4,  4, int16_t, int)	\
  MACRO(float16_t, float, 16m8,  2, int16_t, int)	\
  MACRO(    float, float, 32m1, 32, int32_t, int)	\
  MACRO(    float, float, 32m2, 16, int32_t, int)	\
  MACRO(    float, float, 32m4,  8, int32_t, int)	\
  MACRO(    float, float, 32m8,  4, int32_t, int)	\
  MACRO(   double, float, 64m1, 64, int64_t, int)	\
  MACRO(   double, float, 64m2, 32, int64_t, int)	\
  MACRO(   double, float, 64m4, 16, int64_t, int)	\
  MACRO(   double, float, 64m8,  8, int64_t, int)

#define RVV_FLOAT_INT_TEST_ARG(MACRO, ...)			\
  MACRO(float16_t, float, 16m1, 16, int16_t, int, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m2,  8, int16_t, int, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m4,  4, int16_t, int, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m8,  2, int16_t, int, __VA_ARGS__)	\
  MACRO(    float, float, 32m1, 32, int32_t, int, __VA_ARGS__)	\
  MACRO(    float, float, 32m2, 16, int32_t, int, __VA_ARGS__)	\
  MACRO(    float, float, 32m4,  8, int32_t, int, __VA_ARGS__)	\
  MACRO(    float, float, 32m8,  4, int32_t, int, __VA_ARGS__)	\
  MACRO(   double, float, 64m1, 64, int64_t, int, __VA_ARGS__)	\
  MACRO(   double, float, 64m2, 32, int64_t, int, __VA_ARGS__)	\
  MACRO(   double, float, 64m4, 16, int64_t, int, __VA_ARGS__)	\
  MACRO(   double, float, 64m8,  8, int64_t, int, __VA_ARGS__)

#define RVV_FLOAT_CVT_INT_TEST(MACRO)     	\
  MACRO(float16_t, float, 16m1, 16, int16_t, int, 16)	\
  MACRO(float16_t, float, 16m2,  8, int16_t, int, 16)	\
  MACRO(float16_t, float, 16m4,  4, int16_t, int, 16)	\
  MACRO(float16_t, float, 16m8,  2, int16_t, int, 16)	\
  MACRO(    float, float, 32m1, 32, int32_t, int, 32)	\
  MACRO(    float, float, 32m2, 16, int32_t, int, 32)	\
  MACRO(    float, float, 32m4,  8, int32_t, int, 32)	\
  MACRO(    float, float, 32m8,  4, int32_t, int, 32)	\
  MACRO(   double, float, 64m1, 64, int64_t, int, 64)	\
  MACRO(   double, float, 64m2, 32, int64_t, int, 64)	\
  MACRO(   double, float, 64m4, 16, int64_t, int, 64)	\
  MACRO(   double, float, 64m8,  8, int64_t, int, 64)

#define RVV_FLOAT_WNCVT_INT_TEST(MACRO)	\
  MACRO(16m1, 32m2, 16, 16, 32)		\
  MACRO(16m2, 32m4,  8, 16, 32)		\
  MACRO(16m4, 32m8,  4, 16, 32)		\
  MACRO(32m1, 64m2, 32, 32, 64)		\
  MACRO(32m2, 64m4, 16, 32, 64)		\
  MACRO(32m4, 64m8,  8, 32, 64)

#define RVV_WFLOAT_TEST(MACRO)				\
  MACRO(float16_t, float, 16m1,  16,  float, 32m2)	\
  MACRO(float16_t, float, 16m2,   8,  float, 32m4)	\
  MACRO(float16_t, float, 16m4,   4,  float, 32m8)	\
  MACRO(    float, float, 32m1,  32, double, 64m2)	\
  MACRO(    float, float, 32m2,  16, double, 64m4)	\
  MACRO(    float, float, 32m4,   8, double, 64m8)

#define RVV_WFLOAT_TEST_ARG(MACRO, ...)				\
  MACRO(float16_t, float, 16m1,  16,  float, 32m2, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m2,   8,  float, 32m4, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m4,   4,  float, 32m8, __VA_ARGS__)	\
  MACRO(    float, float, 32m1,  32, double, 64m2, __VA_ARGS__)	\
  MACRO(    float, float, 32m2,  16, double, 64m4, __VA_ARGS__)	\
  MACRO(    float, float, 32m4,   8, double, 64m8, __VA_ARGS__)

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

#define RVV_INT_REDUC_TEST_ARG(MACRO, ...)		\
  MACRO( int8_t, int,  8m1,  8m1,  8, __VA_ARGS__)	\
  MACRO( int8_t, int,  8m2,  8m1,  4, __VA_ARGS__)	\
  MACRO( int8_t, int,  8m4,  8m1,  2, __VA_ARGS__)	\
  MACRO( int8_t, int,  8m8,  8m1,  1, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m1, 16m1, 16, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m2, 16m1,  8, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m4, 16m1,  4, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m8, 16m1,  2, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m1, 32m1, 32, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m2, 32m1, 16, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m4, 32m1,  8, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m8, 32m1,  4, __VA_ARGS__)	\
  MACRO(int64_t, int, 64m1, 64m1, 64, __VA_ARGS__)	\
  MACRO(int64_t, int, 64m2, 64m1, 32, __VA_ARGS__)	\
  MACRO(int64_t, int, 64m4, 64m1, 16, __VA_ARGS__)	\
  MACRO(int64_t, int, 64m8, 64m1,  8, __VA_ARGS__)

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

#define RVV_UINT_REDUC_TEST_ARG(MACRO, ...)		\
  MACRO( uint8_t, uint,  8m1,  8m1,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint,  8m2,  8m1,  4, __VA_ARGS__)	\
  MACRO( uint8_t, uint,  8m4,  8m1,  2, __VA_ARGS__)	\
  MACRO( uint8_t, uint,  8m8,  8m1,  1, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m1, 16m1, 16, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m2, 16m1,  8, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m4, 16m1,  4, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m8, 16m1,  2, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m1, 32m1, 32, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m2, 32m1, 16, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m4, 32m1,  8, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m8, 32m1,  4, __VA_ARGS__)	\
  MACRO(uint64_t, uint, 64m1, 64m1, 64, __VA_ARGS__)	\
  MACRO(uint64_t, uint, 64m2, 64m1, 32, __VA_ARGS__)	\
  MACRO(uint64_t, uint, 64m4, 64m1, 16, __VA_ARGS__)	\
  MACRO(uint64_t, uint, 64m8, 64m1,  8, __VA_ARGS__)

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

#define RVV_WINT_REDUC_TEST_ARG(MACRO, ...)			\
  MACRO( int8_t, int,  8m1,  8, int16_t, 16m1, __VA_ARGS__)	\
  MACRO( int8_t, int,  8m2,  4, int16_t, 16m1, __VA_ARGS__)	\
  MACRO( int8_t, int,  8m4,  2, int16_t, 16m1, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m1, 16, int32_t, 32m1, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m2,  8, int32_t, 32m1, __VA_ARGS__)	\
  MACRO(int16_t, int, 16m4,  4, int32_t, 32m1, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m1, 32, int64_t, 64m1, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m2, 16, int64_t, 64m1, __VA_ARGS__)	\
  MACRO(int32_t, int, 32m4,  8, int64_t, 64m1, __VA_ARGS__)

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

#define RVV_WUINT_REDUC_TEST_ARG(MACRO, ...)			\
  MACRO( uint8_t, uint,  8m1,  8, uint16_t, 16m1, __VA_ARGS__)	\
  MACRO( uint8_t, uint,  8m2,  4, uint16_t, 16m1, __VA_ARGS__)	\
  MACRO( uint8_t, uint,  8m4,  2, uint16_t, 16m1, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m1, 16, uint32_t, 32m1, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m2,  8, uint32_t, 32m1, __VA_ARGS__)	\
  MACRO(uint16_t, uint, 16m4,  4, uint32_t, 32m1, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m1, 32, uint64_t, 64m1, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m2, 16, uint64_t, 64m1, __VA_ARGS__)	\
  MACRO(uint32_t, uint, 32m4,  8, uint64_t, 64m1, __VA_ARGS__)

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


#define RVV_FLOAT_REDUC_TEST_ARG(MACRO, ...)		\
  MACRO(float16_t, float, 16m1, 16m1, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m2, 16m1,  8, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m4, 16m1,  4, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m8, 16m1,  2, __VA_ARGS__)	\
  MACRO(    float, float, 32m1, 32m1, 32, __VA_ARGS__)	\
  MACRO(    float, float, 32m2, 32m1, 16, __VA_ARGS__)	\
  MACRO(    float, float, 32m4, 32m1,  8, __VA_ARGS__)	\
  MACRO(    float, float, 32m8, 32m1,  4, __VA_ARGS__)	\
  MACRO(   double, float, 64m1, 64m1, 64, __VA_ARGS__)	\
  MACRO(   double, float, 64m2, 64m1, 32, __VA_ARGS__)	\
  MACRO(   double, float, 64m4, 64m1, 16, __VA_ARGS__)	\
  MACRO(   double, float, 64m8, 64m1,  8, __VA_ARGS__)

#define RVV_WFLOAT_REDUC_TEST(MACRO)			\
  MACRO(float16_t, float, 16m1,  16,  float, 32m1)	\
  MACRO(float16_t, float, 16m2,   8,  float, 32m1)	\
  MACRO(float16_t, float, 16m4,   4,  float, 32m1)	\
  MACRO(    float, float, 32m1,  32, double, 64m1)	\
  MACRO(    float, float, 32m2,  16, double, 64m1)	\
  MACRO(    float, float, 32m4,   8, double, 64m1)

#define RVV_WFLOAT_REDUC_TEST_ARG(MACRO, ...)			\
  MACRO(float16_t, float, 16m1,  16,  float, 32m1, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m2,   8,  float, 32m1, __VA_ARGS__)	\
  MACRO(float16_t, float, 16m4,   4,  float, 32m1, __VA_ARGS__)	\
  MACRO(    float, float, 32m1,  32, double, 64m1, __VA_ARGS__)	\
  MACRO(    float, float, 32m2,  16, double, 64m1, __VA_ARGS__)	\
  MACRO(    float, float, 32m4,   8, double, 64m1, __VA_ARGS__)

#define RVV_INT_LOAD_TEST(MACRO)	\
  MACRO (16m1, 16, int16_t,  int8_t, b)	\
  MACRO (16m2,  8, int16_t,  int8_t, b)	\
  MACRO (16m4,  4, int16_t,  int8_t, b)	\
  MACRO (16m8,  2, int16_t,  int8_t, b)	\
  MACRO (32m1, 32, int32_t,  int8_t, b)	\
  MACRO (32m2, 16, int32_t,  int8_t, b)	\
  MACRO (32m4,  8, int32_t,  int8_t, b)	\
  MACRO (32m8,  4, int32_t,  int8_t, b)	\
  MACRO (32m1, 32, int32_t, int16_t, h)	\
  MACRO (32m2, 16, int32_t, int16_t, h)	\
  MACRO (32m4,  8, int32_t, int16_t, h)	\
  MACRO (32m8,  4, int32_t, int16_t, h)	\
  MACRO (64m1, 64, int64_t,  int8_t, b)	\
  MACRO (64m2, 32, int64_t,  int8_t, b)	\
  MACRO (64m4, 16, int64_t,  int8_t, b)	\
  MACRO (64m8,  8, int64_t,  int8_t, b)	\
  MACRO (64m1, 64, int64_t, int16_t, h)	\
  MACRO (64m2, 32, int64_t, int16_t, h)	\
  MACRO (64m4, 16, int64_t, int16_t, h)	\
  MACRO (64m8,  8, int64_t, int16_t, h)	\
  MACRO (64m1, 64, int64_t, int32_t, w)	\
  MACRO (64m2, 32, int64_t, int32_t, w)	\
  MACRO (64m4, 16, int64_t, int32_t, w)	\
  MACRO (64m8,  8, int64_t, int32_t, w)
 
#define RVV_UNARY_BUILTIN_VEC_TEST(STYPE, VCLASS,	EM, MLEN, OP)	\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z)\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;				\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_##OP##_vv_##VCLASS##EM (vx);			\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_UNARY_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASS,	\
					  EM, MLEN, OP)		\
  void rvv##OP##VCLASS##EM##_v_mask_builtin_test(		\
	 size_t n, STYPE *x, STYPE *y, STYPE z)			\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;				\
    rvv_bool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_mset_bool##MLEN ();				\
    vy = rvv_##OP##_vv_##VCLASS##EM##_mask (mask, vy, vx);	\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_BIN_BUILTIN_VEC_TEST(STYPE, VCLASS,	EM, MLEN, OP)	\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z)\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    vy = rvv_##OP##_vv_##VCLASS##EM (vx, vy);			\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_BIN_OPERATOR_VEC_TEST(STYPE, VCLASS, EM, MLEN,	\
				  OP, OPERATOR)			\
  void rvv##OP##VCLASS##EM##_v_nomask_operator_test(		\
	 size_t n, STYPE *x, STYPE *y, STYPE z)			\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    vy = vx OPERATOR vy;					\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_BIN_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASS,		\
					EM, MLEN, OP)		\
  void rvv##OP##VCLASS##EM##_v_mask_builtin_test(		\
	 size_t n, STYPE *x, STYPE *y, STYPE z)			\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;					\
    rvv_bool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_mset_bool##MLEN ();				\
    vy = rvv_##OP##_vv_##VCLASS##EM##_mask (mask, vy, vx, vy);	\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_BIN_BUILTIN_SCALAR_TEST(STYPE, VCLASS, EM, MLEN, OP)\
  void rvv##OP##VCLASS##EM##_s_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z)\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    vy = rvv_##OP##_vs_##VCLASS##EM (vx, z);			\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_BIN_OPERATOR_SCALAR_TEST(STYPE, VCLASS, EM, MLEN,	\
				     OP, OPERATOR)		\
  void rvv##OP##VCLASS##EM##_s_nomask_operator_test(size_t n, STYPE *x,\
						STYPE *y, STYPE z)\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    vy = vx OPERATOR z;						\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_BIN_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASS,	\
					   EM, MLEN, OP)	\
  void rvv##OP##VCLASS##EM##_s_mask_builtin_test(size_t n, STYPE *x,\
					     STYPE *y, STYPE z)	\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;					\
    rvv_bool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_mset_bool##MLEN ();				\
    vy = rvv_##OP##_vs_##VCLASS##EM##_mask (mask, vy, vx, z);	\
    rvv_se_##VCLASS##EM(y, vy);					\
  }


#define RVV_BIN_BUILTIN_IMM_TEST(STYPE, VCLASS, EM, MLEN, OP)	\
  void rvv##OP##VCLASS##EM##_i_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z)\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    vy = rvv_##OP##_vs_##VCLASS##EM (vx, 11);			\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_BIN_OPERATOR_IMM_TEST(STYPE, VCLASS, EM, MLEN,	\
				  OP, OPERATOR)			\
  void rvv##OP##VCLASS##EM##_i_nomask_operator_test(size_t n, STYPE *x,\
					        STYPE *y, STYPE z)\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    vy = vx OPERATOR 11;					\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_BIN_BUILTIN_IMM_MASKED_TEST(STYPE, VCLASS,		\
					EM, MLEN, OP)		\
  void rvv##OP##VCLASS##EM##_i_mask_builtin_test(size_t n, STYPE *x,\
					     STYPE *y, STYPE z)	\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;					\
    rvv_bool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_mset_bool##MLEN ();				\
    vy = rvv_##OP##_vs_##VCLASS##EM##_mask (mask, vy, vx, 11);	\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_BIN_BUILTIN_VEC_SCALAR_TEST(STYPE, VCLASS, EM,	\
					    MLEN, OP)		\
  RVV_BIN_BUILTIN_VEC_TEST(STYPE, VCLASS, EM, MLEN, OP)		\
  RVV_BIN_BUILTIN_SCALAR_TEST(STYPE, VCLASS, EM, MLEN, OP)

#define RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST(STYPE, VCLASS, EM,	\
					    MLEN, OP)		\
  RVV_BIN_BUILTIN_VEC_SCALAR_TEST(STYPE, VCLASS, EM, MLEN, OP)	\
  RVV_BIN_BUILTIN_IMM_TEST(STYPE, VCLASS, EM, MLEN, OP)

#define RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST(STYPE, VCLASS, EM,	\
					       MLEN, OP)		\
  RVV_BIN_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASS, EM, MLEN, OP)		\
  RVV_BIN_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASS, EM, MLEN, OP)

#define RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST(STYPE, VCLASS, EM,	\
						   MLEN, OP)		\
  RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST(STYPE, VCLASS, EM, MLEN, OP)	\
  RVV_BIN_BUILTIN_IMM_MASKED_TEST(STYPE, VCLASS, EM, MLEN, OP)

#define RVV_BIN_OPERATOR_VEC_SCALAR_TEST(STYPE, VCLASS, EM, MLEN,	\
					 OP, OPERATOR) 			\
  RVV_BIN_OPERATOR_VEC_TEST(STYPE, VCLASS, EM, MLEN, OP, OPERATOR)	\
  RVV_BIN_OPERATOR_SCALAR_TEST(STYPE, VCLASS, EM, MLEN, OP, OPERATOR)

#define RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST(STYPE, VCLASS, EM, MLEN,	\
					     OP, OPERATOR) 		\
  RVV_BIN_OPERATOR_VEC_SCALAR_TEST(STYPE, VCLASS, EM, MLEN, OP,		\
				   OPERATOR)				\
  RVV_BIN_OPERATOR_IMM_TEST(STYPE, VCLASS, EM, MLEN, OP, OPERATOR)

#define RVV_TER_BUILTIN_VEC_TEST(STYPE, VCLASS,	EM, MLEN, OP)		\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,	\
						   STYPE *y, STYPE *z)	\
  {									\
    rvv_##VCLASS##EM##_t vx, vy, vz;					\
    vx = rvv_le_##VCLASS##EM(x);					\
    vy = rvv_le_##VCLASS##EM(y);					\
    vz = rvv_le_##VCLASS##EM(z);					\
    vz = rvv_##OP##_vv_##VCLASS##EM (vx, vy, vz);			\
    rvv_se_##VCLASS##EM(z, vz);						\
  }

#define RVV_TER_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASS,			\
					EM, MLEN, OP)			\
  void rvv##OP##VCLASS##EM##_v_mask_builtin_test(			\
	 size_t n, STYPE *x, STYPE *y, STYPE z)				\
  {									\
    rvv_##VCLASS##EM##_t vx, vy;					\
    rvv_bool##MLEN##_t mask;						\
    vx = rvv_le_##VCLASS##EM(x);					\
    vy = rvv_le_##VCLASS##EM(y);					\
    mask = rvv_mset_bool##MLEN ();					\
    vy = rvv_##OP##_vv_##VCLASS##EM##_mask (mask, vy, vy, vx, vy);	\
    rvv_se_##VCLASS##EM(y, vy);						\
  }

#define RVV_TER_BUILTIN_SCALAR_TEST(STYPE, VCLASS, EM, MLEN, OP)\
  void rvv##OP##VCLASS##EM##_s_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z)\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;				\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    vy = rvv_##OP##_vs_##VCLASS##EM (vy, vx, z);		\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_TER_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASS,	\
					   EM, MLEN, OP)	\
  void rvv##OP##VCLASS##EM##_s_mask_builtin_test(size_t n, STYPE *x,\
					     STYPE *y, STYPE z)	\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;				\
    rvv_bool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_mset_bool##MLEN ();				\
    vy = rvv_##OP##_vs_##VCLASS##EM##_mask (mask, vy, vy, vx, z);\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_MAC_BUILTIN_SCALAR_TEST(STYPE, VCLASS, EM, MLEN, OP)\
  void rvv##OP##VCLASS##EM##_s_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z)\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;				\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    vy = rvv_##OP##_vs_##VCLASS##EM (vy, z, vx);		\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_MAC_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASS,	\
					   EM, MLEN, OP)	\
  void rvv##OP##VCLASS##EM##_s_mask_builtin_test(size_t n, STYPE *x,\
					     STYPE *y, STYPE z)	\
  {								\
    rvv_##VCLASS##EM##_t vx, vy;				\
    rvv_bool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_mset_bool##MLEN ();				\
    vy = rvv_##OP##_vs_##VCLASS##EM##_mask (mask, vy, vy, z, vx);\
    rvv_se_##VCLASS##EM(y, vy);					\
  }


#define RVV_TER_BUILTIN_VEC_SCALAR_MASKED_TEST(STYPE, VCLASS,		\
					       EM, MLEN, OP)		\
  RVV_TER_BUILTIN_VEC_TEST(STYPE, VCLASS, EM, MLEN, OP)			\
  RVV_TER_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASS, EM, MLEN, OP)		\
  RVV_TER_BUILTIN_SCALAR_TEST(STYPE, VCLASS, EM, MLEN, OP)		\
  RVV_TER_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASS, EM, MLEN, OP)

#define RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST(STYPE, VCLASS,		\
					       EM, MLEN, OP)		\
  RVV_TER_BUILTIN_VEC_TEST(STYPE, VCLASS, EM, MLEN, OP)			\
  RVV_TER_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASS, EM, MLEN, OP)		\
  RVV_MAC_BUILTIN_SCALAR_TEST(STYPE, VCLASS, EM, MLEN, OP)		\
  RVV_MAC_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASS, EM, MLEN, OP)

#define RVV_NINT_BIN_BUILTIN_VEC_TEST(STYPE, VCLASS, EM, MLEN,		\
				      WSTYPE, WEM, OP)			\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, WSTYPE *x,	\
					       STYPE *y, STYPE z)	\
  {									\
    rvv_##VCLASS##WEM##_t vx;						\
    rvv_##VCLASS##EM##_t vy;						\
    vx = rvv_le_##VCLASS##WEM(x);					\
    vy = rvv_le_##VCLASS##EM(y);					\
    vy = rvv_##OP##_wv_##VCLASS##WEM (vx, vy);				\
    rvv_se_##VCLASS##EM(y, vy);						\
  }

#define RVV_NINT_BIN_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASS, EM, MLEN,	\
					     WSTYPE, WEM, OP)		\
  void rvv##OP##VCLASS##EM##_v_mask_builtin_test(		\
	 size_t n, WSTYPE *x, STYPE *y, STYPE z)			\
  {								\
    rvv_##VCLASS##WEM##_t vx;					\
    rvv_##VCLASS##EM##_t vy;					\
    rvv_bool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##WEM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_mset_bool##MLEN ();				\
    vy = rvv_##OP##_wv_##VCLASS##WEM##_mask (mask, vy, vx, vy);	\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_NINT_BIN_BUILTIN_SCALAR_TEST(STYPE, VCLASS, EM, MLEN,\
				      WSTYPE, WEM, OP)			\
  void rvv##OP##VCLASS##EM##_s_nomask_builtin_test(size_t n, WSTYPE *x,\
					       STYPE *y, STYPE z)\
  {								\
    rvv_##VCLASS##WEM##_t vx;					\
    rvv_##VCLASS##EM##_t vy;					\
    vx = rvv_le_##VCLASS##WEM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    vy = rvv_##OP##_ws_##VCLASS##WEM (vx, z);			\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_NINT_BIN_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASS, EM, MLEN,\
				      WSTYPE, WEM, OP)			\
  void rvv##OP##VCLASS##EM##_s_mask_builtin_test(size_t n, WSTYPE *x,\
					     STYPE *y, STYPE z)	\
  {								\
    rvv_##VCLASS##WEM##_t vx;					\
    rvv_##VCLASS##EM##_t vy;					\
    rvv_bool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##WEM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_mset_bool##MLEN ();				\
    vy = rvv_##OP##_ws_##VCLASS##WEM##_mask (mask, vy, vx, z);	\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_NINT_BIN_BUILTIN_IMM_TEST(STYPE, VCLASS, EM, MLEN,\
				      WSTYPE, WEM, OP)			\
  void rvv##OP##VCLASS##EM##_i_nomask_builtin_test(size_t n, WSTYPE *x,\
					       STYPE *y, STYPE z)\
  {								\
    rvv_##VCLASS##WEM##_t vx;					\
    rvv_##VCLASS##EM##_t vy;					\
    vx = rvv_le_##VCLASS##WEM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    vy = rvv_##OP##_ws_##VCLASS##WEM (vx, 11);			\
    rvv_se_##VCLASS##EM(y, vy);					\
  }

#define RVV_NINT_BIN_BUILTIN_IMM_MASKED_TEST(STYPE, VCLASS, EM, MLEN,\
				      WSTYPE, WEM, OP)			\
  void rvv##OP##VCLASS##EM##_i_mask_builtin_test(size_t n, WSTYPE *x,\
					     STYPE *y, STYPE z)	\
  {								\
    rvv_##VCLASS##WEM##_t vx;					\
    rvv_##VCLASS##EM##_t vy;					\
    rvv_bool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##WEM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_mset_bool##MLEN ();				\
    vy = rvv_##OP##_ws_##VCLASS##WEM##_mask (mask, vy, vx, 11);	\
    rvv_se_##VCLASS##EM(y, vy);					\
  }



#define RVV_NINT_BIN_BUILTIN_VEC_SCALAR_IMM_TEST(STYPE, VCLASS, EM, MLEN,\
						       WSTYPE, WEM, OP)	\
  RVV_NINT_BIN_BUILTIN_VEC_TEST(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)\
  RVV_NINT_BIN_BUILTIN_IMM_TEST(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)\
  RVV_NINT_BIN_BUILTIN_SCALAR_TEST(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)

#define RVV_NINT_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST(STYPE, VCLASS, EM, MLEN,\
						       WSTYPE, WEM, OP)		\
  RVV_NINT_BIN_BUILTIN_IMM_MASKED_TEST(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)\
  RVV_NINT_BIN_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)\
  RVV_NINT_BIN_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)
