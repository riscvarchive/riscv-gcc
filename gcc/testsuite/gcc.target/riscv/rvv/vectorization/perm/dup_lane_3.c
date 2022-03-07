/* { dg-do compile } */
/* { dg-options "-O -mriscv-vector-bits=2048 -mrvv --save-temps" } */

typedef unsigned char v128qi __attribute__((vector_size(128)));
typedef unsigned char v64qi __attribute__((vector_size(64)));
typedef unsigned char v32qi __attribute__((vector_size(32)));
typedef unsigned short v64hi __attribute__((vector_size(128)));
typedef unsigned short v32hi __attribute__((vector_size(64)));
typedef _Float16 v64hf __attribute__((vector_size(128)));
typedef _Float16 v32hf __attribute__((vector_size(64)));
typedef unsigned int v32si __attribute__((vector_size(128)));
typedef float v32sf __attribute__((vector_size(128)));

#define PERM0(B) B, B
#define PERM1(B) PERM0 (B), PERM0 (B)
#define PERM2(B) PERM1 (B), PERM1 (B)
#define PERM3(B) PERM2 (B), PERM2 (B)
#define PERM4(B) PERM3 (B), PERM3 (B)
#define PERM5(B) PERM4 (B), PERM4 (B)
#define PERM6(B) PERM5 (B), PERM5 (B)

v128qi
qi_dup_h_32 (v128qi x)
{
  return __builtin_shuffle (x, x, (v128qi) { PERM6 (32) });
}

v64qi
qi_dup_s_16 (v64qi x)
{
  return __builtin_shuffle (x, x, (v64qi) { PERM5 (16) });
}

v32qi
qi_dup_d_8 (v32qi x)
{
  return __builtin_shuffle (x, x, (v32qi) { PERM4 (8) });
}

v64hi
hi_dup_s_16 (v64hi x)
{
  return __builtin_shuffle (x, x, (v64hi) { PERM5 (16) });
}

v64hf
hf_dup_s_16 (v64hf x)
{
  return __builtin_shuffle (x, x, (v64hi) { PERM5 (16) });
}

v32hi
hi_dup_d_8 (v32hi x)
{
  return __builtin_shuffle (x, x, (v32hi) { PERM4 (8) });
}

v32hf
hf_dup_d_8 (v32hf x)
{
  return __builtin_shuffle (x, x, (v32hi) { PERM4 (8) });
}

v32si
si_dup_d_8 (v32si x)
{
  return __builtin_shuffle (x, x, (v32si) { PERM4 (8) });
}

v32sf
sf_dup_d_8 (v32sf x)
{
  return __builtin_shuffle (x, x, (v32si) { PERM4 (8) });
}

/* { dg-final { scan-assembler-times {\tvmv.v.x} 6 } } */
/* { dg-final { scan-assembler-times {\tvfmv.v.f} 3 } } */
