/* { dg-do compile } */
/* { dg-options "-march=rv64i_zknh -mabi=lp64 -O2" } */

long foo1(long rs1)
{
    return __builtin_riscv_sha512sig0(rs1);
}

long foo2(long rs1)
{
    return __builtin_riscv_sha512sig1(rs1);
}


long foo3(long rs1)
{
    return __builtin_riscv_sha512sum0(rs1);
}

long foo4(long rs1)
{
    return __builtin_riscv_sha512sum1(rs1);
}

/* { dg-final { scan-assembler-times "sha512sig0" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig1" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum0" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum1" 1 } } */