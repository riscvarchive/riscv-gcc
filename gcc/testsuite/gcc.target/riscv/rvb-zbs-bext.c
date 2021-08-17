/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbs -mabi=lp64 -O2" } */

/* bext */
long
foo0 (long i, long j)
{
  return 1L & (i >> j);
}

/* bexti */
long
foo1 (long i)
{
  return 1L & (i >> 20);
}

/* bextw */
int
foo2 (int i, int j)
{
  return 1 & (i >> j);
}

/* { dg-final { scan-assembler-times "bext" 4 } } */
/* { dg-final { scan-assembler-times "bexti" 1 } } */
/* { dg-final { scan-assembler-times "bextw" 1 } } */
/* { dg-final { scan-assembler-not "andi" } } */
