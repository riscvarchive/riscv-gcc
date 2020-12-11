/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbb -mabi=lp64 -O2" } */

long
f1 (long i, long j)
{
  return i < j ? i : j;
}

long
f2 (long i, long j)
{
  return i > j ? i : j;
}

unsigned long
f3 (unsigned long i, unsigned long j)
{
  return i < j ? i : j;
}

unsigned long
f4 (unsigned long i, unsigned long j)
{
  return i > j ? i : j;
}

/* { dg-final { scan-assembler-times "min\t" 1 } } */
/* { dg-final { scan-assembler-times "max\t" 1 } } */
/* { dg-final { scan-assembler-times "minu\t" 1 } } */
/* { dg-final { scan-assembler-times "maxu\t" 1 } } */
