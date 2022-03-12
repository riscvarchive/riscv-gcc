/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-vect-details" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

float
double_reduc (float *i)
{
  float l = 0;

  for (int a = 0; a < 8; a++)
    for (int b = 0; b < 16; b++)
      {
        l += i[b * 4];
        l += i[b * 4 + 1];
        l += i[b * 4 + 2];
        l += i[b * 4 + 3];
      }
  return l;
}

/* { dg-final { scan-assembler-times {vfredosum\.vs} 1 } } */
/* { dg-final { scan-tree-dump "Detected double reduction" "vect" } } */
/* { dg-final { scan-tree-dump-not "OUTER LOOP VECTORIZED" "vect" } } */