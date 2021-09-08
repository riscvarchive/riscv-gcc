/* MACRO take 4 argument, scalar type, vector class, vector type
   suffix and MLEN.
   MACRO(STYPE, VCLASST, VCLASS, EM, MLEN)  */

#include <stdint.h>

/* Uitl type for easier expand floating point functions.  */
#define _RVV_F16_TYPE float16_t
#define _RVV_F32_TYPE float
#define _RVV_F64_TYPE double

#define RVV_INT_INDEX_TEST(MACRO)			\
  MACRO ( int8_t, int, i,  8mf8,  64,  8,  8mf8,  8)	\
  MACRO ( int8_t, int, i,  8mf8,  64,  8, 16mf4, 16)	\
  MACRO ( int8_t, int, i,  8mf8,  64,  8, 32mf2, 32)	\
  MACRO ( int8_t, int, i,  8mf8,  64,  8,  64m1, 64)	\
  MACRO ( int8_t, int, i,  8mf4,  32,  8,  8mf4,  8)	\
  MACRO ( int8_t, int, i,  8mf4,  32,  8, 16mf2, 16)	\
  MACRO ( int8_t, int, i,  8mf4,  32,  8,  32m1, 32)	\
  MACRO ( int8_t, int, i,  8mf4,  32,  8,  64m2, 64)	\
  MACRO ( int8_t, int, i,  8mf2,  16,  8,  8mf2,  8)	\
  MACRO ( int8_t, int, i,  8mf2,  16,  8,  16m1, 16)	\
  MACRO ( int8_t, int, i,  8mf2,  16,  8,  32m2, 32)	\
  MACRO ( int8_t, int, i,  8mf2,  16,  8,  64m4, 64)	\
  MACRO ( int8_t, int, i,  8m1,  8,  8,  8m1,  8)	\
  MACRO ( int8_t, int, i,  8m1,  8,  8, 16m2, 16)	\
  MACRO ( int8_t, int, i,  8m1,  8,  8, 32m4, 32)	\
  MACRO ( int8_t, int, i,  8m1,  8,  8, 64m8, 64)	\
  MACRO ( int8_t, int, i,  8m2,  4,  8,  8m2,  8)	\
  MACRO ( int8_t, int, i,  8m2,  4,  8, 16m4, 16)	\
  MACRO ( int8_t, int, i,  8m2,  4,  8, 32m8, 32)	\
  MACRO ( int8_t, int, i,  8m4,  2,  8,  8m4,  8)	\
  MACRO ( int8_t, int, i,  8m4,  2,  8, 16m8, 16)	\
  MACRO ( int8_t, int, i,  8m8,  1,  8,  8m8,  8)	\
  MACRO (int16_t, int, i, 16mf4, 64, 16, 16mf4, 16)	\
  MACRO (int16_t, int, i, 16mf4, 64, 16, 32mf2, 32)	\
  MACRO (int16_t, int, i, 16mf4, 64, 16,  64m1, 64)	\
  MACRO (int16_t, int, i, 16mf2, 32, 16, 16mf2, 16)	\
  MACRO (int16_t, int, i, 16mf2, 32, 16,  32m1, 32)	\
  MACRO (int16_t, int, i, 16mf2, 32, 16,  64m2, 64)	\
  MACRO (int16_t, int, i, 16m1, 16, 16, 16m1, 16)	\
  MACRO (int16_t, int, i, 16m1, 16, 16, 32m2, 32)	\
  MACRO (int16_t, int, i, 16m1, 16, 16, 64m4, 64)	\
  MACRO (int16_t, int, i, 16m2,  8, 16,  8m1,  8)	\
  MACRO (int16_t, int, i, 16m2,  8, 16, 16m2, 16)	\
  MACRO (int16_t, int, i, 16m2,  8, 16, 32m4, 32)	\
  MACRO (int16_t, int, i, 16m2,  8, 16, 64m8, 64)	\
  MACRO (int16_t, int, i, 16m4,  4, 16,  8m2,  8)	\
  MACRO (int16_t, int, i, 16m4,  4, 16, 16m4, 16)	\
  MACRO (int16_t, int, i, 16m4,  4, 16, 32m8, 32)	\
  MACRO (int16_t, int, i, 16m8,  2, 16,  8m4,  8)	\
  MACRO (int16_t, int, i, 16m8,  2, 16, 16m8, 16)	\
  MACRO (int32_t, int, i, 32mf2, 64, 32, 32mf2, 32)	\
  MACRO (int32_t, int, i, 32mf2, 64, 32,  64m1, 64)	\
  MACRO (int32_t, int, i, 32m1, 32, 32, 32m1, 32)	\
  MACRO (int32_t, int, i, 32m1, 32, 32, 64m2, 64)	\
  MACRO (int32_t, int, i, 32m2, 16, 32, 16m1, 16)	\
  MACRO (int32_t, int, i, 32m2, 16, 32, 32m2, 32)	\
  MACRO (int32_t, int, i, 32m2, 16, 32, 64m4, 64)	\
  MACRO (int32_t, int, i, 32m4,  8, 32,  8m1,  8)	\
  MACRO (int32_t, int, i, 32m4,  8, 32, 16m2, 16)	\
  MACRO (int32_t, int, i, 32m4,  8, 32, 32m4, 32)	\
  MACRO (int32_t, int, i, 32m4,  8, 32, 64m8, 64)	\
  MACRO (int32_t, int, i, 32m8,  4, 32,  8m2,  8)	\
  MACRO (int32_t, int, i, 32m8,  4, 32, 16m4, 16)	\
  MACRO (int32_t, int, i, 32m8,  4, 32, 32m8, 32)	\
  MACRO (int64_t, int, i, 64m1, 64, 64, 64m1, 64)	\
  MACRO (int64_t, int, i, 64m2, 32, 64, 32m1, 32)	\
  MACRO (int64_t, int, i, 64m2, 32, 64, 64m2, 64)	\
  MACRO (int64_t, int, i, 64m4, 16, 64, 16m1, 16)	\
  MACRO (int64_t, int, i, 64m4, 16, 64, 32m2, 32)	\
  MACRO (int64_t, int, i, 64m4, 16, 64, 64m4, 64)	\
  MACRO (int64_t, int, i, 64m8,  8, 64,  8m1,  8)	\
  MACRO (int64_t, int, i, 64m8,  8, 64, 16m2, 16)	\
  MACRO (int64_t, int, i, 64m8,  8, 64, 32m4, 32)	\
  MACRO (int64_t, int, i, 64m8,  8, 64, 64m8, 64)

#define RVV_UINT_INDEX_TEST(MACRO)			\
  MACRO ( uint8_t, uint, u,  8mf8,  64,  8,  8mf8,  8)	\
  MACRO ( uint8_t, uint, u,  8mf8,  64,  8, 16mf4, 16)	\
  MACRO ( uint8_t, uint, u,  8mf8,  64,  8, 32mf2, 32)	\
  MACRO ( uint8_t, uint, u,  8mf8,  64,  8,  64m1, 64)	\
  MACRO ( uint8_t, uint, u,  8mf4,  32,  8,  8mf4,  8)	\
  MACRO ( uint8_t, uint, u,  8mf4,  32,  8, 16mf2, 16)	\
  MACRO ( uint8_t, uint, u,  8mf4,  32,  8,  32m1, 32)	\
  MACRO ( uint8_t, uint, u,  8mf4,  32,  8,  64m2, 64)	\
  MACRO ( uint8_t, uint, u,  8mf2,  16,  8,  8mf2,  8)	\
  MACRO ( uint8_t, uint, u,  8mf2,  16,  8,  16m1, 16)	\
  MACRO ( uint8_t, uint, u,  8mf2,  16,  8,  32m2, 32)	\
  MACRO ( uint8_t, uint, u,  8mf2,  16,  8,  64m4, 64)	\
  MACRO ( uint8_t, uint, u,  8m1,  8,  8,  8m1,  8)	\
  MACRO ( uint8_t, uint, u,  8m1,  8,  8, 16m2, 16)	\
  MACRO ( uint8_t, uint, u,  8m1,  8,  8, 32m4, 32)	\
  MACRO ( uint8_t, uint, u,  8m1,  8,  8, 64m8, 64)	\
  MACRO ( uint8_t, uint, u,  8m2,  4,  8,  8m2,  8)	\
  MACRO ( uint8_t, uint, u,  8m2,  4,  8, 16m4, 16)	\
  MACRO ( uint8_t, uint, u,  8m2,  4,  8, 32m8, 32)	\
  MACRO ( uint8_t, uint, u,  8m4,  2,  8,  8m4,  8)	\
  MACRO ( uint8_t, uint, u,  8m4,  2,  8, 16m8, 16)	\
  MACRO ( uint8_t, uint, u,  8m8,  1,  8,  8m8,  8)	\
  MACRO (uint16_t, uint, u, 16mf4, 64, 16, 16mf4, 16)	\
  MACRO (uint16_t, uint, u, 16mf4, 64, 16, 32mf2, 32)	\
  MACRO (uint16_t, uint, u, 16mf4, 64, 16,  64m1, 64)	\
  MACRO (uint16_t, uint, u, 16mf2, 32, 16, 16mf2, 16)	\
  MACRO (uint16_t, uint, u, 16mf2, 32, 16,  32m1, 32)	\
  MACRO (uint16_t, uint, u, 16mf2, 32, 16,  64m2, 64)	\
  MACRO (uint16_t, uint, u, 16m1, 16, 16, 16m1, 16)	\
  MACRO (uint16_t, uint, u, 16m1, 16, 16, 32m2, 32)	\
  MACRO (uint16_t, uint, u, 16m1, 16, 16, 64m4, 64)	\
  MACRO (uint16_t, uint, u, 16m2,  8, 16,  8m1,  8)	\
  MACRO (uint16_t, uint, u, 16m2,  8, 16, 16m2, 16)	\
  MACRO (uint16_t, uint, u, 16m2,  8, 16, 32m4, 32)	\
  MACRO (uint16_t, uint, u, 16m2,  8, 16, 64m8, 64)	\
  MACRO (uint16_t, uint, u, 16m4,  4, 16,  8m2,  8)	\
  MACRO (uint16_t, uint, u, 16m4,  4, 16, 16m4, 16)	\
  MACRO (uint16_t, uint, u, 16m4,  4, 16, 32m8, 32)	\
  MACRO (uint16_t, uint, u, 16m8,  2, 16,  8m4,  8)	\
  MACRO (uint16_t, uint, u, 16m8,  2, 16, 16m8, 16)	\
  MACRO (uint32_t, uint, u, 32mf2, 64, 32, 32mf2, 32)	\
  MACRO (uint32_t, uint, u, 32mf2, 64, 32,  64m1, 64)	\
  MACRO (uint32_t, uint, u, 32m1, 32, 32, 32m1, 32)	\
  MACRO (uint32_t, uint, u, 32m1, 32, 32, 64m2, 64)	\
  MACRO (uint32_t, uint, u, 32m2, 16, 32, 16m1, 16)	\
  MACRO (uint32_t, uint, u, 32m2, 16, 32, 32m2, 32)	\
  MACRO (uint32_t, uint, u, 32m2, 16, 32, 64m4, 64)	\
  MACRO (uint32_t, uint, u, 32m4,  8, 32,  8m1,  8)	\
  MACRO (uint32_t, uint, u, 32m4,  8, 32, 16m2, 16)	\
  MACRO (uint32_t, uint, u, 32m4,  8, 32, 32m4, 32)	\
  MACRO (uint32_t, uint, u, 32m4,  8, 32, 64m8, 64)	\
  MACRO (uint32_t, uint, u, 32m8,  4, 32,  8m2,  8)	\
  MACRO (uint32_t, uint, u, 32m8,  4, 32, 16m4, 16)	\
  MACRO (uint32_t, uint, u, 32m8,  4, 32, 32m8, 32)	\
  MACRO (uint64_t, uint, u, 64m1, 64, 64, 64m1, 64)	\
  MACRO (uint64_t, uint, u, 64m2, 32, 64, 32m1, 32)	\
  MACRO (uint64_t, uint, u, 64m2, 32, 64, 64m2, 64)	\
  MACRO (uint64_t, uint, u, 64m4, 16, 64, 16m1, 16)	\
  MACRO (uint64_t, uint, u, 64m4, 16, 64, 32m2, 32)	\
  MACRO (uint64_t, uint, u, 64m4, 16, 64, 64m4, 64)	\
  MACRO (uint64_t, uint, u, 64m8,  8, 64,  8m1,  8)	\
  MACRO (uint64_t, uint, u, 64m8,  8, 64, 16m2, 16)	\
  MACRO (uint64_t, uint, u, 64m8,  8, 64, 32m4, 32)	\
  MACRO (uint64_t, uint, u, 64m8,  8, 64, 64m8, 64)

#define RVV_FLOAT_INDEX_TEST(MACRO)			\
  MACRO (float16_t, float, f, 16mf4, 64, 16, 16mf4, 16)	\
  MACRO (float16_t, float, f, 16mf4, 64, 16, 32mf2, 32)	\
  MACRO (float16_t, float, f, 16mf4, 64, 16,  64m1, 64)	\
  MACRO (float16_t, float, f, 16mf2, 32, 16, 16mf2, 16)	\
  MACRO (float16_t, float, f, 16mf2, 32, 16,  32m1, 32)	\
  MACRO (float16_t, float, f, 16mf2, 32, 16,  64m2, 64)	\
  MACRO (float16_t, float, f, 16m1, 16, 16, 16m1, 16)	\
  MACRO (float16_t, float, f, 16m1, 16, 16, 32m2, 32)	\
  MACRO (float16_t, float, f, 16m1, 16, 16, 64m4, 64)	\
  MACRO (float16_t, float, f, 16m2,  8, 16, 16m2, 16)	\
  MACRO (float16_t, float, f, 16m2,  8, 16, 32m4, 32)	\
  MACRO (float16_t, float, f, 16m2,  8, 16, 64m8, 64)	\
  MACRO (float16_t, float, f, 16m4,  4, 16, 16m4, 16)	\
  MACRO (float16_t, float, f, 16m4,  4, 16, 32m8, 32)	\
  MACRO (float16_t, float, f, 16m8,  2, 16, 16m8, 16)	\
  MACRO (    float, float, f, 32mf2, 64, 32, 32mf2, 32)	\
  MACRO (    float, float, f, 32mf2, 64, 32,  64m1, 64)	\
  MACRO (    float, float, f, 32m1, 32, 32, 32m1, 32)	\
  MACRO (    float, float, f, 32m1, 32, 32, 64m2, 64)	\
  MACRO (    float, float, f, 32m2, 16, 32, 16m1, 16)	\
  MACRO (    float, float, f, 32m2, 16, 32, 32m2, 32)	\
  MACRO (    float, float, f, 32m2, 16, 32, 64m4, 64)	\
  MACRO (    float, float, f, 32m4,  8, 32, 16m2, 16)	\
  MACRO (    float, float, f, 32m4,  8, 32, 32m4, 32)	\
  MACRO (    float, float, f, 32m4,  8, 32, 64m8, 64)	\
  MACRO (    float, float, f, 32m8,  4, 32, 16m4, 16)	\
  MACRO (    float, float, f, 32m8,  4, 32, 32m8, 32)	\
  MACRO (   double, float, f, 64m1, 64, 64, 64m1, 64)	\
  MACRO (   double, float, f, 64m2, 32, 64, 32m1, 32)	\
  MACRO (   double, float, f, 64m2, 32, 64, 64m2, 64)	\
  MACRO (   double, float, f, 64m4, 16, 64, 16m1, 16)	\
  MACRO (   double, float, f, 64m4, 16, 64, 32m2, 32)	\
  MACRO (   double, float, f, 64m4, 16, 64, 64m4, 64)	\
  MACRO (   double, float, f, 64m8,  8, 64, 16m2, 16)	\
  MACRO (   double, float, f, 64m8,  8, 64, 32m4, 32)	\
  MACRO (   double, float, f, 64m8,  8, 64, 64m8, 64)

#define RVV_INT_INDEX_TEST_ARG(MACRO, ...)			\
  MACRO ( int8_t, int, i,  8mf8,  64,  8,  8mf8,  8, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8mf8,  64,  8, 16mf4, 16, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8mf8,  64,  8, 32mf2, 32, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8mf8,  64,  8,  64m1, 64, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8mf4,  32,  8,  8mf4,  8, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8mf4,  32,  8, 16mf2, 16, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8mf4,  32,  8,  32m1, 32, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8mf4,  32,  8,  64m2, 64, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8mf2,  16,  8,  8mf2,  8, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8mf2,  16,  8,  16m1, 16, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8mf2,  16,  8,  32m2, 32, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8mf2,  16,  8,  64m4, 64, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8m1,  8,  8,  8m1,  8, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8m1,  8,  8, 16m2, 16, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8m1,  8,  8, 32m4, 32, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8m1,  8,  8, 64m8, 64, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8m2,  4,  8,  8m2,  8, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8m2,  4,  8, 16m4, 16, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8m2,  4,  8, 32m8, 32, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8m4,  2,  8,  8m4,  8, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8m4,  2,  8, 16m8, 16, __VA_ARGS__)	\
  MACRO ( int8_t, int, i,  8m8,  1,  8,  8m8,  8, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16mf4, 64, 16, 16mf4, 16, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16mf4, 64, 16, 32mf2, 32, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16mf4, 64, 16,  64m1, 64, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16mf2, 32, 16, 16mf2, 16, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16mf2, 32, 16,  32m1, 32, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16mf2, 32, 16,  64m2, 64, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m1, 16, 16, 16m1, 16, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m1, 16, 16, 32m2, 32, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m1, 16, 16, 64m4, 64, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m2,  8, 16,  8m1,  8, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m2,  8, 16, 16m2, 16, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m2,  8, 16, 32m4, 32, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m2,  8, 16, 64m8, 64, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m4,  4, 16,  8m2,  8, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m4,  4, 16, 16m4, 16, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m4,  4, 16, 32m8, 32, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m8,  2, 16,  8m4,  8, __VA_ARGS__)	\
  MACRO (int16_t, int, i, 16m8,  2, 16, 16m8, 16, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32mf2, 64, 32, 32mf2, 32, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32mf2, 64, 32,  64m1, 64, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m1, 32, 32, 32m1, 32, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m1, 32, 32, 64m2, 64, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m2, 16, 32, 16m1, 16, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m2, 16, 32, 32m2, 32, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m2, 16, 32, 64m4, 64, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m4,  8, 32,  8m1,  8, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m4,  8, 32, 16m2, 16, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m4,  8, 32, 32m4, 32, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m4,  8, 32, 64m8, 64, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m8,  4, 32,  8m2,  8, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m8,  4, 32, 16m4, 16, __VA_ARGS__)	\
  MACRO (int32_t, int, i, 32m8,  4, 32, 32m8, 32, __VA_ARGS__)	\
  MACRO (int64_t, int, i, 64m1, 64, 64, 64m1, 64, __VA_ARGS__)	\
  MACRO (int64_t, int, i, 64m2, 32, 64, 32m1, 32, __VA_ARGS__)	\
  MACRO (int64_t, int, i, 64m2, 32, 64, 64m2, 64, __VA_ARGS__)	\
  MACRO (int64_t, int, i, 64m4, 16, 64, 16m1, 16, __VA_ARGS__)	\
  MACRO (int64_t, int, i, 64m4, 16, 64, 32m2, 32, __VA_ARGS__)	\
  MACRO (int64_t, int, i, 64m4, 16, 64, 64m4, 64, __VA_ARGS__)	\
  MACRO (int64_t, int, i, 64m8,  8, 64,  8m1,  8, __VA_ARGS__)	\
  MACRO (int64_t, int, i, 64m8,  8, 64, 16m2, 16, __VA_ARGS__)	\
  MACRO (int64_t, int, i, 64m8,  8, 64, 32m4, 32, __VA_ARGS__)	\
  MACRO (int64_t, int, i, 64m8,  8, 64, 64m8, 64, __VA_ARGS__)

#define RVV_FLOAT_INDEX_TEST_ARG(MACRO, ...)			\
  MACRO (float16_t, float, f, 16mf4, 64, 16, 16mf4, 16, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16mf4, 64, 16, 32mf2, 32, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16mf4, 64, 16,  64m1, 64, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16mf2, 32, 16, 16mf2, 16, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16mf2, 32, 16,  32m1, 32, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16mf2, 32, 16,  64m2, 64, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16m1, 16, 16, 16m1, 16, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16m1, 16, 16, 32m2, 32, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16m1, 16, 16, 64m4, 64, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16m2,  8, 16, 16m2, 16, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16m2,  8, 16, 32m4, 32, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16m2,  8, 16, 64m8, 64, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16m4,  4, 16, 16m4, 16, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16m4,  4, 16, 32m8, 32, __VA_ARGS__)	\
  MACRO (float16_t, float, f, 16m8,  2, 16, 16m8, 16, __VA_ARGS__)	\
  MACRO (    float, float, f, 32mf2, 64, 32, 32mf2, 32, __VA_ARGS__)	\
  MACRO (    float, float, f, 32mf2, 64, 32,  64m1, 64, __VA_ARGS__)	\
  MACRO (    float, float, f, 32m1, 32, 32, 32m1, 32, __VA_ARGS__)	\
  MACRO (    float, float, f, 32m1, 32, 32, 64m2, 64, __VA_ARGS__)	\
  MACRO (    float, float, f, 32m2, 16, 32, 16m1, 16, __VA_ARGS__)	\
  MACRO (    float, float, f, 32m2, 16, 32, 32m2, 32, __VA_ARGS__)	\
  MACRO (    float, float, f, 32m2, 16, 32, 64m4, 64, __VA_ARGS__)	\
  MACRO (    float, float, f, 32m4,  8, 32, 16m2, 16, __VA_ARGS__)	\
  MACRO (    float, float, f, 32m4,  8, 32, 32m4, 32, __VA_ARGS__)	\
  MACRO (    float, float, f, 32m4,  8, 32, 64m8, 64, __VA_ARGS__)	\
  MACRO (    float, float, f, 32m8,  4, 32, 16m4, 16, __VA_ARGS__)	\
  MACRO (    float, float, f, 32m8,  4, 32, 32m8, 32, __VA_ARGS__)	\
  MACRO (   double, float, f, 64m1, 64, 64, 64m1, 64, __VA_ARGS__)	\
  MACRO (   double, float, f, 64m2, 32, 64, 32m1, 32, __VA_ARGS__)	\
  MACRO (   double, float, f, 64m2, 32, 64, 64m2, 64, __VA_ARGS__)	\
  MACRO (   double, float, f, 64m4, 16, 64, 16m1, 16, __VA_ARGS__)	\
  MACRO (   double, float, f, 64m4, 16, 64, 32m2, 32, __VA_ARGS__)	\
  MACRO (   double, float, f, 64m4, 16, 64, 64m4, 64, __VA_ARGS__)	\
  MACRO (   double, float, f, 64m8,  8, 64, 16m2, 16, __VA_ARGS__)	\
  MACRO (   double, float, f, 64m8,  8, 64, 32m4, 32, __VA_ARGS__)	\
  MACRO (   double, float, f, 64m8,  8, 64, 64m8, 64, __VA_ARGS__)

#define RVV_INT_TEST(MACRO)	\
  MACRO( int8_t, int, i,  8mf8,  64, x,  8)	\
  MACRO( int8_t, int, i,  8mf4,  32, x,  8)	\
  MACRO( int8_t, int, i,  8mf2,  16, x,  8)	\
  MACRO( int8_t, int, i,  8m1,  8, x,  8)	\
  MACRO( int8_t, int, i,  8m2,  4, x,  8)	\
  MACRO( int8_t, int, i,  8m4,  2, x,  8)	\
  MACRO( int8_t, int, i,  8m8,  1, x,  8)	\
  MACRO(int16_t, int, i, 16mf4, 64, x, 16)	\
  MACRO(int16_t, int, i, 16mf2, 32, x, 16)	\
  MACRO(int16_t, int, i, 16m1, 16, x, 16)	\
  MACRO(int16_t, int, i, 16m2,  8, x, 16)	\
  MACRO(int16_t, int, i, 16m4,  4, x, 16)	\
  MACRO(int16_t, int, i, 16m8,  2, x, 16)	\
  MACRO(int32_t, int, i, 32mf2, 64, x, 32)	\
  MACRO(int32_t, int, i, 32m1, 32, x, 32)	\
  MACRO(int32_t, int, i, 32m2, 16, x, 32)	\
  MACRO(int32_t, int, i, 32m4,  8, x, 32)	\
  MACRO(int32_t, int, i, 32m8,  4, x, 32)	\
  MACRO(int64_t, int, i, 64m1, 64, x, 64)	\
  MACRO(int64_t, int, i, 64m2, 32, x, 64)	\
  MACRO(int64_t, int, i, 64m4, 16, x, 64)	\
  MACRO(int64_t, int, i, 64m8,  8, x, 64)

#define RVV_INT_TEST_ARG(MACRO, ...)		\
  MACRO( int8_t, int, i,  8mf8,  64, x,  8, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8mf4,  32, x,  8, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8mf2,  16, x,  8, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8m1,  8, x, 8, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8m2,  4, x, 8, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8m4,  2, x, 8, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8m8,  1, x, 8, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16mf4, 64, x, 16, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16mf2, 32, x, 16, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16m1, 16, x, 16, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16m2,  8, x, 16, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16m4,  4, x, 16, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16m8,  2, x, 16, __VA_ARGS__)	\
  MACRO(int32_t, int, i, 32mf2, 64, x, 32, __VA_ARGS__)	\
  MACRO(int32_t, int, i, 32m1, 32, x, 32, __VA_ARGS__)	\
  MACRO(int32_t, int, i, 32m2, 16, x, 32, __VA_ARGS__)	\
  MACRO(int32_t, int, i, 32m4,  8, x, 32, __VA_ARGS__)	\
  MACRO(int32_t, int, i, 32m8,  4, x, 32, __VA_ARGS__)	\
  MACRO(int64_t, int, i, 64m1, 64, x, 64, __VA_ARGS__)	\
  MACRO(int64_t, int, i, 64m2, 32, x, 64, __VA_ARGS__)	\
  MACRO(int64_t, int, i, 64m4, 16, x, 64, __VA_ARGS__)	\
  MACRO(int64_t, int, i, 64m8,  8, x, 64, __VA_ARGS__)

#define RVV_UINT_TEST_ARG(MACRO, ...)		\
  MACRO( uint8_t, uint, u,  8mf8,  64, x,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8mf4,  32, x,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8mf2,  16, x,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8m1,  8, x,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8m2,  4, x,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8m4,  2, x,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8m8,  1, x,  8, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16mf4, 64, x, 16, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16mf2, 32, x, 16, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16m1, 16, x, 16, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16m2,  8, x, 16, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16m4,  4, x, 16, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16m8,  2, x, 16, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32mf2, 64, x, 32, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32m1, 32, x, 32, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32m2, 16, x, 32, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32m4,  8, x, 32, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32m8,  4, x, 32, __VA_ARGS__)	\
  MACRO(uint64_t, uint, u, 64m1, 64, x, 64, __VA_ARGS__)	\
  MACRO(uint64_t, uint, u, 64m2, 32, x, 64, __VA_ARGS__)	\
  MACRO(uint64_t, uint, u, 64m4, 16, x, 64, __VA_ARGS__)	\
  MACRO(uint64_t, uint, u, 64m8,  8, x, 64, __VA_ARGS__)

#define RVV_UINT_TEST(MACRO)	\
  MACRO( uint8_t, uint, u,  8mf8,  64, x,  8)	\
  MACRO( uint8_t, uint, u,  8mf4,  32, x,  8)	\
  MACRO( uint8_t, uint, u,  8mf2,  16, x,  8)	\
  MACRO( uint8_t, uint, u,  8m1,  8, x, 8)	\
  MACRO( uint8_t, uint, u,  8m2,  4, x, 8)	\
  MACRO( uint8_t, uint, u,  8m4,  2, x, 8)	\
  MACRO( uint8_t, uint, u,  8m8,  1, x, 8)	\
  MACRO(uint16_t, uint, u, 16mf4, 64, x, 16)	\
  MACRO(uint16_t, uint, u, 16mf2, 32, x, 16)	\
  MACRO(uint16_t, uint, u, 16m1, 16, x, 16)	\
  MACRO(uint16_t, uint, u, 16m2,  8, x, 16)	\
  MACRO(uint16_t, uint, u, 16m4,  4, x, 16)	\
  MACRO(uint16_t, uint, u, 16m8,  2, x, 16)	\
  MACRO(uint32_t, uint, u, 32mf2, 64, x, 32)	\
  MACRO(uint32_t, uint, u, 32m1, 32, x, 32)	\
  MACRO(uint32_t, uint, u, 32m2, 16, x, 32)	\
  MACRO(uint32_t, uint, u, 32m4,  8, x, 32)	\
  MACRO(uint32_t, uint, u, 32m8,  4, x, 32)	\
  MACRO(uint64_t, uint, u, 64m1, 64, x, 64)	\
  MACRO(uint64_t, uint, u, 64m2, 32, x, 64)	\
  MACRO(uint64_t, uint, u, 64m4, 16, x, 64)	\
  MACRO(uint64_t, uint, u, 64m8,  8, x, 64)

#define RVV_WINT_TEST(MACRO)				\
  MACRO( int8_t, int, i,  8mf8,  64, int16_t, 16mf4, x,  8, 16)	\
  MACRO( int8_t, int, i,  8mf4,  32, int16_t, 16mf2, x,  8, 16)	\
  MACRO( int8_t, int, i,  8mf2,  16, int16_t, 16m1, x,  8, 16)	\
  MACRO( int8_t, int, i,  8m1,  8, int16_t, 16m2, x,  8, 16)	\
  MACRO( int8_t, int, i,  8m2,  4, int16_t, 16m4, x,  8, 16)	\
  MACRO( int8_t, int, i,  8m4,  2, int16_t, 16m8, x,  8, 16)	\
  MACRO(int16_t, int, i, 16mf4, 64, int32_t, 32mf2, x, 16, 32)	\
  MACRO(int16_t, int, i, 16mf2, 32, int32_t, 32m1, x, 16, 32)	\
  MACRO(int16_t, int, i, 16m1, 16, int32_t, 32m2, x, 16, 32)	\
  MACRO(int16_t, int, i, 16m2,  8, int32_t, 32m4, x, 16, 32)	\
  MACRO(int16_t, int, i, 16m4,  4, int32_t, 32m8, x, 16, 32)	\
  MACRO(int32_t, int, i, 32mf2, 64, int64_t, 64m1, x, 32, 64)	\
  MACRO(int32_t, int, i, 32m1, 32, int64_t, 64m2, x, 32, 64)	\
  MACRO(int32_t, int, i, 32m2, 16, int64_t, 64m4, x, 32, 64)	\
  MACRO(int32_t, int, i, 32m4,  8, int64_t, 64m8, x, 32, 64)

/* The unsigned is added in the macro that we call.  */
#define RVV_WUINT_TEST(MACRO)				\
  MACRO( uint8_t, uint, u,  8mf8,  64, uint16_t, 16mf4, x,  8, 16)	\
  MACRO( uint8_t, uint, u,  8mf4,  32, uint16_t, 16mf2, x,  8, 16)	\
  MACRO( uint8_t, uint, u,  8mf2,  16, uint16_t, 16m1, x,  8, 16)	\
  MACRO( uint8_t, uint, u,  8m1,  8, uint16_t, 16m2, x,  8, 16)	\
  MACRO( uint8_t, uint, u,  8m2,  4, uint16_t, 16m4, x,  8, 16)	\
  MACRO( uint8_t, uint, u,  8m4,  2, uint16_t, 16m8, x,  8, 16)	\
  MACRO(uint16_t, uint, u, 16mf4, 64, uint32_t, 32mf2, x, 16, 32)	\
  MACRO(uint16_t, uint, u, 16mf2, 32, uint32_t, 32m1, x, 16, 32)	\
  MACRO(uint16_t, uint, u, 16m1, 16, uint32_t, 32m2, x, 16, 32)	\
  MACRO(uint16_t, uint, u, 16m2,  8, uint32_t, 32m4, x, 16, 32)	\
  MACRO(uint16_t, uint, u, 16m4,  4, uint32_t, 32m8, x, 16, 32)	\
  MACRO(uint32_t, uint, u, 32mf2, 64, uint64_t, 64m1, x, 32, 64)	\
  MACRO(uint32_t, uint, u, 32m1, 32, uint64_t, 64m2, x, 32, 64)	\
  MACRO(uint32_t, uint, u, 32m2, 16, uint64_t, 64m4, x, 32, 64)	\
  MACRO(uint32_t, uint, u, 32m4,  8, uint64_t, 64m8, x, 32, 64)

#define RVV_WINT_TEST_ARG(MACRO, ...)			\
  MACRO( int8_t, int, i,  8mf8,  64, int16_t, 16mf4, x,  8, 16, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8mf4,  32, int16_t, 16mf2, x,  8, 16, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8mf2,  16, int16_t, 16m1, x,  8, 16, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8m1,  8, int16_t, 16m2, x,  8, 16, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8m2,  4, int16_t, 16m4, x,  8, 16, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8m4,  2, int16_t, 16m8, x,  8, 16, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16mf4, 64, int32_t, 32mf2, x, 16, 32, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16mf2, 32, int32_t, 32m1, x, 16, 32, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16m1, 16, int32_t, 32m2, x, 16, 32, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16m2,  8, int32_t, 32m4, x, 16, 32, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16m4,  4, int32_t, 32m8, x, 16, 32, __VA_ARGS__)	\
  MACRO(int32_t, int, i, 32mf2, 64, int64_t, 64m1, x, 32, 64, __VA_ARGS__)	\
  MACRO(int32_t, int, i, 32m1, 32, int64_t, 64m2, x, 32, 64, __VA_ARGS__)	\
  MACRO(int32_t, int, i, 32m2, 16, int64_t, 64m4, x, 32, 64, __VA_ARGS__)	\
  MACRO(int32_t, int, i, 32m4,  8, int64_t, 64m8, x, 32, 64, __VA_ARGS__)

/* The unsigned is added in the macro that we call.  */
#define RVV_WUINT_TEST_ARG(MACRO, ...)				\
  MACRO( uint8_t, uint, u,  8mf8,  64, uint16_t, 16mf4, x,  8, 16, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8mf4,  32, uint16_t, 16mf2, x,  8, 16, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8mf2,  16, uint16_t, 16m1, x,  8, 16, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8m1,  8, uint16_t, 16m2, x,  8, 16, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8m2,  4, uint16_t, 16m4, x,  8, 16, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8m4,  2, uint16_t, 16m8, x,  8, 16, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16mf4, 64, uint32_t, 32mf2, x, 16, 32, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16mf2, 32, uint32_t, 32m1, x, 16, 32, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16m1, 16, uint32_t, 32m2, x, 16, 32, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16m2,  8, uint32_t, 32m4, x, 16, 32, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16m4,  4, uint32_t, 32m8, x, 16, 32, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32mf2, 64, uint64_t, 64m1, x, 32, 64, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32m1, 32, uint64_t, 64m2, x, 32, 64, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32m2, 16, uint64_t, 64m4, x, 32, 64, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32m4,  8, uint64_t, 64m8, x, 32, 64, __VA_ARGS__)

#define RVV_QINT_TEST_ARG(MACRO, ...)				\
  MACRO( int8_t, int, i,  8mf8,  64, int32_t, 32mf2, x,  8, 32, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8mf4,  32, int32_t, 32m1, x,  8, 32, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8mf2,  16, int32_t, 32m2, x,  8, 32, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8m1,  8, int32_t, 32m4, x,  8, 32, __VA_ARGS__)	\
  MACRO( int8_t, int, i,  8m2,  4, int32_t, 32m8, x,  8, 32, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16mf4, 64, int64_t, 64m1, x, 16, 64, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16mf2, 32, int64_t, 64m2, x, 16, 64, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16m1, 16, int64_t, 64m4, x, 16, 64, __VA_ARGS__)	\
  MACRO(int16_t, int, i, 16m2,  8, int64_t, 64m8, x, 16, 64, __VA_ARGS__)	\

#define RVV_FLOAT_TEST(MACRO)     	\
  MACRO(float16_t, float, f, 16mf4,  64, f, 16)	\
  MACRO(float16_t, float, f, 16mf2,  32, f, 16)	\
  MACRO(float16_t, float, f, 16m1, 16, f, 16)	\
  MACRO(float16_t, float, f, 16m2,  8, f, 16)	\
  MACRO(float16_t, float, f, 16m4,  4, f, 16)	\
  MACRO(float16_t, float, f, 16m8,  2, f, 16)	\
  MACRO(    float, float, f, 32mf2, 64, f, 32)	\
  MACRO(    float, float, f, 32m1, 32, f, 32)	\
  MACRO(    float, float, f, 32m2, 16, f, 32)	\
  MACRO(    float, float, f, 32m4,  8, f, 32)	\
  MACRO(    float, float, f, 32m8,  4, f, 32)	\
  MACRO(   double, float, f, 64m1, 64, f, 64)	\
  MACRO(   double, float, f, 64m2, 32, f, 64)	\
  MACRO(   double, float, f, 64m4, 16, f, 64)	\
  MACRO(   double, float, f, 64m8,  8, f, 64)

#define RVV_FLOAT_TEST_ARG(MACRO, ...)     	\
  MACRO(float16_t, float, f, 16mf4, 64, f, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16mf2, 32, f, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16m1, 16, f, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16m2,  8, f, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16m4,  4, f, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16m8,  2, f, 16, __VA_ARGS__)	\
  MACRO(    float, float, f, 32mf2, 64, f, 32, __VA_ARGS__)	\
  MACRO(    float, float, f, 32m1, 32, f, 32, __VA_ARGS__)	\
  MACRO(    float, float, f, 32m2, 16, f, 32, __VA_ARGS__)	\
  MACRO(    float, float, f, 32m4,  8, f, 32, __VA_ARGS__)	\
  MACRO(    float, float, f, 32m8,  4, f, 32, __VA_ARGS__)	\
  MACRO(   double, float, f, 64m1, 64, f, 64, __VA_ARGS__)	\
  MACRO(   double, float, f, 64m2, 32, f, 64, __VA_ARGS__)	\
  MACRO(   double, float, f, 64m4, 16, f, 64, __VA_ARGS__)	\
  MACRO(   double, float, f, 64m8,  8, f, 64, __VA_ARGS__)

#define RVV_FLOAT_INT_TEST(MACRO)     	\
  MACRO(float16_t, float, f, 16mf4, 64, int16_t, int, 16)	\
  MACRO(float16_t, float, f, 16mf2, 32, int16_t, int, 16)	\
  MACRO(float16_t, float, f, 16m1, 16, int16_t, int, 16)	\
  MACRO(float16_t, float, f, 16m2,  8, int16_t, int, 16)	\
  MACRO(float16_t, float, f, 16m4,  4, int16_t, int, 16)	\
  MACRO(float16_t, float, f, 16m8,  2, int16_t, int, 16)	\
  MACRO(    float, float, f, 32mf2, 64, int32_t, int, 32)	\
  MACRO(    float, float, f, 32m1, 32, int32_t, int, 32)	\
  MACRO(    float, float, f, 32m2, 16, int32_t, int, 32)	\
  MACRO(    float, float, f, 32m4,  8, int32_t, int, 32)	\
  MACRO(    float, float, f, 32m8,  4, int32_t, int, 32)	\
  MACRO(   double, float, f, 64m1, 64, int64_t, int, 64)	\
  MACRO(   double, float, f, 64m2, 32, int64_t, int, 64)	\
  MACRO(   double, float, f, 64m4, 16, int64_t, int, 64)	\
  MACRO(   double, float, f, 64m8,  8, int64_t, int, 64)

#define RVV_FLOAT_INT_TEST_ARG(MACRO, ...)			\
  MACRO(float16_t, float, f, 16mf4, 64, int16_t, int, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16mf2, 32, int16_t, int, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16m1, 16, int16_t, int, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16m2,  8, int16_t, int, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16m4,  4, int16_t, int, 16, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16m8,  2, int16_t, int, 16, __VA_ARGS__)	\
  MACRO(    float, float, f, 32mf2, 64, int32_t, int, 32, __VA_ARGS__)	\
  MACRO(    float, float, f, 32m1, 32, int32_t, int, 32, __VA_ARGS__)	\
  MACRO(    float, float, f, 32m2, 16, int32_t, int, 32, __VA_ARGS__)	\
  MACRO(    float, float, f, 32m4,  8, int32_t, int, 32, __VA_ARGS__)	\
  MACRO(    float, float, f, 32m8,  4, int32_t, int, 32, __VA_ARGS__)	\
  MACRO(   double, float, f, 64m1, 64, int64_t, int, 64, __VA_ARGS__)	\
  MACRO(   double, float, f, 64m2, 32, int64_t, int, 64, __VA_ARGS__)	\
  MACRO(   double, float, f, 64m4, 16, int64_t, int, 64, __VA_ARGS__)	\
  MACRO(   double, float, f, 64m8,  8, int64_t, int, 64, __VA_ARGS__)

#define RVV_FLOAT_CVT_INT_TEST(MACRO)     	\
  MACRO(float16_t, float, f, 16mf4, 64, int16_t, int, i, 16)	\
  MACRO(float16_t, float, f, 16mf2, 32, int16_t, int, i, 16)	\
  MACRO(float16_t, float, f, 16m1, 16, int16_t, int, i, 16)	\
  MACRO(float16_t, float, f, 16m2,  8, int16_t, int, i, 16)	\
  MACRO(float16_t, float, f, 16m4,  4, int16_t, int, i, 16)	\
  MACRO(float16_t, float, f, 16m8,  2, int16_t, int, i, 16)	\
  MACRO(    float, float, f, 32mf2, 64, int32_t, int, i, 32)	\
  MACRO(    float, float, f, 32m1, 32, int32_t, int, i, 32)	\
  MACRO(    float, float, f, 32m2, 16, int32_t, int, i, 32)	\
  MACRO(    float, float, f, 32m4,  8, int32_t, int, i, 32)	\
  MACRO(    float, float, f, 32m8,  4, int32_t, int, i, 32)	\
  MACRO(   double, float, f, 64m1, 64, int64_t, int, i, 64)	\
  MACRO(   double, float, f, 64m2, 32, int64_t, int, i, 64)	\
  MACRO(   double, float, f, 64m4, 16, int64_t, int, i, 64)	\
  MACRO(   double, float, f, 64m8,  8, int64_t, int, i, 64)

#define RVV_INT_WNCVT_INT_TEST(MACRO)	\
  MACRO( 8mf8, 16mf4,  64,  8, 16)		\
  MACRO( 8mf4, 16mf2,  32,  8, 16)		\
  MACRO( 8mf2, 16m1,  16,  8, 16)		\
  MACRO( 8m1, 16m2,  8,  8, 16)		\
  MACRO( 8m2, 16m4,  4,  8, 16)		\
  MACRO( 8m4, 16m8,  2,  8, 16)		\
  MACRO(16mf4, 32mf2, 64, 16, 32)		\
  MACRO(16mf2, 32m1, 32, 16, 32)		\
  MACRO(16m1, 32m2, 16, 16, 32)		\
  MACRO(16m2, 32m4,  8, 16, 32)		\
  MACRO(16m4, 32m8,  4, 16, 32)		\
  MACRO(32mf2, 64m1, 64, 32, 64)		\
  MACRO(32m1, 64m2, 32, 32, 64)		\
  MACRO(32m2, 64m4, 16, 32, 64)		\
  MACRO(32m4, 64m8,  8, 32, 64)

#define RVV_WINT_EXTEND_TEST(MACRO, ...)	\
  MACRO( 8mf8, 16mf4,  64,  8, 16, __VA_ARGS__)	\
  MACRO( 8mf4, 16mf2,  32,  8, 16, __VA_ARGS__)	\
  MACRO( 8mf2, 16m1,  16,  8, 16, __VA_ARGS__)	\
  MACRO( 8m1, 16m2,  8,  8, 16, __VA_ARGS__)	\
  MACRO( 8m2, 16m4,  4,  8, 16, __VA_ARGS__)	\
  MACRO( 8m4, 16m8,  2,  8, 16, __VA_ARGS__)	\
  MACRO(16mf4, 32mf2, 64, 16, 32, __VA_ARGS__)	\
  MACRO(16mf2, 32m1, 32, 16, 32, __VA_ARGS__)	\
  MACRO(16m1, 32m2, 16, 16, 32, __VA_ARGS__)	\
  MACRO(16m2, 32m4,  8, 16, 32, __VA_ARGS__)	\
  MACRO(16m4, 32m8,  4, 16, 32, __VA_ARGS__)	\
  MACRO(32mf2, 64m1, 64, 32, 64, __VA_ARGS__)	\
  MACRO(32m1, 64m2, 32, 32, 64, __VA_ARGS__)	\
  MACRO(32m2, 64m4, 16, 32, 64, __VA_ARGS__)	\
  MACRO(32m4, 64m8,  8, 32, 64, __VA_ARGS__)

#define RVV_QINT_EXTEND_TEST(MACRO, ...)	\
  MACRO( 8mf8, 32mf2,  64,  8, 32, __VA_ARGS__)	\
  MACRO( 8mf4, 32m1,  32,  8, 32, __VA_ARGS__)	\
  MACRO( 8mf2, 32m2,  16,  8, 32, __VA_ARGS__)	\
  MACRO( 8m1, 32m4,  8,  8, 32, __VA_ARGS__)	\
  MACRO( 8m2, 32m8,  4,  8, 32, __VA_ARGS__)	\
  MACRO(16mf4, 64m1, 64, 16, 64, __VA_ARGS__)	\
  MACRO(16mf2, 64m2, 32, 16, 64, __VA_ARGS__)	\
  MACRO(16m1, 64m4, 16, 16, 64, __VA_ARGS__)	\
  MACRO(16m2, 64m8,  8, 16, 64, __VA_ARGS__)

#define RVV_EINT_EXTEND_TEST(MACRO, ...)	\
  MACRO( 8mf8, 64m1,  64,  8, 64, __VA_ARGS__)  \
  MACRO( 8mf4, 64m2,  32,  8, 64, __VA_ARGS__)  \
  MACRO( 8mf2, 64m4,  16,  8, 64, __VA_ARGS__)  \
  MACRO( 8m1, 64m8,  8,  8, 64, __VA_ARGS__)

#define RVV_FLOAT_WNCVT_INT_TEST(MACRO)	\
  MACRO(16mf4, 32mf2, 64, 16, 32)		\
  MACRO(16mf2, 32m1, 32, 16, 32)		\
  MACRO(16m1, 32m2, 16, 16, 32)		\
  MACRO(16m2, 32m4,  8, 16, 32)		\
  MACRO(16m4, 32m8,  4, 16, 32)		\
  MACRO(32mf2, 64m1, 64, 32, 64)		\
  MACRO(32m1, 64m2, 32, 32, 64)		\
  MACRO(32m2, 64m4, 16, 32, 64)		\
  MACRO(32m4, 64m8,  8, 32, 64)

#define RVV_WFLOAT_TEST(MACRO)				\
  MACRO(float16_t, float, f, 16mf4,  64,  float, 32mf2)	\
  MACRO(float16_t, float, f, 16mf2,  32,  float, 32m1)	\
  MACRO(float16_t, float, f, 16m1,  16,  float, 32m2)	\
  MACRO(float16_t, float, f, 16m2,   8,  float, 32m4)	\
  MACRO(float16_t, float, f, 16m4,   4,  float, 32m8)	\
  MACRO(    float, float, f, 32mf2,  64, double, 64m1)	\
  MACRO(    float, float, f, 32m1,  32, double, 64m2)	\
  MACRO(    float, float, f, 32m2,  16, double, 64m4)	\
  MACRO(    float, float, f, 32m4,   8, double, 64m8)

#define RVV_WFLOAT_TEST_ARG(MACRO, ...)				\
  MACRO(float16_t, float, f, 16mf4,  64,  float, 32mf2, f, 16, 32, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16mf2,  32,  float, 32m1, f, 16, 32, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16m1,  16,  float, 32m2, f, 16, 32, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16m2,   8,  float, 32m4, f, 16, 32, __VA_ARGS__)	\
  MACRO(float16_t, float, f, 16m4,   4,  float, 32m8, f, 16, 32, __VA_ARGS__)	\
  MACRO(    float, float, f, 32mf2,  64, double, 64m1, f, 32, 64, __VA_ARGS__)	\
  MACRO(    float, float, f, 32m1,  32, double, 64m2, f, 32, 64, __VA_ARGS__)	\
  MACRO(    float, float, f, 32m2,  16, double, 64m4, f, 32, 64, __VA_ARGS__)	\
  MACRO(    float, float, f, 32m4,   8, double, 64m8, f, 32, 64, __VA_ARGS__)

#define RVV_INT_REDUC_TEST(MACRO)	\
  MACRO( int8_t, int, i,  8mf8,  8m1,  64,  8)	\
  MACRO( int8_t, int, i,  8mf4,  8m1,  32,  8)	\
  MACRO( int8_t, int, i,  8mf2,  8m1,  16,  8)	\
  MACRO( int8_t, int, i,  8m1,  8m1,  8,  8)	\
  MACRO( int8_t, int, i,  8m2,  8m1,  4,  8)	\
  MACRO( int8_t, int, i,  8m4,  8m1,  2,  8)	\
  MACRO( int8_t, int, i,  8m8,  8m1,  1,  8)	\
  MACRO(int16_t, int, i, 16mf4, 16m1, 64, 16)	\
  MACRO(int16_t, int, i, 16mf2, 16m1, 32, 16)	\
  MACRO(int16_t, int, i, 16m1, 16m1, 16, 16)	\
  MACRO(int16_t, int, i, 16m2, 16m1,  8, 16)	\
  MACRO(int16_t, int, i, 16m4, 16m1,  4, 16)	\
  MACRO(int16_t, int, i, 16m8, 16m1,  2, 16)	\
  MACRO(int32_t, int, i, 32mf2, 32m1, 64, 32)	\
  MACRO(int32_t, int, i, 32m1, 32m1, 32, 32)	\
  MACRO(int32_t, int, i, 32m2, 32m1, 16, 32)	\
  MACRO(int32_t, int, i, 32m4, 32m1,  8, 32)	\
  MACRO(int32_t, int, i, 32m8, 32m1,  4, 32)	\
  MACRO(int64_t, int, i, 64m1, 64m1, 64, 64)	\
  MACRO(int64_t, int, i, 64m2, 64m1, 32, 64)	\
  MACRO(int64_t, int, i, 64m4, 64m1, 16, 64)	\
  MACRO(int64_t, int, i, 64m8, 64m1,  8, 64)

#define RVV_UINT_REDUC_TEST(MACRO)	\
  MACRO( uint8_t, uint, u,  8mf8,  8m1,  64,  8)	\
  MACRO( uint8_t, uint, u,  8mf4,  8m1,  32,  8)	\
  MACRO( uint8_t, uint, u,  8mf2,  8m1,  16,  8)	\
  MACRO( uint8_t, uint, u,  8m1,  8m1,  8,  8)	\
  MACRO( uint8_t, uint, u,  8m2,  8m1,  4,  8)	\
  MACRO( uint8_t, uint, u,  8m4,  8m1,  2,  8)	\
  MACRO( uint8_t, uint, u,  8m8,  8m1,  1,  8)	\
  MACRO(uint16_t, uint, u, 16mf4, 16m1, 64, 16)	\
  MACRO(uint16_t, uint, u, 16mf2, 16m1, 32, 16)	\
  MACRO(uint16_t, uint, u, 16m1, 16m1, 16, 16)	\
  MACRO(uint16_t, uint, u, 16m2, 16m1,  8, 16)	\
  MACRO(uint16_t, uint, u, 16m4, 16m1,  4, 16)	\
  MACRO(uint16_t, uint, u, 16m8, 16m1,  2, 16)	\
  MACRO(uint32_t, uint, u, 32mf2, 32m1, 64, 32)	\
  MACRO(uint32_t, uint, u, 32m1, 32m1, 32, 32)	\
  MACRO(uint32_t, uint, u, 32m2, 32m1, 16, 32)	\
  MACRO(uint32_t, uint, u, 32m4, 32m1,  8, 32)	\
  MACRO(uint32_t, uint, u, 32m8, 32m1,  4, 32)	\
  MACRO(uint64_t, uint, u, 64m1, 64m1, 64, 64)	\
  MACRO(uint64_t, uint, u, 64m2, 64m1, 32, 64)	\
  MACRO(uint64_t, uint, u, 64m4, 64m1, 16, 64)	\
  MACRO(uint64_t, uint, u, 64m8, 64m1,  8, 64)

#define RVV_UINT_REDUC_TEST_ARG(MACRO, ...)		\
  MACRO( uint8_t, uint, u,  8mf8,  8m1,  64,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8mf4,  8m1,  32,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8mf2,  8m1,  16,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8m1,  8m1,  8, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8m2,  8m1,  4, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8m4,  8m1,  2, __VA_ARGS__)	\
  MACRO( uint8_t, uint, u,  8m8,  8m1,  1, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16mf4, 16m1, 64, 16, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16mf2, 16m1, 32, 16, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16m1, 16m1, 16, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16m2, 16m1,  8, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16m4, 16m1,  4, __VA_ARGS__)	\
  MACRO(uint16_t, uint, u, 16m8, 16m1,  2, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32mf2, 32m1, 64, 32, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32m1, 32m1, 32, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32m2, 32m1, 16, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32m4, 32m1,  8, __VA_ARGS__)	\
  MACRO(uint32_t, uint, u, 32m8, 32m1,  4, __VA_ARGS__)	\
  MACRO(uint64_t, uint, u, 64m1, 64m1, 64, __VA_ARGS__)	\
  MACRO(uint64_t, uint, u, 64m2, 64m1, 32, __VA_ARGS__)	\
  MACRO(uint64_t, uint, u, 64m4, 64m1, 16, __VA_ARGS__)	\
  MACRO(uint64_t, uint, u, 64m8, 64m1,  8, __VA_ARGS__)

#define RVV_WINT_REDUC_TEST(MACRO)		\
  MACRO( int8_t, int, i,  8mf8,  64, int16_t, 16m1,  8, 16)	\
  MACRO( int8_t, int, i,  8mf4,  32, int16_t, 16m1,  8, 16)	\
  MACRO( int8_t, int, i,  8mf2,  16, int16_t, 16m1,  8, 16)	\
  MACRO( int8_t, int, i,  8m1,  8, int16_t, 16m1,  8, 16)	\
  MACRO( int8_t, int, i,  8m2,  4, int16_t, 16m1,  8, 16)	\
  MACRO( int8_t, int, i,  8m4,  2, int16_t, 16m1,  8, 16)	\
  MACRO(int16_t, int, i, 16mf4, 64, int32_t, 32m1, 16, 32)	\
  MACRO(int16_t, int, i, 16mf2, 32, int32_t, 32m1, 16, 32)	\
  MACRO(int16_t, int, i, 16m1, 16, int32_t, 32m1, 16, 32)	\
  MACRO(int16_t, int, i, 16m2,  8, int32_t, 32m1, 16, 32)	\
  MACRO(int16_t, int, i, 16m4,  4, int32_t, 32m1, 16, 32)	\
  MACRO(int32_t, int, i, 32mf2, 64, int64_t, 64m1, 32, 64)	\
  MACRO(int32_t, int, i, 32m1, 32, int64_t, 64m1, 32, 64)	\
  MACRO(int32_t, int, i, 32m2, 16, int64_t, 64m1, 32, 64)	\
  MACRO(int32_t, int, i, 32m4,  8, int64_t, 64m1, 32, 64)

#define RVV_WUINT_REDUC_TEST(MACRO)			\
  MACRO( uint8_t, uint, u,  8mf8,  64, uint16_t, 16m1,  8, 16)	\
  MACRO( uint8_t, uint, u,  8mf4,  32, uint16_t, 16m1,  8, 16)	\
  MACRO( uint8_t, uint, u,  8mf2,  16, uint16_t, 16m1,  8, 16)	\
  MACRO( uint8_t, uint, u,  8m1,  8, uint16_t, 16m1,  8, 16)	\
  MACRO( uint8_t, uint, u,  8m2,  4, uint16_t, 16m1,  8, 16)	\
  MACRO( uint8_t, uint, u,  8m4,  2, uint16_t, 16m1,  8, 16)	\
  MACRO(uint16_t, uint, u, 16mf4, 64, uint32_t, 32m1, 16, 32)	\
  MACRO(uint16_t, uint, u, 16mf2, 32, uint32_t, 32m1, 16, 32)	\
  MACRO(uint16_t, uint, u, 16m1, 16, uint32_t, 32m1, 16, 32)	\
  MACRO(uint16_t, uint, u, 16m2,  8, uint32_t, 32m1, 16, 32)	\
  MACRO(uint16_t, uint, u, 16m4,  4, uint32_t, 32m1, 16, 32)	\
  MACRO(uint32_t, uint, u, 32mf2, 64, uint64_t, 64m1, 32, 64)	\
  MACRO(uint32_t, uint, u, 32m1, 32, uint64_t, 64m1, 32, 64)	\
  MACRO(uint32_t, uint, u, 32m2, 16, uint64_t, 64m1, 32, 64)	\
  MACRO(uint32_t, uint, u, 32m4,  8, uint64_t, 64m1, 32, 64)


#define RVV_FLOAT_REDUC_TEST(MACRO)		\
  MACRO(float16_t, float, f, 16mf4, 16m1, 64, 16)	\
  MACRO(float16_t, float, f, 16mf2, 16m1, 32, 16)	\
  MACRO(float16_t, float, f, 16m1, 16m1, 16, 16)	\
  MACRO(float16_t, float, f, 16m2, 16m1,  8, 16)	\
  MACRO(float16_t, float, f, 16m4, 16m1,  4, 16)	\
  MACRO(float16_t, float, f, 16m8, 16m1,  2, 16)	\
  MACRO(    float, float, f, 32mf2, 32m1, 64, 32)	\
  MACRO(    float, float, f, 32m1, 32m1, 32, 32)	\
  MACRO(    float, float, f, 32m2, 32m1, 16, 32)	\
  MACRO(    float, float, f, 32m4, 32m1,  8, 32)	\
  MACRO(    float, float, f, 32m8, 32m1,  4, 32)	\
  MACRO(   double, float, f, 64m1, 64m1, 64, 64)	\
  MACRO(   double, float, f, 64m2, 64m1, 32, 64)	\
  MACRO(   double, float, f, 64m4, 64m1, 16, 64)	\
  MACRO(   double, float, f, 64m8, 64m1,  8, 64)

#define RVV_WFLOAT_REDUC_TEST(MACRO)			\
  MACRO(float16_t, float, f, 16mf4,  64,  float, 32m1, 16, 32)	\
  MACRO(float16_t, float, f, 16mf2,  32,  float, 32m1, 16, 32)	\
  MACRO(float16_t, float, f, 16m1,  16,  float, 32m1, 16, 32)	\
  MACRO(float16_t, float, f, 16m2,   8,  float, 32m1, 16, 32)	\
  MACRO(float16_t, float, f, 16m4,   4,  float, 32m1, 16, 32)	\
  MACRO(    float, float, f, 32mf2,  64, double, 64m1, 32, 64)	\
  MACRO(    float, float, f, 32m1,  32, double, 64m1, 32, 64)	\
  MACRO(    float, float, f, 32m2,  16, double, 64m1, 32, 64)	\
  MACRO(    float, float, f, 32m4,   8, double, 64m1, 32, 64)

#define RVV_SEG_NO_SEW8_TEST_ARG(MACRO, ...)\
  MACRO (16, 1, 2, 16, __VA_ARGS__)     \
  MACRO (16, 1, 3, 16, __VA_ARGS__)     \
  MACRO (16, 1, 4, 16, __VA_ARGS__)     \
  MACRO (16, 1, 5, 16, __VA_ARGS__)     \
  MACRO (16, 1, 6, 16, __VA_ARGS__)     \
  MACRO (16, 1, 7, 16, __VA_ARGS__)     \
  MACRO (16, 1, 8, 16, __VA_ARGS__)     \
  MACRO (16, 2, 2,  8, __VA_ARGS__)     \
  MACRO (16, 2, 3,  8, __VA_ARGS__)     \
  MACRO (16, 2, 4,  8, __VA_ARGS__)     \
  MACRO (16, 4, 2,  4, __VA_ARGS__)     \
  MACRO (32, 1, 2, 32, __VA_ARGS__)     \
  MACRO (32, 1, 3, 32, __VA_ARGS__)     \
  MACRO (32, 1, 4, 32, __VA_ARGS__)     \
  MACRO (32, 1, 5, 32, __VA_ARGS__)     \
  MACRO (32, 1, 6, 32, __VA_ARGS__)     \
  MACRO (32, 1, 7, 32, __VA_ARGS__)     \
  MACRO (32, 1, 8, 32, __VA_ARGS__)     \
  MACRO (32, 2, 2, 16, __VA_ARGS__)     \
  MACRO (32, 2, 3, 16, __VA_ARGS__)     \
  MACRO (32, 2, 4, 16, __VA_ARGS__)     \
  MACRO (32, 4, 2,  8, __VA_ARGS__)     \
  MACRO (64, 1, 2, 64, __VA_ARGS__)     \
  MACRO (64, 1, 3, 64, __VA_ARGS__)     \
  MACRO (64, 1, 4, 64, __VA_ARGS__)     \
  MACRO (64, 1, 5, 64, __VA_ARGS__)     \
  MACRO (64, 1, 6, 64, __VA_ARGS__)     \
  MACRO (64, 1, 7, 64, __VA_ARGS__)     \
  MACRO (64, 1, 8, 64, __VA_ARGS__)     \
  MACRO (64, 2, 2, 32, __VA_ARGS__)     \
  MACRO (64, 2, 3, 32, __VA_ARGS__)     \
  MACRO (64, 2, 4, 32, __VA_ARGS__)     \
  MACRO (64, 4, 2, 16, __VA_ARGS__)

#define RVV_SEG_TEST_ARG(MACRO, ...)		\
  RVV_SEG_NO_SEW8_TEST_ARG(MACRO, __VA_ARGS__)	\
  MACRO ( 8, 1, 2,  8, __VA_ARGS__)     \
  MACRO ( 8, 1, 3,  8, __VA_ARGS__)     \
  MACRO ( 8, 1, 4,  8, __VA_ARGS__)     \
  MACRO ( 8, 1, 5,  8, __VA_ARGS__)     \
  MACRO ( 8, 1, 6,  8, __VA_ARGS__)     \
  MACRO ( 8, 1, 7,  8, __VA_ARGS__)     \
  MACRO ( 8, 1, 8,  8, __VA_ARGS__)     \
  MACRO ( 8, 2, 2,  4, __VA_ARGS__)     \
  MACRO ( 8, 2, 3,  4, __VA_ARGS__)     \
  MACRO ( 8, 2, 4,  4, __VA_ARGS__)     \
  MACRO ( 8, 4, 2,  2, __VA_ARGS__)

#define RVV_SEG_NF2_NO_SEW8_TEST_ARG(MACRO, ...) \
  MACRO (16, 1, 2, 16, __VA_ARGS__)	\
  MACRO (16, 2, 2,  8, __VA_ARGS__)	\
  MACRO (16, 4, 2,  4, __VA_ARGS__)	\
  MACRO (32, 1, 2, 32, __VA_ARGS__)	\
  MACRO (32, 2, 2, 16, __VA_ARGS__)	\
  MACRO (32, 4, 2,  8, __VA_ARGS__)	\
  MACRO (64, 1, 2, 64, __VA_ARGS__)	\
  MACRO (64, 2, 2, 32, __VA_ARGS__)	\
  MACRO (64, 4, 2, 16, __VA_ARGS__)	\

#define RVV_SEG_NF2_TEST_ARG(MACRO, ...)		\
  RVV_SEG_NF2_NO_SEW8_TEST_ARG(MACRO, __VA_ARGS__)	\
  MACRO (8, 1, 2, 8, __VA_ARGS__)	\
  MACRO (8, 2, 2, 4, __VA_ARGS__)	\
  MACRO (8, 4, 2, 2, __VA_ARGS__)	\

#define RVV_SEG_NF3_NO_SEW8_TEST_ARG(MACRO, ...) \
  MACRO (16, 1, 3, 16, __VA_ARGS__)	\
  MACRO (16, 2, 3,  8, __VA_ARGS__)	\
  MACRO (32, 1, 3, 32, __VA_ARGS__)	\
  MACRO (32, 2, 3, 16, __VA_ARGS__)	\
  MACRO (64, 1, 3, 64, __VA_ARGS__)	\
  MACRO (64, 2, 3, 32, __VA_ARGS__)	\

#define RVV_SEG_NF3_TEST_ARG(MACRO, ...)		\
  RVV_SEG_NF3_NO_SEW8_TEST_ARG(MACRO, __VA_ARGS__)	\
  MACRO (8, 1, 3, 8, __VA_ARGS__)	\
  MACRO (8, 2, 3, 4, __VA_ARGS__)	\

#define RVV_SEG_NF4_NO_SEW8_TEST_ARG(MACRO, ...) \
  MACRO (16, 1, 4, 16, __VA_ARGS__)	\
  MACRO (16, 2, 4,  8, __VA_ARGS__)	\
  MACRO (32, 1, 4, 32, __VA_ARGS__)	\
  MACRO (32, 2, 4, 16, __VA_ARGS__)	\
  MACRO (64, 1, 4, 64, __VA_ARGS__)	\
  MACRO (64, 2, 4, 32, __VA_ARGS__)	\

#define RVV_SEG_NF4_TEST_ARG(MACRO, ...)		\
  RVV_SEG_NF4_NO_SEW8_TEST_ARG(MACRO, __VA_ARGS__)	\
  MACRO (8, 1, 4, 8, __VA_ARGS__)	\
  MACRO (8, 2, 4, 4, __VA_ARGS__)	\

#define RVV_SEG_NF5_NO_SEW8_TEST_ARG(MACRO, ...) \
  MACRO (16, 1, 5, 16, __VA_ARGS__)	\
  MACRO (32, 1, 5, 32, __VA_ARGS__)	\
  MACRO (64, 1, 5, 64, __VA_ARGS__)	\

#define RVV_SEG_NF5_TEST_ARG(MACRO, ...)		\
  RVV_SEG_NF5_NO_SEW8_TEST_ARG(MACRO, __VA_ARGS__)	\
  MACRO (8, 1, 5, 8, __VA_ARGS__)	\

#define RVV_SEG_NF6_NO_SEW8_TEST_ARG(MACRO, ...) \
  MACRO (16, 1, 6, 16, __VA_ARGS__)	\
  MACRO (32, 1, 6, 32, __VA_ARGS__)	\
  MACRO (64, 1, 6, 64, __VA_ARGS__)	\

#define RVV_SEG_NF6_TEST_ARG(MACRO, ...)		\
  RVV_SEG_NF6_NO_SEW8_TEST_ARG(MACRO, __VA_ARGS__)	\
  MACRO (8, 1, 6, 8, __VA_ARGS__)	\

#define RVV_SEG_NF7_NO_SEW8_TEST_ARG(MACRO, ...) \
  MACRO (16, 1, 7, 16, __VA_ARGS__)	\
  MACRO (32, 1, 7, 32, __VA_ARGS__)	\
  MACRO (64, 1, 7, 64, __VA_ARGS__)	\

#define RVV_SEG_NF7_TEST_ARG(MACRO, ...)		\
  RVV_SEG_NF7_NO_SEW8_TEST_ARG(MACRO, __VA_ARGS__)	\
  MACRO (8, 1, 7, 8, __VA_ARGS__)	\

#define RVV_SEG_NF8_NO_SEW8_TEST_ARG(MACRO, ...) \
  MACRO (16, 1, 8, 16, __VA_ARGS__)	\
  MACRO (32, 1, 8, 32, __VA_ARGS__)	\
  MACRO (64, 1, 8, 64, __VA_ARGS__)	\

#define RVV_SEG_NF8_TEST_ARG(MACRO, ...)		\
  RVV_SEG_NF8_NO_SEW8_TEST_ARG(MACRO, __VA_ARGS__)	\
  MACRO (8, 1, 8, 8, __VA_ARGS__)	\

#define VLOAD(VCLASS, SEW, EM, x) vle##SEW##_v_##VCLASS##EM (x, vl)
#define VILOAD(SEW, EM, x) VLOAD(i, SEW, EM, x)
#define VULOAD(SEW, EM, x) VLOAD(u, SEW, EM, x)
#define VFLOAD(SEW, EM, x) VLOAD(f, SEW, EM, x)

#define VSTORE(VCLASS, SEW, EM, dst, x) vse##SEW##_v_##VCLASS##EM (dst, x, vl)
#define VISTORE(SEW, EM, dst, x) VSTORE(i, SEW, EM, dst, x)
#define VUSTORE(SEW, EM, dst, x) VSTORE(u, SEW, EM, dst, x)
#define VFSTORE(SEW, EM, dst, x) VSTORE(f, SEW, EM, dst, x)

#define VWSTORE vse##WSEW##_v_##VCLASS##WEM

#define MSET(MLEN) vmset_m_b##MLEN (vl)

#define RVV_UNARY_BUILTIN_VEC_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)	\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z, word_type vl)\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = v##OP##_v_##VCLASS##EM (vx, vl);			\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_UNARY_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASST, VCLASS,	\
					  EM, MLEN, STYPEC, SEW, OP)		\
  void rvv##OP##VCLASS##EM##_v_m_builtin_test(		\
	 size_t n, STYPE *x, STYPE *y, STYPE z, word_type vl)			\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = v##OP##_v_##VCLASS##EM##_m (mask, vy, vx, vl);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_BIN_BUILTIN_VEC_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)	\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z, word_type vl)\
  {								\
    v##VCLASST##EM##_t vx, vy;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    vy = v##OP##_vv_##VCLASS##EM (vx, vy, vl);			\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_BIN_OPERATOR_VEC_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, \
				  SEW, OP, OPERATOR)			\
  void rvv##OP##VCLASS##EM##_v_nomask_operator_test(		\
	 size_t n, STYPE *x, STYPE *y, STYPE z, word_type vl)			\
  {								\
    v##VCLASST##EM##_t vx, vy;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    vy = vx OPERATOR vy;					\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_BIN_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASST, VCLASS,		\
					EM, MLEN, STYPEC, SEW, OP)	\
  void rvv##OP##VCLASS##EM##_v_m_builtin_test(		\
	 size_t n, STYPE *x, STYPE *y, STYPE z, word_type vl)			\
  {								\
    v##VCLASST##EM##_t vx, vy;					\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = v##OP##_vv_##VCLASS##EM##_m (mask, vy, vx, vy, vl);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_BIN_BUILTIN_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)\
  void rvv##OP##VCLASS##EM##_s_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z, word_type vl)\
  {								\
    v##VCLASST##EM##_t vx, vy;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    vy = v##OP##_v##STYPEC##_##VCLASS##EM (vx, z, vl);			\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_BIN_OPERATOR_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, 	\
				     SEW, OP, OPERATOR)		\
  void rvv##OP##VCLASS##EM##_s_nomask_operator_test(size_t n, STYPE *x,\
						STYPE *y, STYPE z, word_type vl)\
  {								\
    v##VCLASST##EM##_t vx, vy;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    vy = vx OPERATOR z;						\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_BIN_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS,	\
					   EM, MLEN, STYPEC, SEW, OP)	\
  void rvv##OP##VCLASS##EM##_s_m_builtin_test(size_t n, STYPE *x,\
					     STYPE *y, STYPE z, word_type vl)	\
  {								\
    v##VCLASST##EM##_t vx, vy;					\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = v##OP##_v##STYPEC##_##VCLASS##EM##_m (mask, vy, vx, z, vl);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }


#define RVV_BIN_BUILTIN_IMM_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)	\
  void rvv##OP##VCLASS##EM##_i_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z, word_type vl)\
  {								\
    v##VCLASST##EM##_t vx, vy;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    vy = v##OP##_v##STYPEC##_##VCLASS##EM (vx, 11, vl);			\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_BIN_OPERATOR_IMM_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,	\
				  STYPEC, SEW, OP, OPERATOR)		\
  void rvv##OP##VCLASS##EM##_i_nomask_operator_test(size_t n, STYPE *x,\
					        STYPE *y, STYPE z, word_type vl)\
  {								\
    v##VCLASST##EM##_t vx, vy;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    vy = vx OPERATOR 11;					\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_BIN_BUILTIN_IMM_MASKED_TEST(STYPE, VCLASST, VCLASS,		\
					EM, MLEN, STYPEC, SEW, OP)	\
  void rvv##OP##VCLASS##EM##_i_m_builtin_test(size_t n, STYPE *x,\
					     STYPE *y, STYPE z, word_type vl)	\
  {								\
    v##VCLASST##EM##_t vx, vy;					\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = v##OP##_vx_##VCLASS##EM##_m (mask, vy, vx, 11, vl);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_BIN_BUILTIN_VEC_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM,	\
					    MLEN, STYPEC, SEW, OP)	\
  RVV_BIN_BUILTIN_VEC_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)		\
  RVV_BIN_BUILTIN_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)

#define RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST(STYPE, VCLASST, VCLASS, EM,	\
					    MLEN, STYPEC, SEW, OP)		\
  RVV_BIN_BUILTIN_VEC_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)	\
  RVV_BIN_BUILTIN_IMM_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)

#define RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS, EM,	\
					       MLEN, STYPEC, SEW, OP)		\
  RVV_BIN_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)	\
  RVV_BIN_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)

#define RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST(STYPE, VCLASST, VCLASS, EM,	\
						   MLEN, STYPEC, SEW, OP)		\
  RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)	\
  RVV_BIN_BUILTIN_IMM_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)

#define RVV_BIN_OPERATOR_VEC_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,	\
					 STYPEC, SEW, OP, OPERATOR) 			\
  RVV_BIN_OPERATOR_VEC_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP, OPERATOR)	\
  RVV_BIN_OPERATOR_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP, OPERATOR)

#define RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,	\
					     STYPEC, SEW, OP, OPERATOR) 		\
  RVV_BIN_OPERATOR_VEC_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP,		\
				   OPERATOR)				\
  RVV_BIN_OPERATOR_IMM_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP, OPERATOR)

#define RVV_TER_BUILTIN_VEC_TEST(STYPE, VCLASST, VCLASS,	EM, MLEN, STYPEC, SEW, OP)		\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,	\
						   STYPE *y, STYPE *z, word_type vl)	\
  {									\
    v##VCLASST##EM##_t vx, vy, vz;					\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vz = VLOAD(VCLASS, SEW, EM, z);					\
    vz = v##OP##_vv_##VCLASS##EM (vx, vy, vz, vl);			\
    VSTORE(VCLASS, SEW, EM, z, vz);						\
  }

#define RVV_TER_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASST, VCLASS,			\
					EM, MLEN, STYPEC, SEW, OP)			\
  void rvv##OP##VCLASS##EM##_v_m_builtin_test(			\
	 size_t n, STYPE *x, STYPE *y, STYPE z, word_type vl)				\
  {									\
    v##VCLASST##EM##_t vx, vy;					\
    vbool##MLEN##_t mask;						\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    mask = MSET (MLEN);					\
    vy = v##OP##_vv_##VCLASS##EM##_m (mask, vy, vy, vx, vy, vl);	\
    VSTORE(VCLASS, SEW, EM, y, vy);						\
  }

#define RVV_TER_BUILTIN_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)\
  void rvv##OP##VCLASS##EM##_s_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z, word_type vl)\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    vy = v##OP##_vx_##VCLASS##EM (vy, vx, z, vl);		\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_TER_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS,	\
					   EM, MLEN, STYPEC, SEW, OP)	\
  void rvv##OP##VCLASS##EM##_s_m_builtin_test(size_t n, STYPE *x,\
					     STYPE *y, STYPE z, word_type vl)	\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = v##OP##_vx_##VCLASS##EM##_m (mask, vy, vy, vx, z, vl);\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_MAC_BUILTIN_VEC_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)		\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,	\
						   STYPE *y, STYPE *z, word_type vl)	\
  {									\
    v##VCLASST##EM##_t vx, vy, vz;					\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vz = VLOAD(VCLASS, SEW, EM, z);					\
    vz = v##OP##_vv_##VCLASS##EM (vx, vy, vz, vl);			\
    VSTORE(VCLASS, SEW, EM, z, vz);						\
  }

#define RVV_MAC_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASST, VCLASS,			\
					EM, MLEN, STYPEC, SEW, OP)			\
  void rvv##OP##VCLASS##EM##_v_m_builtin_test(			\
	 size_t n, STYPE *x, STYPE *y, STYPE z, word_type vl)				\
  {									\
    v##VCLASST##EM##_t vx, vy;					\
    vbool##MLEN##_t mask;						\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    mask = MSET (MLEN);					\
    vy = v##OP##_vv_##VCLASS##EM##_m (mask, vy, vx, vy, vl);		\
    VSTORE(VCLASS, SEW, EM, y, vy);						\
  }

#define RVV_MAC_BUILTIN_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)\
  void rvv##OP##VCLASS##EM##_s_nomask_builtin_test(size_t n, STYPE *x,\
					       STYPE *y, STYPE z, word_type vl)\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    vy = v##OP##_v##STYPEC##_##VCLASS##EM (vy, z, vx, vl);		\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_MAC_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS,	\
					   EM, MLEN, STYPEC, SEW, OP)	\
  void rvv##OP##VCLASS##EM##_s_m_builtin_test(size_t n, STYPE *x,\
					     STYPE *y, STYPE z, word_type vl)	\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = v##OP##_v##STYPEC##_##VCLASS##EM##_m (mask, vy, z, vx, vl);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }


#define RVV_TER_BUILTIN_VEC_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS,		\
					       EM, MLEN, STYPEC, SEW, OP)		\
  RVV_TER_BUILTIN_VEC_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)			\
  RVV_TER_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)		\
  RVV_TER_BUILTIN_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)		\
  RVV_TER_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)

#define RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS,		\
					       EM, MLEN, STYPEC, SEW, OP)		\
  RVV_MAC_BUILTIN_VEC_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)			\
  RVV_MAC_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)		\
  RVV_MAC_BUILTIN_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)		\
  RVV_MAC_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)

#define RVV_NINT_BIN_BUILTIN_VEC_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,		\
				      WSTYPE, WEM, STYPEC, SEW, WSEW, OP)	\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, WSTYPE *x,	\
					       STYPE *y, STYPE z, word_type vl)	\
  {									\
    v##VCLASST##WEM##_t vx;						\
    v##VCLASST##EM##_t vy;						\
    vx = VLOAD(VCLASS, WSEW, WEM, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vy = v##OP##_wv_##VCLASS##EM (vx, vy, vl);				\
    VSTORE(VCLASS, SEW, EM, y, vy);						\
  }

#define RVV_NINT_BIN_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,	\
					     WSTYPE, WEM, STYPEC, SEW, WSEW, OP)\
  void rvv##OP##VCLASS##EM##_v_m_builtin_test(		\
	 size_t n, WSTYPE *x, STYPE *y, STYPE z, word_type vl)			\
  {								\
    v##VCLASST##WEM##_t vx;					\
    v##VCLASST##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, WSEW, WEM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = v##OP##_wv_##VCLASS##EM##_m (mask, vy, vx, vy, vl);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_NINT_BIN_BUILTIN_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,\
				      WSTYPE, WEM, STYPEC, SEW, WSEW, OP)	\
  void rvv##OP##VCLASS##EM##_s_nomask_builtin_test(size_t n, WSTYPE *x,\
					       STYPE *y, STYPE z, word_type vl)\
  {								\
    v##VCLASST##WEM##_t vx;					\
    v##VCLASST##EM##_t vy;					\
    vx = VLOAD(VCLASS, WSEW, WEM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    vy = v##OP##_w##STYPEC##_##VCLASS##EM (vx, z, vl);			\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_NINT_BIN_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,\
				      WSTYPE, WEM, STYPEC, SEW, WSEW, OP)		\
  void rvv##OP##VCLASS##EM##_s_m_builtin_test(size_t n, WSTYPE *x,\
					     STYPE *y, STYPE z, word_type vl)	\
  {								\
    v##VCLASST##WEM##_t vx;					\
    v##VCLASST##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, WSEW, WEM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = v##OP##_w##STYPEC##_##VCLASS##EM##_m (mask, vy, vx, z, vl);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_NINT_BIN_BUILTIN_IMM_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,\
				      WSTYPE, WEM, STYPEC, SEW, WSEW, OP)	\
  void rvv##OP##VCLASS##EM##_i_nomask_builtin_test(size_t n, WSTYPE *x,\
					       STYPE *y, STYPE z, word_type vl)\
  {								\
    v##VCLASST##WEM##_t vx;					\
    v##VCLASST##EM##_t vy;					\
    vx = VLOAD(VCLASS, WSEW, WEM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    vy = v##OP##_w##STYPEC##_##VCLASS##EM (vx, 11, vl);			\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_NINT_BIN_BUILTIN_IMM_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,\
				      WSTYPE, WEM, STYPEC, SEW, WSEW, OP)	\
  void rvv##OP##VCLASS##EM##_i_m_builtin_test(size_t n, WSTYPE *x,\
					     STYPE *y, STYPE z, word_type vl)	\
  {								\
    v##VCLASST##WEM##_t vx;					\
    v##VCLASST##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, WSEW, WEM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = v##OP##_w##STYPEC##_##VCLASS##EM##_m (mask, vy, vx, 11, vl);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }



#define RVV_NINT_BIN_BUILTIN_VEC_SCALAR_IMM_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,\
						       WSTYPE, WEM, STYPEC, SEW, OP)	\
  RVV_NINT_BIN_BUILTIN_VEC_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, OP)\
  RVV_NINT_BIN_BUILTIN_IMM_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, OP)\
  RVV_NINT_BIN_BUILTIN_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, OP)

#define RVV_NINT_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,\
						       WSTYPE, WEM, STYPEC, SEW, OP)		\
  RVV_NINT_BIN_BUILTIN_IMM_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, OP)\
  RVV_NINT_BIN_BUILTIN_VEC_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, OP)\
  RVV_NINT_BIN_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, OP)

#define RVV_SHIFT_VEC_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       uint##SEW##_t *y, STYPE z, word_type vl)\
  {								\
    v##VCLASST##EM##_t vx;					\
    vuint##EM##_t vy;						\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VULOAD(SEW, EM, y);				\
    vx = v##OP##_vv_##VCLASS##EM (vx, vy, vl);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  RVV_BIN_BUILTIN_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)

#define RVV_SHIFT_VEC_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)\
  void rvv##OP##VCLASS##EM##_v_m_builtin_test(		\
	 size_t n, uint##SEW##_t *x, STYPE *y, STYPE z, word_type vl)		\
  {								\
    v##VCLASST##EM##_t vy;					\
    vuint##EM##_t vx;						\
    vbool##MLEN##_t mask;					\
    vx = VULOAD(SEW, EM, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    mask = MSET (MLEN);					\
    vy = v##OP##_vv_##VCLASS##EM##_m (mask, vy, vy, vx, vl);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }								\
  RVV_BIN_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)

#define RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,\
						   WSTYPE, WEM, STYPEC, SEW, WSEW, OP)\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, WSTYPE *x,	\
					       uint##SEW##_t *z, STYPE *y, word_type vl)\
  {									\
    v##VCLASST##WEM##_t vx;						\
    v##VCLASST##EM##_t vy;						\
    vuint##EM##_t vz;							\
    vx = VLOAD(VCLASS, WSEW, WEM, x);					\
    vz = VULOAD(SEW, EM, z);						\
    vy = v##OP##_wv_##VCLASS##EM (vx, vz, vl);				\
    VSTORE(VCLASS, SEW, EM, y, vy);						\
  }									\
  RVV_NINT_BIN_BUILTIN_IMM_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP)\
  RVV_NINT_BIN_BUILTIN_SCALAR_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP)

#define RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN,\
							  WSTYPE, WEM, STYPEC, SEW, WSEW, OP)	\
  void rvv##OP##VCLASS##EM##_v_m_builtin_test(		\
	 size_t n, WSTYPE *x, STYPE *y, uint##SEW##_t *z, word_type vl)	\
  {								\
    v##VCLASST##WEM##_t vx;					\
    v##VCLASST##EM##_t vy;					\
    vuint##EM##_t vz;						\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, WSEW, WEM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vz = VULOAD(SEW, EM, z);					\
    mask = MSET (MLEN);					\
    vy = v##OP##_wv_##VCLASS##EM##_m (mask, vy, vx, vz, vl);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }								\
  RVV_NINT_BIN_BUILTIN_IMM_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP)\
  RVV_NINT_BIN_BUILTIN_SCALAR_MASKED_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP)
