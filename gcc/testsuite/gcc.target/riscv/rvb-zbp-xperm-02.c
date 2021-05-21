/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbe -mabi=lp64 -O2" } */
unsigned long long xperm(unsigned long long rs1, unsigned long long rs2, int sz_log2)
{
    unsigned long long r = 0;
    unsigned long long sz = 1LL << sz_log2;
    unsigned long long mask = (1LL << sz) - 1;
    for (int i = 0; i < 64; i += sz) 
    {
        unsigned long long pos = ((rs2 >> i) & mask) << sz_log2;
        if (pos < 64)
        r |= ((rs1 >> pos) & mask) << i;
    }
    return r;
}

unsigned long long xperm_n (unsigned long long rs1, unsigned long long rs2) { return xperm(rs1, rs2, 2); }
unsigned long long xperm_b (unsigned long long rs1, unsigned long long rs2) { return xperm(rs1, rs2, 3); }
unsigned long long xperm_h (unsigned long long rs1, unsigned long long rs2) { return xperm(rs1, rs2, 4); }
unsigned long long xperm_w (unsigned long long rs1, unsigned long long rs2) { return xperm(rs1, rs2, 5); }

/* { dg-final { scan-assembler-times "xperm_n" 1 } } */
/* { dg-final { scan-assembler-times "xperm_b" 1 } } */
/* { dg-final { scan-assembler-times "xperm_h" 1 } } */
/* { dg-final { scan-assembler-times "xperm_w" 1 } } */