/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zbp -mabi=ilp32 -O2" } */
unsigned long xperm(unsigned long rs1, unsigned long rs2, int sz_log2)
{
    unsigned long r = 0;
    unsigned long sz = 1LL << sz_log2;
    unsigned long mask = (1LL << sz) - 1;
    for (int i = 0; i < 32; i += sz) 
    {
        unsigned long pos = ((rs2 >> i) & mask) << sz_log2;
        if (pos < 32)
        r |= ((rs1 >> pos) & mask) << i;
    }
    return r;
}

unsigned long xperm_n (unsigned long rs1, unsigned long rs2) { return xperm(rs1, rs2, 2); }
unsigned long xperm_b (unsigned long rs1, unsigned long rs2) { return xperm(rs1, rs2, 3); }
unsigned long xperm_h (unsigned long rs1, unsigned long rs2) { return xperm(rs1, rs2, 4); }
unsigned long xperm_w (unsigned long rs1, unsigned long rs2) { return xperm(rs1, rs2, 5); }