/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zbe -mabi=ilp32 -O2" } */
unsigned int foo1(unsigned int rs1, unsigned int rs2)
{
    return 1 & (rs1 >> (rs2 & 31));
}




/* { dg-final { scan-assembler-times "bext" 2 } } */