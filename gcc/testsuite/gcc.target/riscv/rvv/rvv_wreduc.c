/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), an
   the e and m value.  */
#define VWREDUC(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEMONE, SEW, WSEW)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, word_type vl) {		\
    v##VCLASST##WEMONE##_t vx;						\
    v##VCLASST##EM##_t vy;						\
    vx = VLOAD(VCLASS, WSEW, WEMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vx = vwredsum_vs_##VCLASS##EM##_##VCLASS##WEMONE (vx, vy, vx, vl);		\
    VSTORE (VCLASS, WSEW, WEMONE, x, vx);					\
  }

#define VWREDUCU(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEMONE, SEW, WSEW)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, word_type vl) {		\
    v##VCLASST##WEMONE##_t vx;						\
    v##VCLASST##EM##_t vy;						\
    vx = VLOAD(VCLASS, WSEW, WEMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vx = vwredsumu_vs_##VCLASS##EM##_##VCLASS##WEMONE (vx, vy, vx, vl);		\
    VSTORE (VCLASS, WSEW, WEMONE, x, vx);					\
  }

#define VFWREDUC(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEMONE, SEW, WSEW)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, word_type vl) {		\
    v##VCLASST##WEMONE##_t vx;						\
    v##VCLASST##EM##_t vy;						\
    vx = VLOAD(VCLASS, WSEW, WEMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vx = vfwredusum_vs_##VCLASS##EM##_##VCLASS##WEMONE (vx, vy, vx, vl);		\
    vx = vfwredosum_vs_##VCLASS##EM##_##VCLASS##WEMONE (vx, vy, vx, vl);	\
    VSTORE (VCLASS, WSEW, WEMONE, x, vx);					\
  }

RVV_WINT_REDUC_TEST(VWREDUC)
RVV_WUINT_REDUC_TEST(VWREDUCU)
RVV_WFLOAT_REDUC_TEST(VFWREDUC)

/* { dg-final { scan-assembler-times "vwredsum.vs" 15 } } */
/* { dg-final { scan-assembler-times "vwredsumu.vs" 15 } } */
/* { dg-final { scan-assembler-times "vfwredusum.vs" 9 } } */
/* { dg-final { scan-assembler-times "vfwredosum.vs" 9 } } */
