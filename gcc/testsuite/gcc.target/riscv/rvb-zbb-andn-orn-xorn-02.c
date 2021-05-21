/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zbb -mabi=ilp32 -O2" } */

unsigned long andn(unsigned long rs1, unsigned long rs2)
{
return rs1 & ~rs2;
}

unsigned long orn(unsigned  long rs1, unsigned  long rs2)
{
return rs1 | ~rs2;
}

unsigned long xnor(unsigned long rs1, unsigned long rs2)
{
return rs1 ^ ~rs2;
}

/* { dg-final { scan-assembler-times "andn" 1 } } */
/* { dg-final { scan-assembler-times "orn" 1 } } */
/* { dg-final { scan-assembler-times "xnor" 1 } } */