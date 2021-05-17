/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zkr -mabi=lp64 -O2" } */

long foo1()
{
    return __builtin_riscv_pollentropy();
}

long foo2()
{
    return __builtin_riscv_getnoise();
}

/* { dg-final { scan-assembler-times "pollentropy" 2 } } */
/* { dg-final { scan-assembler-times "getnoise" 1 } } */