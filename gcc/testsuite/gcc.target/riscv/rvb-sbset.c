/* { dg-do compile } */
/* { dg-options "-march=rv64gcb -mabi=lp64 -O2" } */

long
foo (long i)
{
  return ~(1L << i);
}

/* { dg-final { scan-assembler "sbset" } } */
