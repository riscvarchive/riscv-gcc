/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

void __attribute__ ((noinline, noclone))
foo (double *x, int m)
{
  for (int i = 0; i < 256; ++i)
    x[i * m] += x[i * m];
}

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 1 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.LEN_SCATTER_STORE" 1 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 1 "optimized" } } */