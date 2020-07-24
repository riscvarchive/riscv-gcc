/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWREDUC(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEMONE, SEW, WSEW)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, STYPE *z) {	\
    v##VCLASST##WEMONE##_t vx;						\
    v##VCLASST##EM##_t vy, vz;						\
    vbool##MLEN##_t mask;						\
    vx = VLOAD(VCLASS, WSEW, WEMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vz = VLOAD(VCLASS, SEW, EM, z);					\
    mask = vmslt_vv_##VCLASS##EM##_b##MLEN (vy, vz);		\
    vx = vwredsum_vs_##VCLASS##EM##_##VCLASS##WEMONE##_m (mask, vx, vy, vx);\
    VSTORE (VCLASS, WSEW, WEMONE, x, vx);					\
  }
#define VWREDUCU(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEMONE, SEW, WSEW)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, STYPE *z) {	\
    v##VCLASST##WEMONE##_t vx;						\
    v##VCLASST##EM##_t vy, vz;						\
    vbool##MLEN##_t mask;						\
    vx = VLOAD(VCLASS, WSEW, WEMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vz = VLOAD(VCLASS, SEW, EM, z);					\
    mask = vmsltu_vv_##VCLASS##EM##_b##MLEN (vy, vz);		\
    vx = vwredsumu_vs_##VCLASS##EM##_##VCLASS##WEMONE##_m (mask, vx, vy, vx);\
    VSTORE (VCLASS, WSEW, WEMONE, x, vx);					\
  }
#define VFWREDUC(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEMONE, SEW, WSEW)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, STYPE *z) {	\
    v##VCLASST##WEMONE##_t vx;						\
    v##VCLASST##EM##_t vy, vz;						\
    vbool##MLEN##_t mask;						\
    vx = VLOAD(VCLASS, WSEW, WEMONE, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vz = VLOAD(VCLASS, SEW, EM, z);					\
    mask = MSET (MLEN);					\
    vx = vfwredsum_vs_##VCLASS##EM##_##VCLASS##WEMONE##_m (mask, vx, vy, vx);	\
    vx = vfwredosum_vs_##VCLASS##EM##_##VCLASS##WEMONE##_m (mask, vx, vy, vx);	\
    VSTORE (VCLASS, WSEW, WEMONE, x, vx);					\
  }

RVV_WINT_REDUC_TEST(VWREDUC)
RVV_WUINT_REDUC_TEST(VWREDUCU)
RVV_WFLOAT_REDUC_TEST(VFWREDUC)

/* { dg-final { scan-assembler-times "vwredsum.vs" 9 } } */
/* { dg-final { scan-assembler-times "vwredsumu.vs" 9 } } */
/* { dg-final { scan-assembler-times "vfwredsum.vs" 6 } } */
/* { dg-final { scan-assembler-times "vfwredosum.vs" 6 } } */
