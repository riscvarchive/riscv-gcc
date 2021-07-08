/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbe -mabi=lp64 -O2" } */
unsigned int foo(unsigned int rs1, unsigned int rs2)
{
    return 1 & (rs1 >> (rs2 & 31));
}



/* { dg-final { scan-assembler-times "bextw" 1 } } */