/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWMAC_VV(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP, OP0U, OP1U, OP2U, OP0T, OP1T, OP2T)   \
  void v##OP##VCLASS##EM##OP0U##_##OP1U##_##OP2U(size_t n,                     \
                                                 OP1T##STYPE *op1,             \
                                                 OP2T##STYPE *op2,             \
                                                 OP0T##WSTYPE * mo,            \
                                                 OP0T##WSTYPE * op0) {         \
    v##OP1T##int##EM##_t vop1;                                           \
    v##OP2T##int##EM##_t vop2;                                           \
    v##OP0T##int##WEM##_t vop0, vmo;                                         \
    vbool##MLEN##_t mask;                                                   \
    mask = MSET (MLEN);                                             \
    vop0 = VLOAD(OP0U, WSEW, WEM, op0);                                    \
    vmo = VLOAD(OP0U, WSEW, WEM, mo);                                      \
    vop1 = VLOAD(OP1U, SEW, EM, op1);                                     \
    vop2 = VLOAD(OP2U, SEW, EM, op2);                                     \
    vop0 = v##OP##_vv_##OP0U##WEM##_m (mask, vop0, vop1, vop2); \
    VSTORE(OP0U, WSEW, WEM, op0, vop0);                                     \
  }

#define VWMAC_VX(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP, OP0U, OP1U, OP2U, OP0T, OP1T, OP2T)   \
  void x##OP##VCLASS##EM##OP0U##_##OP1U##_##OP2U(size_t n,                     \
                                                 OP1T##STYPE  op1,             \
                                                 OP2T##STYPE *op2,             \
						 OP0T##WSTYPE * mo,            \
                                                 OP0T##WSTYPE * op0) {         \
    v##OP2T##int##EM##_t vop2;                                           \
    v##OP0T##int##WEM##_t vop0, vmo;                                          \
    vbool##MLEN##_t mask;                                                   \
    mask = MSET (MLEN);                                             \
    vop0 = VLOAD(OP0U, WSEW, WEM, op0);                                    \
    vmo = VLOAD(OP0U, WSEW, WEM, mo);                                      \
    vop2 = VLOAD(OP2U, SEW, EM, op2);                                     \
    vop0 = v##OP##_vx_##OP0U##WEM##_m (mask, vop0, op1, vop2); \
    VSTORE(OP0U, WSEW, WEM, op0, vop0);                                     \
  }

#define VWMAC(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP, OP0U, OP1U, OP2U, OP0T, OP1T, OP2T)   \
  VWMAC_VV(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP, OP0U, OP1U, OP2U, OP0T, OP1T, OP2T)      \
  VWMAC_VX(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP, OP0U, OP1U, OP2U, OP0T, OP1T, OP2T)

RVV_WINT_TEST_ARG(VWMAC,      wmacc, i, i, i,  ,  ,  )
RVV_WINT_TEST_ARG(VWMAC,     wmaccu, u, u, u, u, u, u)
RVV_WINT_TEST_ARG(VWMAC,    wmaccsu, i, i, u,  ,  , u)
RVV_WINT_TEST_ARG(VWMAC_VX, wmaccus, i, u, i,  , u,  )

/* { dg-final { scan-assembler-times "vwmacc.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwmacc.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwmaccu.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwmaccu.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwmaccsu.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwmaccsu.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwmaccus.vx" 9 } } */
