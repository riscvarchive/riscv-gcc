/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbe -mabi=lp64 -O2" } */

/* RV64 only */
unsigned long foo1(unsigned long rs1, unsigned long rs2)
{
    return 1LL & (rs1 >> (rs2 & 63));
}

/* { dg-final { scan-assembler-times "bextw" 1 } } */