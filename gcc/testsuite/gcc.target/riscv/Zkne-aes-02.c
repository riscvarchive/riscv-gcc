/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zkne -mabi=lp64 -O2" } */

long foo1(long rs1, long rs2)
{
    return __builtin_riscv_aes64es(rs1, rs2);
}

long foo2(long rs1, long rs2)
{
    return __builtin_riscv_aes64esm(rs1, rs2);
}

long foo3(long rs1)
{
    return __builtin_riscv_aes64ks1i(rs1, 1);
}

long foo4(long rs1, long rs2)
{
    return __builtin_riscv_aes64ks2(rs1, rs2);
}

/* { dg-final { scan-assembler-times "aes64es" 2 } } */
/* { dg-final { scan-assembler-times "aes64esm" 1 } } */
/* { dg-final { scan-assembler-times "aes64ks1i" 1 } } */
/* { dg-final { scan-assembler-times "aes64ks2" 1 } } */