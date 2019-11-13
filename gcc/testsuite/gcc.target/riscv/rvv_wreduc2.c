/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWREDUC(STYPE, VCLASS, EM, MLEN, WSTYPE, WEMONE)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, STYPE *z) {	\
    rvv##VCLASS##WEMONE##_t vx;						\
    rvv##VCLASS##EM##_t vy, vz;						\
    rvvbool##MLEN##_t mask;						\
    vx = rvvld##VCLASS##WEMONE (x);					\
    vy = rvvld##VCLASS##EM (y);						\
    vz = rvvld##VCLASS##EM (z);						\
    mask = rvvslt##VCLASS##EM (vy, vz);					\
    vx = rvv_wredsum_wv_##VCLASS##EM##_mask (mask, vx, vx, vy);		\
    rvvst##VCLASS##WEMONE (x, vx);					\
  }
#define VWREDUCU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEMONE)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, STYPE *z) {	\
    rvv##VCLASS##WEMONE##_t vx;						\
    rvv##VCLASS##EM##_t vy, vz;						\
    rvvbool##MLEN##_t mask;						\
    vx = rvvld##VCLASS##WEMONE (x);					\
    vy = rvvld##VCLASS##EM (y);						\
    vz = rvvld##VCLASS##EM (z);						\
    mask = rvvsltu##VCLASS##EM (vy, vz);				\
    vx = rvv_wredsumu_wv_##VCLASS##EM##_mask (mask, vx, vx, vy);	\
    rvvst##VCLASS##WEMONE (x, vx);					\
  }
#define VFWREDUC(STYPE, VCLASS, EM, MLEN, WSTYPE, WEMONE)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, STYPE *z) {	\
    rvv##VCLASS##WEMONE##_t vx;						\
    rvv##VCLASS##EM##_t vy, vz;						\
    rvvbool##MLEN##_t mask;						\
    vx = rvvld##VCLASS##WEMONE (x);					\
    vy = rvvld##VCLASS##EM (y);						\
    vz = rvvld##VCLASS##EM (z);						\
    mask = rvv_mset_bool##MLEN ();					\
    vx = rvv_fwredsum_wv_##VCLASS##EM##_mask (mask, vx, vx, vy);	\
    vx = rvv_fwredosum_wv_##VCLASS##EM##_mask (mask, vx, vx, vy);	\
    rvvst##VCLASS##WEMONE (x, vx);					\
  }

RVV_WINT_REDUC_TEST(VWREDUC)
RVV_WUINT_REDUC_TEST(VWREDUCU)
RVV_WFLOAT_REDUC_TEST(VFWREDUC)

/* { dg-final { scan-assembler-times "vwredsum.vs" 9 } } */
/* { dg-final { scan-assembler-times "vwredsumu.vs" 9 } } */
