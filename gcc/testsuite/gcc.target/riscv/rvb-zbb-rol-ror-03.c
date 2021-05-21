/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbb -mabi=lp64 -O2" } */

/* RV64 only*/
unsigned long long rol(unsigned long long rs1, unsigned long long rs2)
{
int shamt = rs2 & (64 - 1);
return (rs1 << shamt) | (rs1 >> ((64 - shamt) & (64 - 1)));
}
unsigned long long ror(unsigned long long rs1, unsigned long long rs2)
{
int shamt = rs2 & (64 - 1);
return (rs1 >> shamt) | (rs1 << ((64 - shamt) & (64 - 1)));
}

/* { dg-final { scan-assembler-times "roliw" 1 } } */
/* { dg-final { scan-assembler-times "roriw" 1 } } */