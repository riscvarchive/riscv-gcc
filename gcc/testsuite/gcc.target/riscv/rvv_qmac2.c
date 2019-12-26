/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWMAC_VV(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP, OP0U, OP1U, OP2U)   \
  void v##OP##VCLASS##EM##OP0U##_##OP1U##_##OP2U(size_t n,                     \
                                                 OP1U##STYPE *op1,             \
                                                 OP2U##STYPE *op2,             \
                                                 OP0U##WSTYPE * mo,            \
                                                 OP0U##WSTYPE * op0) {         \
    v##OP1U##VCLASS##EM##_t vop1;                                           \
    v##OP2U##VCLASS##EM##_t vop2;                                           \
    v##OP0U##VCLASS##WEM##_t vop0, vmo;                                     \
    vbool##MLEN##_t mask;                                                   \
    mask = vset_bool##MLEN ();                                             \
    vop0 = vle_##OP0U##VCLASS##WEM(op0);                                    \
    vmo = vle_##OP0U##VCLASS##WEM(mo);                                      \
    vop1 = vle_##OP1U##VCLASS##EM(op1);                                     \
    vop2 = vle_##OP2U##VCLASS##EM(op2);                                     \
    vop0 = v##OP##_vv_##OP0U##VCLASS##EM##_mask (mask, vop0, vop1, vop2);   \
    vse_##OP0U##VCLASS##WEM(op0, vop0);                                     \
  }

#define VWMAC_VX(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP, OP0U, OP1U, OP2U)   \
  void x##OP##VCLASS##EM##OP0U##_##OP1U##_##OP2U(size_t n,                     \
                                                 OP1U##STYPE  op1,             \
                                                 OP2U##STYPE *op2,             \
                                                 OP0U##WSTYPE * mo,            \
                                                 OP0U##WSTYPE * op0) {         \
    v##OP2U##VCLASS##EM##_t vop2;                                           \
    v##OP0U##VCLASS##WEM##_t vop0, vmo;                                     \
    vbool##MLEN##_t mask;                                                   \
    mask = vset_bool##MLEN ();                                             \
    vop0 = vle_##OP0U##VCLASS##WEM(op0);                                    \
    vmo = vle_##OP0U##VCLASS##WEM(mo);                                      \
    vop2 = vle_##OP2U##VCLASS##EM(op2);                                     \
    vop0 = v##OP##_sv_##OP0U##VCLASS##EM##_mask (mask, vop0, op1, vop2);    \
    vse_##OP0U##VCLASS##WEM(op0, vop0);                                     \
  }

#define VWMAC(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP, OP0U, OP1U, OP2U)   \
  VWMAC_VV(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP, OP0U, OP1U, OP2U)      \
  VWMAC_VX(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP, OP0U, OP1U, OP2U)

RVV_QINT_TEST_ARG(VWMAC,      qmacc,  ,  ,  )
RVV_QINT_TEST_ARG(VWMAC,      qmacc, u, u, u)
RVV_QINT_TEST_ARG(VWMAC,    qmaccsu,  ,  , u)
RVV_QINT_TEST_ARG(VWMAC_VX, qmaccus,  , u,  )

/* { dg-final { scan-assembler-times "vqmacc.vv" 4 } } */
/* { dg-final { scan-assembler-times "vqmacc.vx" 4 } } */
/* { dg-final { scan-assembler-times "vqmaccu.vv" 4 } } */
/* { dg-final { scan-assembler-times "vqmaccu.vx" 4 } } */
/* { dg-final { scan-assembler-times "vqmaccsu.vv" 4 } } */
/* { dg-final { scan-assembler-times "vqmaccsu.vx" 4 } } */
/* { dg-final { scan-assembler-times "vqmaccus.vx" 4 } } */
