/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */


#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
intXLEN_t foo(intXLEN_t t, uintXLEN_t a, uintXLEN_t b) {
  return __rv_smaqa (t, a, b);
}

static __attribute__ ((noinline))
intXLEN_t foo1(intXLEN_t t, uintXLEN_t a, uintXLEN_t b) {
  return __rv_smaqa_su (t, a, b);
}

static __attribute__ ((noinline))
uintXLEN_t foo2(intXLEN_t t, uintXLEN_t a, uintXLEN_t b) {
  return __rv_umaqa (t, a, b);
}

static __attribute__ ((noinline))
int32xN_t foo3(int32xN_t t, int8xN_t a, int8xN_t b) {
  return __rv_v_smaqa (t, a, b);
}

static __attribute__ ((noinline))
int32xN_t foo4(int32xN_t t, int8xN_t a, uint8xN_t b) {
  return __rv_v_smaqa_su (t, a, b);
}

static __attribute__ ((noinline))
uint32xN_t foo5(uint32xN_t t, uint8xN_t a, uint8xN_t b) {
  return __rv_v_umaqa (t, a, b);
}

/* { dg-final { scan-assembler-times "smaqa.su" 2 } } */
/* { dg-final { scan-assembler-times "smaqa" 4 } } */
/* { dg-final { scan-assembler-times "umaqa" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
