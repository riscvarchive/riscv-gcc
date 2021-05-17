/* { dg-do compile } */
/* { dg-options "-march=rv64i_zksed -mabi=lp64 -O2" } */

long foo1(long rs1)
{
    return __builtin_riscv_sm4ed(rs1, 1);
}

long foo2(long rs1)
{
    return __builtin_riscv_sm4ks(rs1, 2);
}



/* { dg-final { scan-assembler-times "sm4ed" 1 } } */
/* { dg-final { scan-assembler-times "sm4ks" 1 } } */