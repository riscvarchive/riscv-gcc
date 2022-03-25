/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */


#include <stdint.h>

#define TEST_LOOP(TYPE1, TYPE2)			                                \
  void __attribute__ ((noinline, noclone))			                                            \
  f_##TYPE1##_##TYPE2 (TYPE1  a,TYPE1  b,		\
    			   TYPE2 *restrict c, TYPE2 *restrict d, TYPE2 *restrict e,int n)	     \
  {								                                                                \
     for (int i = 0; i < 64; ++i)					                                \
          e[i] = a < b ? c[i] : d[i];				                                            \
  }

#define TEST_TYPE_1(T, TYPE1)			        \
  T (TYPE1, int8_t)				\
  T (TYPE1, uint8_t)				\
  T (TYPE1, int16_t)				\
  T (TYPE1, uint16_t)				\
  T (TYPE1, int32_t)				\
  T (TYPE1, uint32_t)				\
  T (TYPE1, int64_t)			    \
  T (TYPE1, uint64_t)			    \
  T (TYPE1, __fp16)		        \
  T (TYPE1, float)			        \
  T (TYPE1, double)			

#define TEST_ALL(T)				    \
  TEST_TYPE_1 (T, int8_t)				\
  TEST_TYPE_1 (T, uint8_t)				\
  TEST_TYPE_1 (T, int16_t)				\
  TEST_TYPE_1 (T, uint16_t)				\
  TEST_TYPE_1 (T, int32_t)				\
  TEST_TYPE_1 (T, uint32_t)				\
  TEST_TYPE_1 (T, int64_t)			    \
  TEST_TYPE_1 (T, uint64_t)			    \
  TEST_TYPE_1 (T, __fp16)		        \
  TEST_TYPE_1 (T, float)			        \
  TEST_TYPE_1 (T, double)			

TEST_ALL (TEST_LOOP)
        
/* { dg-final { scan-assembler-times "\tvmsne\.vi" 242 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times "\tvmsge\.vx" 24 {target riscv32-*-*} } } */

/* { dg-final { scan-assembler-times "\tvmsge\.vv" 20 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times "\tvmsgeu\.vx" 24 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times "\tvmsgeu\.vv" 20 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times "\tvmfge\.vf" 33 {target riscv32-*-*} } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 121 "optimized" {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times "\tvmsne\.vi" 242 {target riscv64-*-*} } } */
/* { dg-final { scan-assembler-times "\tvmsge\.vx" 44 {target riscv64-*-*} } } */

/* { dg-final { scan-assembler-times "\tvmsgeu\.vx" 44 {target riscv64-*-*} } } */
/* { dg-final { scan-assembler-times "\tvmfge\.vf" 33 {target riscv64-*-*} } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 121 "optimized" {target riscv64-*-*} } } */
