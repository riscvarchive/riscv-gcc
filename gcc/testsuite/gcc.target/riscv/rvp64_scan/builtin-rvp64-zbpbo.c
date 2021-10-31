/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zbpbo_zpn_zpsf -mabi=lp64d -O0" } */#include <rvp_intrinsic.h>

static __attribute__ ((noinline))
uintXLEN_t foo2 (uintXLEN_t a, uintXLEN_t b, uintXLEN_t c)
{
  return __rv_cmix (a, b, c);
}

static __attribute__ ((noinline))
uint32_t foo3(uint32_t a, uint32_t b, uint32_t c)
{
  return __rv_fsrw (a, b, c);
}

static __attribute__ ((noinline))
int32_t foo5(int32_t a, int32_t b)
{
  return __rv_max (a, b);
}

static __attribute__ ((noinline))
int32_t foo6(int32_t a, int32_t b)
{
  return __rv_min (a, b);
}

static __attribute__ ((noinline))
uintXLEN_t foo7(uintXLEN_t a, uintXLEN_t b)
{
  return __rv_pack (a, b);
}

static __attribute__ ((noinline))
uintXLEN_t foo8(uintXLEN_t a, uintXLEN_t b)
{
  return __rv_packu (a, b);
}

static __attribute__ ((noinline))
uintXLEN_t foo9(uintXLEN_t a)
{
  return __rv_rev (a);
}

static __attribute__ ((noinline))
uintXLEN_t foo10(uintXLEN_t a)
{
  return __rv_rev8h (a);
}

static __attribute__ ((noinline))
uint8xN_t foo11(uint8xN_t a)
{
  return __rv_v_rev8h (a);
}

static __attribute__ ((noinline))
uintXLEN_t foo12(uintXLEN_t a)
{
  return __rv_swap8 (a);
}

static __attribute__ ((noinline))
uint8xN_t foo13(uint8xN_t a)
{
  return __rv_v_swap8 (a);
}

/* { dg-final { scan-assembler-times "rev8.h" 4 } } */
/* { dg-final { scan-assembler-times "rev" 5 } } */
/* { dg-final { scan-assembler-times "pack" 2 } } */
/* { dg-final { scan-assembler-times "packu" 1 } } */
/* { dg-final { scan-assembler-times "fsrw" 1 } } */
/* { dg-final { scan-assembler-times "min" 1 } } */
/* { dg-final { scan-assembler-times "max" 1 } } */
/* { dg-final { scan-assembler-times "cmix" 1 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */
/* { dg-final { scan-assembler-times "maxw" 0 } } */
/* { dg-final { scan-assembler-times "minw" 0 } } */
