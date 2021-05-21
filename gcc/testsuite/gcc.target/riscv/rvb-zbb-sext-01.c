/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbb -mabi=lp64 -O2" } */

unsigned long long sextb(unsigned long long x)
{
return (x << (64-8)) >> (64-8);
}

unsigned long long sexth(unsigned long long x)
{
return (x << (64-16)) >> (64-16);
}

/* { dg-final { scan-assembler-times "sext.b" 1 } } */
/* { dg-final { scan-assembler-times "sext.h" 1 } } */