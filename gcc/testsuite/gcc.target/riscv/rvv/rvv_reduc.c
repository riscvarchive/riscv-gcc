/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VREDUC(STYPE, VCLASST, VCLASS, EM, EMONE, MLEN, SEW)		\
  void vreduc##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {		\
    v##VCLASST##EMONE##_t vx;						\
    v##VCLASST##EM##_t vy;						\
    vx = VLOAD (VCLASS, SEW, EMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vx = vredsum_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    vx = vredmax_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    vx = vredmin_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    vx = vredand_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    vx = vredor_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);		\
    vx = vredxor_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    VSTORE (VCLASS, SEW, EMONE, x, vx);					\
  }
#define VREDUCU(STYPE, VCLASST, VCLASS, EM, EMONE, MLEN, SEW)		\
  void vreduc##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {		\
    v##VCLASST##EMONE##_t vx;						\
    v##VCLASST##EM##_t vy;						\
    vx = VLOAD (VCLASS, SEW, EMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vx = vredsum_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    vx = vredmaxu_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    vx = vredminu_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    vx = vredand_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    vx = vredor_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);		\
    vx = vredxor_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    VSTORE (VCLASS, SEW, EMONE, x, vx);					\
  }

#define VFREDUC(STYPE, VCLASST, VCLASS, EM, EMONE, MLEN, SEW)		\
  void vreduc##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {		\
    v##VCLASST##EMONE##_t vx;						\
    v##VCLASST##EM##_t vy;						\
    vx = VLOAD (VCLASS, SEW, EMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vx = vfredsum_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    vx = vfredosum_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    vx = vfredmax_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    vx = vfredmin_vs_##VCLASS##EM##_##VCLASS##EMONE (vx, vy, vx);	\
    VSTORE (VCLASS, SEW, EMONE, x, vx);					\
  }

RVV_INT_REDUC_TEST(VREDUC)
RVV_UINT_REDUC_TEST(VREDUCU)
RVV_FLOAT_REDUC_TEST(VFREDUC)

/* { dg-final { scan-assembler-times "vredsum.vs" 32 } } */
/* { dg-final { scan-assembler-times "vredmaxu.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredmax.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredminu.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredmin.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredand.vs" 32 } } */
/* { dg-final { scan-assembler-times "vredor.vs" 32 } } */
/* { dg-final { scan-assembler-times "vredxor.vs" 32 } } */
/* { dg-final { scan-assembler-times "vfredsum.vs" 12 } } */
/* { dg-final { scan-assembler-times "vfredosum.vs" 12 } } */
/* { dg-final { scan-assembler-times "vfredmax.vs" 12 } } */
/* { dg-final { scan-assembler-times "vfredmin.vs" 12 } } */
