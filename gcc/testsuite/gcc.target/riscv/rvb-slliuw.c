/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbb -mabi=lp64 -O2" } */

long
foo (long i)
{
  return (long)(unsigned int)i << 10;
}

/* { dg-final { scan-assembler "slliu.w" } } */
