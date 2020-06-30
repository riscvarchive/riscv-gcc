/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_AMO(STYPE, VCLASST, VCLASS, EM, MLEN, SEW, IEM, ISEW, OP, OPU)	\
  void test_amo##IEM##_##OP##e_##VCLASS##EM (uint##ISEW##_t *index, int##SEW##_t *y) {\
    vint##EM##_t vy;						\
    vuint##IEM##_t vindex;					\
    vbool##MLEN##_t mask;					\
    mask = MSET (MLEN);					\
    vindex = VULOAD(ISEW, IEM, index);				\
    vy = VILOAD(SEW, EM, y);					\
    vy = vamo##OP##i##ISEW##_v_i##EM##_m(mask, y, vindex, vy);	\
    VISTORE(SEW, EM, y, vy);					\
  }								\
  void test_uamo##IEM##_##OP##e_##VCLASS##EM (uint##ISEW##_t *index, uint##SEW##_t *y) {\
    vuint##EM##_t vy;						\
    vuint##IEM##_t vindex;					\
    vbool##MLEN##_t mask;					\
    mask = MSET (MLEN);					\
    vindex = VULOAD(ISEW, IEM, index);				\
    vy = VULOAD(SEW, EM, y);					\
    vy = vamo##OPU##i##ISEW##_v_u##EM##_m(mask, y, vindex, vy);	\
    VUSTORE(SEW, EM, y, vy);					\
  }								\

#define RVV_TEST_FAMO(STYPE, VCLASST, VCLASS, EM, MLEN, SEW, IEM, ISEW, OP)	\
  void test_amo##IEM##_##OP##e_##VCLASS##EM (uint##ISEW##_t *index, STYPE *y) {	\
    vbool##MLEN##_t mask;					\
    vuint##IEM##_t vindex;					\
    mask = MSET (MLEN);					\
    v##VCLASST##EM##_t vy;					\
    vindex = VULOAD(ISEW, IEM, index);				\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    vy = vamo##OP##i##ISEW##_v_##VCLASS##EM##_m(mask, y, vindex, vy);\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

RVV_INT_INDEX_TEST_ARG (RVV_TEST_AMO, swape, swape)
RVV_INT_INDEX_TEST_ARG (RVV_TEST_AMO, adde, adde)
RVV_INT_INDEX_TEST_ARG (RVV_TEST_AMO, xore, xore)
RVV_INT_INDEX_TEST_ARG (RVV_TEST_AMO, ore, ore)
RVV_INT_INDEX_TEST_ARG (RVV_TEST_AMO, ande, ande)
RVV_INT_INDEX_TEST_ARG (RVV_TEST_AMO, mine, mine)
RVV_INT_INDEX_TEST_ARG (RVV_TEST_AMO, maxe, maxe)
RVV_INT_INDEX_TEST_ARG (RVV_TEST_AMO, minue, minue)
RVV_INT_INDEX_TEST_ARG (RVV_TEST_AMO, maxue, maxue)

RVV_FLOAT_INDEX_TEST_ARG (RVV_TEST_FAMO, swape)
RVV_FLOAT_INDEX_TEST_ARG (RVV_TEST_FAMO, adde)
RVV_FLOAT_INDEX_TEST_ARG (RVV_TEST_FAMO, xore)
RVV_FLOAT_INDEX_TEST_ARG (RVV_TEST_FAMO, ore)
RVV_FLOAT_INDEX_TEST_ARG (RVV_TEST_FAMO, ande)
RVV_FLOAT_INDEX_TEST_ARG (RVV_TEST_FAMO, mine)
RVV_FLOAT_INDEX_TEST_ARG (RVV_TEST_FAMO, maxe)
RVV_FLOAT_INDEX_TEST_ARG (RVV_TEST_FAMO, minue)
RVV_FLOAT_INDEX_TEST_ARG (RVV_TEST_FAMO, maxue)

/* { dg-final { scan-assembler-times "vamoswapei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vamoswapei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vamoswapei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vamoswapei64.v" 29 } } */

/* { dg-final { scan-assembler-times "vamoaddei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vamoaddei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vamoaddei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vamoaddei64.v" 29 } } */

/* { dg-final { scan-assembler-times "vamoxorei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vamoxorei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vamoxorei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vamoxorei64.v" 29 } } */

/* { dg-final { scan-assembler-times "vamoorei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vamoorei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vamoorei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vamoorei64.v" 29 } } */

/* { dg-final { scan-assembler-times "vamoandei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vamoandei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vamoandei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vamoandei64.v" 29 } } */

/* { dg-final { scan-assembler-times "vamominei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vamominei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vamominei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vamominei64.v" 29 } } */

/* { dg-final { scan-assembler-times "vamominuei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vamominuei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vamominuei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vamominuei64.v" 29 } } */

/* { dg-final { scan-assembler-times "vamomaxei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vamomaxei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vamomaxei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vamomaxei64.v" 29 } } */

/* { dg-final { scan-assembler-times "vamomaxuei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vamomaxuei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vamomaxuei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vamomaxuei64.v" 29 } } */
