/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zbp -mabi=ilp32 -O2" } */

unsigned long gorc32(unsigned long rs1, unsigned long rs2)
{
    unsigned long x = rs1;
    int shamt = rs2 & 31;
    if (shamt & 1) x |= ((x & 0x55555555) << 1) | ((x & 0xAAAAAAAA) >> 1);
    if (shamt & 2) x |= ((x & 0x33333333) << 2) | ((x & 0xCCCCCCCC) >> 2);
    if (shamt & 4) x |= ((x & 0x0F0F0F0F) << 4) | ((x & 0xF0F0F0F0) >> 4);
    if (shamt & 8) x |= ((x & 0x00FF00FF) << 8) | ((x & 0xFF00FF00) >> 8);
    if (shamt & 16) x |= ((x & 0x0000FFFF) << 16) | ((x & 0xFFFF0000) >> 16);
    return x;
}


/* { dg-final { scan-assembler-times "gorci" 1 } } */