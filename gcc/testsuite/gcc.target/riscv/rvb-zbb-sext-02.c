/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zbb -mabi=ilp32 -O2" } */

unsigned long sextb(unsigned long x)
{
return (x << (32-8)) >> (32-8);
}

unsigned long sexth(unsigned long x)
{
return (x << (32-16)) >> (32-16);
}

/* { dg-final { scan-assembler-times "sext.b" 1 } } */
/* { dg-final { scan-assembler-times "sext.h" 1 } } */