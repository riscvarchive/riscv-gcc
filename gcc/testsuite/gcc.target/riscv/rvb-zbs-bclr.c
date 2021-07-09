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

/* bclrw */
int
foo2 (int i, int j)
{
  return i & ~(1 << j);
}

/* bclriw */
int
foo3 (long i)
{
  return (int)i & ~(1 << 20);
}

/* { dg-final { scan-assembler-times "bclr" 5 } } */
/* { dg-final { scan-assembler-times "bclri" 2 } } */
/* { dg-final { scan-assembler-times "bclrw" 1 } } */
/* { dg-final { scan-assembler-times "bclriw" 1 } } */
/* { dg-final { scan-assembler-not "andi" } } */
