/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zbt -O2" { target { riscv32*-*-* } } } */
/* { dg-options "-march=rv64gc_zbt -O2" { target { riscv64*-*-* } } } */

long cmov(long s, long b, long c) {
        return (s ? b : c);
}
long cmov2(long s, long b, long c) {
        return (s == 0 ? b : c);
}

/* { dg-final { scan-assembler-times "cmov\t" 2 } } */
