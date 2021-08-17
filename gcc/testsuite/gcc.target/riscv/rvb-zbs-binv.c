/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbs -mabi=lp64 -O2" } */

/* binv */
long
foo0 (long i, long j)
{
  return i ^ (1L << j);
}

/* binvi */
long
foo1 (long i)
{
  return i ^ (1L << 20);
}

/* binvw */
int
foo2 (int i, int j)
{
  return i ^ (1 << j);
}

/* binviw */
int
foo3 (long i)
{
  return (int)i ^ (1 << 20);
}

/* { dg-final { scan-assembler-times "binv" 5 } } */
/* { dg-final { scan-assembler-times "binvi" 2 } } */
/* { dg-final { scan-assembler-times "binvw" 1 } } */
/* { dg-final { scan-assembler-times "binviw" 1 } } */
/* { dg-final { scan-assembler-not "andi" } } */
