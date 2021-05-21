/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zbp -mabi=ilp32 -O2" } */

unsigned long pack(unsigned long rs1, unsigned long rs2)
{
    unsigned long lower = (rs1 << 64/2) >> 64/2;
    unsigned long upper = rs2 << 64/2;
    return lower | upper;
}

unsigned long packu(unsigned long rs1, unsigned long rs2)
{
    unsigned long lower = rs1 >> 64/2;
    unsigned long upper = (rs2 >> 64/2) << 64/2;
    return lower | upper;
}

unsigned long packh(unsigned long rs1, unsigned long rs2)
{
    unsigned long lower = rs1 & 255;
    unsigned long upper = (rs2 & 255) << 8;
    return lower | upper;
}

/* { dg-final { scan-assembler-times "pack" 1 } } */
/* { dg-final { scan-assembler-times "packu" 1 } } */
/* { dg-final { scan-assembler-times "packh" 1 } } */