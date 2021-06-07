/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zbb -O2" { target { riscv32*-*-* } } } */
/* { dg-options "-march=rv64gc_zbb -O2" { target { riscv64*-*-* } } } */

long sext_h(long a) {
	return (short)a;
}

/* { dg-final { scan-assembler-times "sext.h\t" 1 } } */
