/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbe -mabi=lp64 -O2" } */
unsigned long xperm(unsigned long rs1, unsigned long rs2, int sz_log2)
{
    unsigned long r = 0;
    unsigned long sz = 1LL << sz_log2;
    unsigned long mask = (1LL << sz) - 1;
    for (int i = 0; i < 64; i += sz) 
    {
        unsigned long pos = ((rs2 >> i) & mask) << sz_log2;
        if (pos < 64)
        r |= ((rs1 >> pos) & mask) << i;
    }
    return r;
}

unsigned long xperm_n (unsigned long rs1, unsigned long rs2) { return xperm(rs1, rs2, 2); }
unsigned long xperm_b (unsigned long rs1, unsigned long rs2) { return xperm(rs1, rs2, 3); }
unsigned long xperm_h (unsigned long rs1, unsigned long rs2) { return xperm(rs1, rs2, 4); }
unsigned long xperm_w (unsigned long rs1, unsigned long rs2) { return xperm(rs1, rs2, 5); }

/* { dg-final { scan-assembler-times "xperm.n" 5 } } */
/* { dg-final { scan-assembler-times "xperm.b" 5 } } */
/* { dg-final { scan-assembler-times "xperm.h" 5 } } */
/* { dg-final { scan-assembler-times "xperm.w" 5 } } */