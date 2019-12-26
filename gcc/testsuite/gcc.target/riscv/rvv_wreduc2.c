/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWREDUC(STYPE, VCLASS, EM, MLEN, WSTYPE, WEMONE)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, STYPE *z) {	\
    v##VCLASS##WEMONE##_t vx;						\
    v##VCLASS##EM##_t vy, vz;						\
    vbool##MLEN##_t mask;						\
    vx = vload_##VCLASS##WEMONE (x);					\
    vy = vload_##VCLASS##EM (y);					\
    vz = vload_##VCLASS##EM (z);					\
    mask = vslt_vv_##VCLASS##EM (vy, vz);				\
    vx = vwredsum_vs_##VCLASS##EM##_mask (mask, vy, vx);		\
    vstore_##VCLASS##WEMONE (x, vx);					\
  }
#define VWREDUCU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEMONE)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, STYPE *z) {	\
    v##VCLASS##WEMONE##_t vx;						\
    v##VCLASS##EM##_t vy, vz;						\
    vbool##MLEN##_t mask;						\
    vx = vload_##VCLASS##WEMONE (x);					\
    vy = vload_##VCLASS##EM (y);					\
    vz = vload_##VCLASS##EM (z);					\
    mask = vslt_vv_##VCLASS##EM (vy, vz);				\
    vx = vwredsum_vs_##VCLASS##EM##_mask (mask, vy, vx);	\
    vstore_##VCLASS##WEMONE (x, vx);					\
  }
#define VFWREDUC(STYPE, VCLASS, EM, MLEN, WSTYPE, WEMONE)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, STYPE *z) {	\
    v##VCLASS##WEMONE##_t vx;						\
    v##VCLASS##EM##_t vy, vz;						\
    vbool##MLEN##_t mask;						\
    vx = vload_##VCLASS##WEMONE (x);					\
    vy = vload_##VCLASS##EM (y);					\
    vz = vload_##VCLASS##EM (z);					\
    mask = vset_bool##MLEN ();					\
    vx = vwredsum_vs_##VCLASS##EM##_mask (mask, vy, vx);	\
    vx = vwredosum_vs_##VCLASS##EM##_mask (mask, vy, vx);	\
    vstore_##VCLASS##WEMONE (x, vx);					\
  }

RVV_WINT_REDUC_TEST(VWREDUC)
RVV_WUINT_REDUC_TEST(VWREDUCU)
RVV_WFLOAT_REDUC_TEST(VFWREDUC)

/* { dg-final { scan-assembler-times "vwredsum.vs" 9 } } */
/* { dg-final { scan-assembler-times "vwredsumu.vs" 9 } } */
