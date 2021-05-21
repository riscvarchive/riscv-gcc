/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zbp -mabi=ilp32 -O2" } */

unsigned long shfl32(unsigned long rs1, unsigned long rs2)
{
    unsigned long x = rs1;
    int shamt = rs2 & 15;
    if (shamt & 8) x = shuffle32_stage(x, 0x00ff0000, 0x0000ff00, 8);
    if (shamt & 4) x = shuffle32_stage(x, 0x0f000f00, 0x00f000f0, 4);
    if (shamt & 2) x = shuffle32_stage(x, 0x30303030, 0x0c0c0c0c, 2);
    if (shamt & 1) x = shuffle32_stage(x, 0x44444444, 0x22222222, 1);
    return x;
}

unsigned long unshfl32(unsigned long rs1, unsigned long rs2)
{
    unsigned long x = rs1;
    int shamt = rs2 & 15;
    if (shamt & 1) x = shuffle32_stage(x, 0x44444444, 0x22222222, 1);
    if (shamt & 2) x = shuffle32_stage(x, 0x30303030, 0x0c0c0c0c, 2);
    if (shamt & 4) x = shuffle32_stage(x, 0x0f000f00, 0x00f000f0, 4);
    if (shamt & 8) x = shuffle32_stage(x, 0x00ff0000, 0x0000ff00, 8);
    return x;
}

/* { dg-final { scan-assembler-times "shlfi" 1 } } */
/* { dg-final { scan-assembler-times "unshlfi" 1 } } */