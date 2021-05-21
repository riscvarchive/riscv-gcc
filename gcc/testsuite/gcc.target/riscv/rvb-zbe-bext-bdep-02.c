/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbe -mabi=lp64 -O2" } */
unsigned long long bext(unsigned long long rs1, unsigned long long rs2)
{
    unsigned long long r = 0;
    for (int i = 0, j = 0; i < 32; i++)
    {
        if ((rs2 >> i) & 1) 
        {
            if ((rs1 >> i) & 1) 
            {
                r |= (unsigned long long)1 << j;
            }
            j++;
        }
    }
    return r;
}


unsigned long long bdep(unsigned long long rs1, unsigned long long rs2)
{
    unsigned long long r = 0;
    for (int i = 0, j = 0; i < 32; i++)
    {
        if ((rs2 >> i) & 1) {
            if ((rs1 >> j) & 1){
                r |= (unsigned long long)1 << i;
            }
            j++;
        }
    }
    return r;
}

/* { dg-final { scan-assembler-times "bext" 1 } } */
/* { dg-final { scan-assembler-times "bdep" 1 } } */