/* stas16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for stas16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsf -mabi=ilp32d -O0" } */


#include <rvp_intrinsic.h>
#include <stdlib.h>

static __attribute__ ((noinline))
uintXLEN_t foo(uintXLEN_t a, uintXLEN_t b) {
  return __rv_stas16 (a, b);
}

static __attribute__ ((noinline))
uintXLEN_t foo2(uintXLEN_t a, uintXLEN_t b) {
  return __rv_rstas16 (a, b);
}

static __attribute__ ((noinline))
uintXLEN_t foo3(uintXLEN_t a, uintXLEN_t b) {
  return __rv_urstas16 (a, b);
}

static __attribute__ ((noinline))
uint16xN_t foo4(uint16xN_t a, uint16xN_t b) {
  return __rv_v_ustas16 (a, b);
}

static __attribute__ ((noinline))
int16xN_t foo5(int16xN_t a, int16xN_t b) {
  return __rv_v_sstas16 (a, b);
}

static __attribute__ ((noinline))
int16xN_t foo6(int16xN_t a, int16xN_t b) {
  return __rv_v_rstas16 (a, b);
}

static __attribute__ ((noinline))
uint16xN_t foo7(uint16xN_t a, uint16xN_t b) {
  return __rv_v_urstas16 (a, b);
}

static __attribute__ ((noinline))
uintXLEN_t foo8(uintXLEN_t a, uintXLEN_t b) {
  return __rv_kstas16 (a, b);
}

static __attribute__ ((noinline))
int16xN_t foo9(int16xN_t a, int16xN_t b) {
  return __rv_v_kstas16 (a, b);
}

static __attribute__ ((noinline))
uintXLEN_t foo10(uintXLEN_t a, uintXLEN_t b) {
  return __rv_ukstas16 (a, b);
}

static __attribute__ ((noinline))
uint16xN_t foo11(uint16xN_t a, uint16xN_t b) {
  return __rv_v_ukstas16 (a, b);
}

/* { dg-final { scan-assembler-times "stas16" 12 } } */
/* { dg-final { scan-assembler-times "rstas16" 4 } } */
/* { dg-final { scan-assembler-times "urstas16" 2 } } */
/* { dg-final { scan-assembler-times "kstas16" 4 } } */
/* { dg-final { scan-assembler-times "ukstas16" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
