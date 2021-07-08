/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zbp -mabi=ilp32 -O2" } */
unsigned int xperm(unsigned int rs1, unsigned int rs2, int sz_log2)
{
    unsigned int r = 0;
    unsigned int sz = 1LL << sz_log2;
    unsigned int mask = (1LL << sz) - 1;
    for (int i = 0; i < 32; i += sz) 
    {
        unsigned int pos = ((rs2 >> i) & mask) << sz_log2;
        if (pos < 32)
        r |= ((rs1 >> pos) & mask) << i;
    }
    return r;
}

unsigned int xperm_n (unsigned int rs1, unsigned int rs2) { return xperm(rs1, rs2, 2); }
unsigned int xperm_b (unsigned int rs1, unsigned int rs2) { return xperm(rs1, rs2, 3); }
unsigned int xperm_h (unsigned int rs1, unsigned int rs2) { return xperm(rs1, rs2, 4); }
unsigned int xperm_w (unsigned int rs1, unsigned int rs2) { return xperm(rs1, rs2, 5); }

/* { dg-final { scan-assembler-times "xperm.n" 5 } } */
/* { dg-final { scan-assembler-times "xperm.b" 5 } } */
/* { dg-final { scan-assembler-times "xperm.h" 5 } } */
/* { dg-final { scan-assembler-times "xperm.w" 5 } } */