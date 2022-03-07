/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-vect-details --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#define N 32

/* Simple condition reduction.  */

int __attribute__ ((noinline, noclone))
condition_reduction (int *a, int min_v)
{
  int last = 66; /* High start value.  */

  for (int i = 0; i < N; i++)
    if (a[i] < min_v)
      last = i;

  return last;
}

/* { dg-final { scan-tree-dump "operating on partial vectors." "vect" } } */
/* { dg-final { scan-assembler {\tvcpop.m} } } */
/* { dg-final { scan-assembler {\tvcompress.vm} } } */
