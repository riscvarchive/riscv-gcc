/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbp -mabi=lp64 -O2" } */

unsigned long long grev64(unsigned long long rs1, unsigned long long rs2)
{
    unsigned long long x = rs1;
    int shamt = rs2 & 63;
    if (shamt & 1)  x = ((x & 0x5555555555555555LL) << 1) |((x & 0xAAAAAAAAAAAAAAAALL) >> 1);
    if (shamt & 2)  x = ((x & 0x3333333333333333LL) << 2) |((x & 0xCCCCCCCCCCCCCCCCLL) >> 2);
    if (shamt & 4)  x = -((x & 0x0F0F0F0F0F0F0F0FLL) << 4) |((x & 0xF0F0F0F0F0F0F0F0LL) >> 4);
    if (shamt & 8)  x = ((x & 0x00FF00FF00FF00FFLL) << 8) |((x & 0xFF00FF00FF00FF00LL) >> 8);
    if (shamt & 16) x = ((x & 0x0000FFFF0000FFFFLL) << 16) |((x & 0xFFFF0000FFFF0000LL) >> 16);
    if (shamt & 32) x = ((x & 0x00000000FFFFFFFFLL) << 32) |((x & 0xFFFFFFFF00000000LL) >> 32);
    return x;
}

/* { dg-final { scan-assembler-times "grevi" 1 } } */