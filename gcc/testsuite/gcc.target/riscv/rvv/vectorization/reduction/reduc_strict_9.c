/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-vect-details" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

float
double_reduc (float *i, float *j)
{
  float k = 0, l = 0;

  for (int a = 0; a < 8; a++)
    for (int b = 0; b < 100; b++)
      {
        k += i[b];
        l += j[b];
      }
  return l * k;
}

/* { dg-final { scan-assembler-times {vfredosum\.vs} 2 } } */
/* { dg-final { scan-tree-dump "Detected double reduction" "vect" } } */
/* { dg-final { scan-tree-dump-not "OUTER LOOP VECTORIZED" "vect" } } */