/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zknh -mabi=ilp32 -O2" } */

int foo1(int rs1, int rs2)
{
    return __builtin_riscv_sha512sig0h(rs1, rs2);
}

int foo2(int rs1, int rs2)
{
    return __builtin_riscv_sha512sig0l(rs1, rs2);
}

int foo3(int rs1, int rs2)
{
    return __builtin_riscv_sha512sig1h(rs1, rs2);
}

int foo4(int rs1, int rs2)
{
    return __builtin_riscv_sha512sig1l(rs1, rs2);
}

int foo5(int rs1, int rs2)
{
    return __builtin_riscv_sha512sum0r(rs1, rs2);
}

int foo6(int rs1, int rs2)
{
    return __builtin_riscv_sha512sum1r(rs1, rs2);
}

/* { dg-final { scan-assembler-times "sha512sig0h" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig0l" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig1h" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig1l" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum0r" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum1r" 1 } } */

