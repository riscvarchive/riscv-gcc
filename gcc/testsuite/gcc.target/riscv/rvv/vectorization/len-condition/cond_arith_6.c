/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

void
f (float *x)
{
  for (int i = 0; i < 100; ++i)
    if (x[i] > 1.0f)
      x[i] -= 1.0f;
}

/* { dg-final { scan-assembler-times {\tvfsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} 1 } } */