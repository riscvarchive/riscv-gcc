/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWMAC_VV(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)		\
  void v##OP##VCLASS##EM(size_t n, STYPE *op1, STYPE *op2, WSTYPE * op0,\
			 WSTYPE *mo)					\
  {									\
    v##VCLASS##EM##_t vop1;						\
    v##VCLASS##EM##_t vop2;						\
    v##VCLASS##WEM##_t vop0, vmo;					\
    vbool##MLEN##_t mask;						\
    mask = vset_bool##MLEN ();					\
    vop0 = vload_##VCLASS##WEM(op0);					\
    vmo = vload_##VCLASS##WEM(mo);					\
    vop1 = vload_##VCLASS##EM(op1);					\
    vop2 = vload_##VCLASS##EM(op2);					\
    vop0 = v##OP##_vv_##VCLASS##EM##_mask (mask, vop0, vop1,		\
					      vop2);			\
    vstore_##VCLASS##WEM(op0, vop0);					\
  }

#define VWMAC_VX(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)		\
  void x##OP##VCLASS##EM(size_t n, STYPE  op1, STYPE *op2, WSTYPE * op0,\
			 WSTYPE *mo)					\
  {									\
    v##VCLASS##EM##_t vop2;						\
    v##VCLASS##WEM##_t vop0, vmo;					\
    vbool##MLEN##_t mask;						\
    mask = vset_bool##MLEN ();					\
    vop0 = vload_##VCLASS##WEM(op0);					\
    vmo = vload_##VCLASS##WEM(mo);					\
    vop2 = vload_##VCLASS##EM(op2);					\
    vop0 = v##OP##_sv_##VCLASS##EM##_mask (mask, vop0, op1,		\
					      vop2);			\
    vstore_##VCLASS##WEM(op0, vop0);					\
  }

#define VWMAC(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)   \
  VWMAC_VV(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)      \
  VWMAC_VX(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)

RVV_WFLOAT_TEST_ARG(VWMAC, wmacc)
RVV_WFLOAT_TEST_ARG(VWMAC, wnmacc)
RVV_WFLOAT_TEST_ARG(VWMAC, wmsac)
RVV_WFLOAT_TEST_ARG(VWMAC, wnmsac)

/* { dg-final { scan-assembler-times "vfwmacc.vv" 6 } } */
/* { dg-final { scan-assembler-times "vfwmacc.vf" 6 } } */
/* { dg-final { scan-assembler-times "vfwnmacc.vv" 6 } } */
/* { dg-final { scan-assembler-times "vfwnmacc.vf" 6 } } */
/* { dg-final { scan-assembler-times "vfwmsac.vv" 6 } } */
/* { dg-final { scan-assembler-times "vfwmsac.vf" 6 } } */
/* { dg-final { scan-assembler-times "vfwnmsac.vv" 6 } } */
/* { dg-final { scan-assembler-times "vfwnmsac.vf" 6 } } */
