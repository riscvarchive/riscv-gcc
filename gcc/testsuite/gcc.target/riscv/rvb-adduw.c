/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zba -mabi=lp64 -O2" } */

long
foo (int i, unsigned int j)
{
  return i + (long)j;
}

/* { dg-final { scan-assembler "add.uw" } } */
