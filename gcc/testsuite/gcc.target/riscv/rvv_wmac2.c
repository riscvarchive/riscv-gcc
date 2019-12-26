/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWMAC_VV(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, OP, OP0U, OP1U, OP2U, OP0T, OP1T, OP2T)   \
  void v##OP##VCLASS##EM##OP0U##_##OP1U##_##OP2U(size_t n,                     \
                                                 OP1T##STYPE *op1,             \
                                                 OP2T##STYPE *op2,             \
                                                 OP0T##WSTYPE * mo,            \
                                                 OP0T##WSTYPE * op0) {         \
    v##OP1T##int##EM##_t vop1;                                           \
    v##OP2T##int##EM##_t vop2;                                           \
    v##OP0T##int##WEM##_t vop0, vmo;                                         \
    vbool##MLEN##_t mask;                                                   \
    mask = vset_b##MLEN ();                                             \
    vop0 = vload_##OP0U##WEM(op0);                                    \
    vmo = vload_##OP0U##WEM(mo);                                      \
    vop1 = vload_##OP1U##EM(op1);                                     \
    vop2 = vload_##OP2U##EM(op2);                                     \
    vop0 = v##OP##_vv_##OP0U##EM##_mask (mask, vop0, vop1, vop2); \
    vstore_##OP0U##WEM(op0, vop0);                                     \
  }

#define VWMAC_VX(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, OP, OP0U, OP1U, OP2U, OP0T, OP1T, OP2T)   \
  void x##OP##VCLASS##EM##OP0U##_##OP1U##_##OP2U(size_t n,                     \
                                                 OP1T##STYPE  op1,             \
                                                 OP2T##STYPE *op2,             \
						 OP0T##WSTYPE * mo,            \
                                                 OP0T##WSTYPE * op0) {         \
    v##OP2T##int##EM##_t vop2;                                           \
    v##OP0T##int##WEM##_t vop0, vmo;                                          \
    vbool##MLEN##_t mask;                                                   \
    mask = vset_b##MLEN ();                                             \
    vop0 = vload_##OP0U##WEM(op0);                                    \
    vmo = vload_##OP0U##WEM(mo);                                      \
    vop2 = vload_##OP2U##EM(op2);                                     \
    vop0 = v##OP##_sv_##OP0U##EM##_mask (mask, vop0, op1, vop2); \
    vstore_##OP0U##WEM(op0, vop0);                                     \
  }

#define VWMAC(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, OP, OP0U, OP1U, OP2U, OP0T, OP1T, OP2T)   \
  VWMAC_VV(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, OP, OP0U, OP1U, OP2U, OP0T, OP1T, OP2T)      \
  VWMAC_VX(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, OP, OP0U, OP1U, OP2U, OP0T, OP1T, OP2T)

RVV_WINT_TEST_ARG(VWMAC,      wmacc, i, i, i,  ,  ,  )
RVV_WINT_TEST_ARG(VWMAC,      wmacc, u, u, u, u, u, u)
RVV_WINT_TEST_ARG(VWMAC,    wmaccsu, i, i, u,  ,  , u)
RVV_WINT_TEST_ARG(VWMAC_VX, wmaccus, i, u, i,  , u,  )

/* { dg-final { scan-assembler-times "vwmacc.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwmacc.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwmaccu.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwmaccu.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwmaccsu.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwmaccsu.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwmaccus.vx" 9 } } */
