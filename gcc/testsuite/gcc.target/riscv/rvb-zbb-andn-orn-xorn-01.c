/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbb -mabi=lp64 -O2" } */

unsigned long long andn(unsigned long long rs1, unsigned long long rs2)
{
return rs1 & ~rs2;
}

unsigned long long orn(unsigned long long rs1, unsigned long long rs2)
{
return rs1 | ~rs2;
}

unsigned long long xnor(unsigned long long rs1, unsigned long long rs2)
{
return rs1 ^ ~rs2;
}

/* { dg-final { scan-assembler-times "addn" 1 } } */
/* { dg-final { scan-assembler-times "orn" 1 } } */
/* { dg-final { scan-assembler-times "xnor" 1 } } */