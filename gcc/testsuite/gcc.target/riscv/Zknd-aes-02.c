/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zknd -mabi=lp64 -O2" } */

long foo1(long rs1, long rs2)
{
    return __builtin_riscv_aes64ds(rs1, rs2);
}

long foo2(long rs1, long rs2)
{
    return __builtin_riscv_aes64dsm(rs1, rs2);
}

long foo3(long rs1)
{
    return __builtin_riscv_aes64im(rs1);
}

/* { dg-final { scan-assembler-times "aes64ds" 2 } } */
/* { dg-final { scan-assembler-times "aes64dsm" 1 } } */
/* { dg-final { scan-assembler-times "aes64im" 1 } } */