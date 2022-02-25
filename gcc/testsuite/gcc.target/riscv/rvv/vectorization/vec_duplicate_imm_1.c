/* { dg-do compile } */
/* { dg-additional-options "-O3 -fno-tree-loop-distribute-patterns" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define NUM_ELEMS(TYPE) (1024 / sizeof (TYPE))

#define DEF_SET_IMM(TYPE, IMM, SUFFIX)		\
void __attribute__ ((noinline, noclone))	\
set_##TYPE##_##SUFFIX (TYPE *a)			\
{						\
  for (int i = 0; i < NUM_ELEMS (TYPE); i++)	\
    a[i] = IMM;					\
}

DEF_SET_IMM (int8_t, 0, imm_0)
DEF_SET_IMM (int16_t, 0, imm_0)
DEF_SET_IMM (int32_t, 0, imm_0)
DEF_SET_IMM (int64_t, 0, imm_0)

DEF_SET_IMM (int8_t, -1, imm_m1)
DEF_SET_IMM (int16_t, -1, imm_m1)
DEF_SET_IMM (int32_t, -1, imm_m1)
DEF_SET_IMM (int64_t, -1, imm_m1)

DEF_SET_IMM (int8_t, 1, imm_1)
DEF_SET_IMM (int16_t, 1, imm_1)
DEF_SET_IMM (int32_t, 1, imm_1)
DEF_SET_IMM (int64_t, 1, imm_1)

DEF_SET_IMM (int8_t, -16, imm_m16)
DEF_SET_IMM (int16_t, -16, imm_m16)
DEF_SET_IMM (int32_t, -16, imm_m16)
DEF_SET_IMM (int64_t, -16, imm_m16)

DEF_SET_IMM (int8_t, 15, imm_15)
DEF_SET_IMM (int16_t, 15, imm_15)
DEF_SET_IMM (int32_t, 15, imm_15)
DEF_SET_IMM (int64_t, 15, imm_15)

/* { dg-final { scan-assembler-times {\tvmv.v.i} 20 } } */