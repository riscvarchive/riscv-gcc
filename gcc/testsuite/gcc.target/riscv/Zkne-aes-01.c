/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zkne -mabi=ilp32 -O2" } */

int foo1(int rs1)
{
    return __builtin_riscv_aes32esi(rs1, 1);
}

int foo2(int rs1)
{
    return __builtin_riscv_aes32esmi(rs1, 1);
}

/* { dg-final { scan-assembler-times "aes32esi" 1 } } */
/* { dg-final { scan-assembler-times "aes32esmi" 1 } } */