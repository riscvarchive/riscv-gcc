/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zbb -mabi=ilp32 -O2" } */

unsigned long rol(unsigned long rs1, unsigned long rs2)
{
int shamt = rs2 & (64 - 1);
return (rs1 << shamt) | (rs1 >> ((64 - shamt) & (64 - 1)));
}
unsigned long ror(unsigned long rs1, unsigned long rs2)
{
int shamt = rs2 & (64 - 1);
return (rs1 >> shamt) | (rs1 << ((64 - shamt) & (64 - 1)));
}

/* { dg-final { scan-assembler-times "roli" 1 } } */
/* { dg-final { scan-assembler-times "rori" 1 } } */