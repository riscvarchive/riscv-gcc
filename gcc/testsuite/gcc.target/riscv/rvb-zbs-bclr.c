/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbb_zbs -mabi=lp64 -O2" } */

/* bclr */
long
foo0 (long i, long j)
{
  return i & ~(1L << j);
}

/* bclri */
long
foo1 (long i)
{
  return i & ~(1L << 20);
}

/* { dg-final { scan-assembler-times "bclr" 3 } } */
/* { dg-final { scan-assembler-times "bclri" 1 } } */
/* { dg-final { scan-assembler-not "andi" } } */
