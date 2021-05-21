/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbp -mabi=lp64 -O2" } */

unsigned long long pack(unsigned long long rs1, unsigned long long rs2)
{
    unsigned long long lower = (rs1 << 64/2) >> 64/2;
    unsigned long long upper = rs2 << 64/2;
    return lower | upper;
}

unsigned long long packu(unsigned long long rs1, unsigned long long rs2)
{
    unsigned long long lower = rs1 >> 64/2;
    unsigned long long upper = (rs2 >> 64/2) << 64/2;
    return lower | upper;
}

unsigned long long packh(unsigned long long rs1, unsigned long long rs2)
{
    unsigned long long lower = rs1 & 255;
    unsigned long long upper = (rs2 & 255) << 8;
    return lower | upper;
}

/* { dg-final { scan-assembler-times "pack" 1 } } */
/* { dg-final { scan-assembler-times "packu" 1 } } */
/* { dg-final { scan-assembler-times "packh" 1 } } */