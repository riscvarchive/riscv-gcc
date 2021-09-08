/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define VLOADSTORE_NF2(SEW, LMUL, NF, MLEN, SN, S)							\
  void vloadstore##NF##e##SEW##_v_##SN##SEW##m##LMUL(v##S##SEW##m##LMUL##_t *v0,			\
						     v##S##SEW##m##LMUL##_t *v1,			\
						     S##SEW##_t *a, ptrdiff_t s, word_type vl) {	\
    vlseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, a, vl);						\
    vsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, *v1, *v0, vl);						\
    vlsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, a, s, vl);					\
    vssseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, s, *v1, *v0, vl);					\
  }													\

RVV_SEG_NF2_TEST_ARG(VLOADSTORE_NF2, i, int)
RVV_SEG_NF2_TEST_ARG(VLOADSTORE_NF2, u, uint)
RVV_SEG_NF2_NO_SEW8_TEST_ARG(VLOADSTORE_NF2, f, float)

#define VLOADSTORE_NF3(SEW, LMUL, NF, MLEN, SN, S)							\
  void vloadstore##NF##e##SEW##_v_##SN##SEW##m##LMUL(v##S##SEW##m##LMUL##_t *v0,			\
						     v##S##SEW##m##LMUL##_t *v1,			\
						     v##S##SEW##m##LMUL##_t *v2,			\
						     S##SEW##_t *a, ptrdiff_t s, word_type vl) {	\
    vlseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, a, vl);					\
    vsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, *v2, *v1, *v0, vl);					\
    vlsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, a, s, vl);					\
    vssseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, s, *v2, *v1, *v0, vl);				\
  }													\

RVV_SEG_NF3_TEST_ARG(VLOADSTORE_NF3, i, int)
RVV_SEG_NF3_TEST_ARG(VLOADSTORE_NF3, u, uint)
RVV_SEG_NF3_NO_SEW8_TEST_ARG(VLOADSTORE_NF3, f, float)

#define VLOADSTORE_NF4(SEW, LMUL, NF, MLEN, SN, S)							\
  void vloadstore##NF##e##SEW##_v_##SN##SEW##m##LMUL(v##S##SEW##m##LMUL##_t *v0,			\
						     v##S##SEW##m##LMUL##_t *v1,			\
						     v##S##SEW##m##LMUL##_t *v2,			\
						     v##S##SEW##m##LMUL##_t *v3,			\
						     S##SEW##_t *a, ptrdiff_t s, word_type vl) {	\
    vlseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, v3, a, vl);					\
    vsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, *v3, *v2, *v1, *v0, vl);				\
    vlsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, v3, a, s, vl);				\
    vssseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, s, *v3, *v2, *v1, *v0, vl);				\
  }													\

RVV_SEG_NF4_TEST_ARG(VLOADSTORE_NF4, i, int)
RVV_SEG_NF4_TEST_ARG(VLOADSTORE_NF4, u, uint)
RVV_SEG_NF4_NO_SEW8_TEST_ARG(VLOADSTORE_NF4, f, float)

#define VLOADSTORE_NF5(SEW, LMUL, NF, MLEN, SN, S)							\
  void vloadstore##NF##e##SEW##_v_##SN##SEW##m##LMUL(v##S##SEW##m##LMUL##_t *v0,			\
						     v##S##SEW##m##LMUL##_t *v1,			\
						     v##S##SEW##m##LMUL##_t *v2,			\
						     v##S##SEW##m##LMUL##_t *v3,			\
						     v##S##SEW##m##LMUL##_t *v4,			\
						     S##SEW##_t *a, ptrdiff_t s, word_type vl) {	\
    vlseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, v3, v4, a, vl);				\
    vsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, *v4, *v3, *v2, *v1, *v0, vl);				\
    vlsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, v3, v4, a, s, vl);				\
    vssseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, s, *v4, *v3, *v2, *v1, *v0, vl);			\
  }													\

RVV_SEG_NF5_TEST_ARG(VLOADSTORE_NF5, i, int)
RVV_SEG_NF5_TEST_ARG(VLOADSTORE_NF5, u, uint)
RVV_SEG_NF5_NO_SEW8_TEST_ARG(VLOADSTORE_NF5, f, float)

#define VLOADSTORE_NF6(SEW, LMUL, NF, MLEN, SN, S)							\
  void vloadstore##NF##e##SEW##_v_##SN##SEW##m##LMUL(v##S##SEW##m##LMUL##_t *v0,			\
						     v##S##SEW##m##LMUL##_t *v1,			\
						     v##S##SEW##m##LMUL##_t *v2,			\
						     v##S##SEW##m##LMUL##_t *v3,			\
						     v##S##SEW##m##LMUL##_t *v4,			\
						     v##S##SEW##m##LMUL##_t *v5,			\
						     S##SEW##_t *a, ptrdiff_t s, word_type vl) {	\
    vlseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, v3, v4, v5, a, vl);				\
    vsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, *v5, *v4, *v3, *v2, *v1, *v0, vl);			\
    vlsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, v3, v4, v5, a, s, vl);			\
    vssseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, s, *v5, *v4, *v3, *v2, *v1, *v0, vl);			\
  }													\

RVV_SEG_NF6_TEST_ARG(VLOADSTORE_NF6, i, int)
RVV_SEG_NF6_TEST_ARG(VLOADSTORE_NF6, u, uint)
RVV_SEG_NF6_NO_SEW8_TEST_ARG(VLOADSTORE_NF6, f, float)

#define VLOADSTORE_NF7(SEW, LMUL, NF, MLEN, SN, S)							\
  void vloadstore##NF##e##SEW##_v_##SN##SEW##m##LMUL(v##S##SEW##m##LMUL##_t *v0,			\
						     v##S##SEW##m##LMUL##_t *v1,			\
						     v##S##SEW##m##LMUL##_t *v2,			\
						     v##S##SEW##m##LMUL##_t *v3,			\
						     v##S##SEW##m##LMUL##_t *v4,			\
						     v##S##SEW##m##LMUL##_t *v5,			\
						     v##S##SEW##m##LMUL##_t *v6,			\
						     S##SEW##_t *a, ptrdiff_t s, word_type vl) {	\
    vlseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, v3, v4, v5, v6, a, vl);			\
    vsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, *v6, *v5, *v4, *v3, *v2, *v1, *v0, vl);		\
    vlsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, v3, v4, v5, v6, a, s, vl);			\
    vssseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, s, *v6, *v5, *v4, *v3, *v2, *v1, *v0, vl);		\
  }													\

RVV_SEG_NF7_TEST_ARG(VLOADSTORE_NF7, i, int)
RVV_SEG_NF7_TEST_ARG(VLOADSTORE_NF7, u, uint)
RVV_SEG_NF7_NO_SEW8_TEST_ARG(VLOADSTORE_NF7, f, float)

#define VLOADSTORE_NF8(SEW, LMUL, NF, MLEN, SN, S)							\
  void vloadstore##NF##e##SEW##_v_##SN##SEW##m##LMUL(v##S##SEW##m##LMUL##_t *v0,			\
						     v##S##SEW##m##LMUL##_t *v1,			\
						     v##S##SEW##m##LMUL##_t *v2,			\
						     v##S##SEW##m##LMUL##_t *v3,			\
						     v##S##SEW##m##LMUL##_t *v4,			\
						     v##S##SEW##m##LMUL##_t *v5,			\
						     v##S##SEW##m##LMUL##_t *v6,			\
						     v##S##SEW##m##LMUL##_t *v7,			\
						     S##SEW##_t *a, ptrdiff_t s, word_type vl) {	\
    vlseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, v3, v4, v5, v6, v7, a, vl);			\
    vsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, *v7, *v6, *v5, *v4, *v3, *v2, *v1, *v0, vl);		\
    vlsseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (v0, v1, v2, v3, v4, v5, v6, v7, a, s, vl);		\
    vssseg##NF##e##SEW##_v_##SN##SEW##m##LMUL (a, s, *v7, *v6, *v5, *v4, *v3, *v2, *v1, *v0, vl);	\
  }													\

RVV_SEG_NF8_TEST_ARG(VLOADSTORE_NF8, i, int)
RVV_SEG_NF8_TEST_ARG(VLOADSTORE_NF8, u, uint)
RVV_SEG_NF8_NO_SEW8_TEST_ARG(VLOADSTORE_NF8, f, float)

/* { dg-final { scan-assembler-times "vlseg\[2-8\]e" 121 } } */
/* { dg-final { scan-assembler-times "vsseg\[2-8\]e" 121 } } */
/* { dg-final { scan-assembler-times "vlsseg\[2-8\]e" 121 } } */
/* { dg-final { scan-assembler-times "vssseg\[2-8\]e" 121 } } */
