/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VREDUC(STYPE, VCLASST, VCLASS, EM, EMONE, MLEN, SEW)		\
  void vreduc##VCLASS##EM(size_t n, STYPE *x, STYPE *y, word_type vl) {		\
    v##VCLASST##EMONE##_t vx;						\
    v##VCLASST##EM##_t vy;						\
    vx = VLOAD (VCLASS, SEW, EMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vx = vredsum_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    vx = vredmax_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    vx = vredmin_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    vx = vredand_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    vx = vredor_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);		\
    vx = vredxor_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    VSTORE (VCLASS, SEW, EMONE, x, vx);					\
  }
#define VREDUCU(STYPE, VCLASST, VCLASS, EM, EMONE, MLEN, SEW)		\
  void vreduc##VCLASS##EM(size_t n, STYPE *x, STYPE *y, word_type vl) {		\
    v##VCLASST##EMONE##_t vx;						\
    v##VCLASST##EM##_t vy;						\
    vx = VLOAD (VCLASS, SEW, EMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vx = vredsum_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    vx = vredmaxu_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    vx = vredminu_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    vx = vredand_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    vx = vredor_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);		\
    vx = vredxor_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    VSTORE (VCLASS, SEW, EMONE, x, vx);					\
  }

#define VFREDUC(STYPE, VCLASST, VCLASS, EM, EMONE, MLEN, SEW)		\
  void vreduc##VCLASS##EM(size_t n, STYPE *x, STYPE *y, word_type vl) {		\
    v##VCLASST##EMONE##_t vx;						\
    v##VCLASST##EM##_t vy;						\
    vx = VLOAD (VCLASS, SEW, EMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vx = vfredusum_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    vx = vfredosum_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    vx = vfredmax_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    vx = vfredmin_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx, vl);	\
    VSTORE (VCLASS, SEW, EMONE, x, vx);					\
  }

RVV_INT_REDUC_TEST(VREDUC)
RVV_UINT_REDUC_TEST(VREDUCU)
RVV_FLOAT_REDUC_TEST(VFREDUC)

/* { dg-final { scan-assembler-times "vredsum.vs" 44 } } */
/* { dg-final { scan-assembler-times "vredmaxu.vs" 22 } } */
/* { dg-final { scan-assembler-times "vredmax.vs" 22 } } */
/* { dg-final { scan-assembler-times "vredminu.vs" 22 } } */
/* { dg-final { scan-assembler-times "vredmin.vs" 22 } } */
/* { dg-final { scan-assembler-times "vredand.vs" 44 } } */
/* { dg-final { scan-assembler-times "vredor.vs" 44 } } */
/* { dg-final { scan-assembler-times "vredxor.vs" 44 } } */
/* { dg-final { scan-assembler-times "vfredusum.vs" 15 } } */
/* { dg-final { scan-assembler-times "vfredosum.vs" 15 } } */
/* { dg-final { scan-assembler-times "vfredmax.vs" 15 } } */
/* { dg-final { scan-assembler-times "vfredmin.vs" 15 } } */
