/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbp -mabi=lp64 -O2" } */
unsigned long long shfl64(unsigned long long rs1, unsigned long long rs2)
{
    unsigned long long x = rs1;
    int shamt = rs2 & 31;
    if (shamt & 16) x = shuffle64_stage(x, 0x0000ffff00000000LL,0x00000000ffff0000LL, 16);
    if (shamt & 8) x = shuffle64_stage(x, 0x00ff000000ff0000LL,0x0000ff000000ff00LL, 8);
    if (shamt & 4) x = shuffle64_stage(x, 0x0f000f000f000f00LL,0x00f000f000f000f0LL, 4);
    if (shamt & 2) x = shuffle64_stage(x, 0x3030303030303030LL,0x0c0c0c0c0c0c0c0cLL, 2);
    if (shamt & 1) x = shuffle64_stage(x, 0x4444444444444444LL,0x2222222222222222LL, 1);
    return x;
}

unsigned long long unshfl64(unsigned long long rs1, unsigned long long rs2)
{
    unsigned long long x = rs1;
    int shamt = rs2 & 31;
    if (shamt & 1) x = shuffle64_stage(x, 0x4444444444444444LL,0x2222222222222222LL, 1);
    if (shamt & 2) x = shuffle64_stage(x, 0x3030303030303030LL,0x0c0c0c0c0c0c0c0cLL, 2);
    if (shamt & 4) x = shuffle64_stage(x, 0x0f000f000f000f00LL,0x00f000f000f000f0LL, 4);
    if (shamt & 8) x = shuffle64_stage(x, 0x00ff000000ff0000LL,0x0000ff000000ff00LL, 8);
    if (shamt & 16) x = shuffle64_stage(x, 0x0000ffff00000000LL,0x00000000ffff0000LL, 16);
    return x;
}
/* { dg-final { scan-assembler-times "shlfi" 1 } } */
/* { dg-final { scan-assembler-times "unshlfi" 1 } } */