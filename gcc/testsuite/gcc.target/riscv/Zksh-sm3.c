/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zksh -mabi=lp64 -O2" } */

long foo1(long rs1)
{
    return __builtin_riscv_sm3p0(rs1);
}

long foo2(long rs1)
{
    return __builtin_riscv_sm3p1(rs1);
}

/* { dg-final { scan-assembler-times "sm3p0" 1 } } */
/* { dg-final { scan-assembler-times "sm3p1" 1 } } */