/* { dg-do run } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize " } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "gather_load_29.c"
#include <stdio.h>


int main (void)
{
    int16_t dest_int16_t[] = {300,301};
    int16_t src_int16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
                             32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
                             48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
                             64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,
                             80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
                             96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
                             112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
                             128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
                             144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
                             160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
                             176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
                             192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
                             208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223
                            };
    int16_t expect_int16_t_91[] = {316,408};
    long len = 2;
    f_int16_t_91(dest_int16_t,src_int16_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int16_t[i]!=expect_int16_t_91[i] ) {
            printf("f_int16_t_91=index:%d,dest_int16_t:%d,expect_int16_t_91:%d\n",i,dest_int16_t[i],expect_int16_t_91[i]);
            __builtin_abort();
        }
    }


    int16_t expect_int16_t_177[] = {332,601};
    f_int16_t_177(dest_int16_t,src_int16_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int16_t[i]!=expect_int16_t_177[i] ) {
            printf("f_int16_t_177=index:%d,dest_int16_t:%d,expect_int16_t_177:%d\n",i,dest_int16_t[i],expect_int16_t_177[i]);
            __builtin_abort();
        }
    }

    int16_t expect_int16_t_11[] = {348,628};
    f_int16_t_11(dest_int16_t,src_int16_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int16_t[i]!=expect_int16_t_11[i] ) {
            printf("f_int16_t_11=index:%d,dest_int16_t:%d,expect_int16_t_11:%d\n",i,dest_int16_t[i],expect_int16_t_11[i]);
            __builtin_abort();
        }
    }

    int16_t expect_int16_t_200[] = {364,844};
    f_int16_t_200(dest_int16_t,src_int16_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int16_t[i]!=expect_int16_t_200[i] ) {
            printf("f_int16_t_200=index:%d,dest_int16_t:%d,expect_int16_t_200:%d\n",i,dest_int16_t[i],expect_int16_t_200[i]);
            __builtin_abort();
        }
    }

    int16_t expect_int16_t_m100[] = {580,960};
    int16_t *p_int16_t_m100 = src_int16_t + 200;
    f_int16_t_m100(dest_int16_t,p_int16_t_m100,len);
    for(long i=0; i<len; i++) {
        if (dest_int16_t[i]!=expect_int16_t_m100[i] ) {
            printf("f_int16_t_m100=index:%d,dest_int16_t:%d,expect_int16_t_m100:%d\n",i,dest_int16_t[i],expect_int16_t_m100[i]);
            __builtin_abort();
        }
    }

    uint16_t dest_uint16_t[] = {300,301};
    uint16_t src_uint16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
                               32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
                               48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
                               64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,
                               80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
                               96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
                               112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
                               128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
                               144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
                               160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
                               176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
                               192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
                               208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223
                              };
    uint16_t expect_uint16_t_91[] = {316,408};
    f_uint16_t_91(dest_uint16_t,src_uint16_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t_91[i] ) {
            printf("f_uint16_t_91=index:%d,dest_uint16_t:%d,expect_uint16_t_91:%d\n",i,dest_uint16_t[i],expect_uint16_t_91[i]);
            __builtin_abort();
        }
    }


    uint16_t expect_uint16_t_177[] = {332,601};
    f_uint16_t_177(dest_uint16_t,src_uint16_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t_177[i] ) {
            printf("f_uint16_t_177=index:%d,dest_uint16_t:%d,expect_uint16_t_177:%d\n",i,dest_uint16_t[i],expect_uint16_t_177[i]);
            __builtin_abort();
        }
    }

    uint16_t expect_uint16_t_11[] = {348,628};
    f_uint16_t_11(dest_uint16_t,src_uint16_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t_11[i] ) {
            printf("f_uint16_t_11=index:%d,dest_uint16_t:%d,expect_uint16_t_11:%d\n",i,dest_uint16_t[i],expect_uint16_t_11[i]);
            __builtin_abort();
        }
    }

    uint16_t expect_uint16_t_200[] = {364,844};
    f_uint16_t_200(dest_uint16_t,src_uint16_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t_200[i] ) {
            printf("f_uint16_t_200=index:%d,dest_uint16_t:%d,expect_uint16_t_200:%d\n",i,dest_uint16_t[i],expect_uint16_t_200[i]);
            __builtin_abort();
        }
    }

    uint16_t expect_uint16_t_m100[] = {580,960};
    uint16_t *p_uint16_t_m100 = src_uint16_t + 200;
    f_uint16_t_m100(dest_uint16_t,p_uint16_t_m100,len);
    for(long i=0; i<len; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t_m100[i] ) {
            printf("f_uint16_t_m100=index:%d,dest_uint16_t:%d,expect_uint16_t_m100:%d\n",i,dest_uint16_t[i],expect_uint16_t_m100[i]);
            __builtin_abort();
        }
    }

    int32_t dest_int32_t[] = {300,301};
    int32_t src_int32_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
                             32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
                             48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
                             64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,
                             80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
                             96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
                             112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
                             128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
                             144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
                             160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
                             176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
                             192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
                             208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223
                            };
    int32_t expect_int32_t_91[] = {316,408};
    f_int32_t_91(dest_int32_t,src_int32_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int32_t[i]!=expect_int32_t_91[i] ) {
            printf("f_int32_t_91=index:%d,dest_int32_t:%d,expect_int32_t_91:%d\n",i,dest_int32_t[i],expect_int32_t_91[i]);
            __builtin_abort();
        }
    }


    int32_t expect_int32_t_177[] = {332,601};
    f_int32_t_177(dest_int32_t,src_int32_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int32_t[i]!=expect_int32_t_177[i] ) {
            printf("f_int32_t_177=index:%d,dest_int32_t:%d,expect_int32_t_177:%d\n",i,dest_int32_t[i],expect_int32_t_177[i]);
            __builtin_abort();
        }
    }

    int32_t expect_int32_t_11[] = {348,628};
    f_int32_t_11(dest_int32_t,src_int32_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int32_t[i]!=expect_int32_t_11[i] ) {
            printf("f_int32_t_11=index:%d,dest_int32_t:%d,expect_int32_t_11:%d\n",i,dest_int32_t[i],expect_int32_t_11[i]);
            __builtin_abort();
        }
    }

    int32_t expect_int32_t_200[] = {364,844};
    f_int32_t_200(dest_int32_t,src_int32_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int32_t[i]!=expect_int32_t_200[i] ) {
            printf("f_int32_t_200=index:%d,dest_int32_t:%d,expect_int32_t_200:%d\n",i,dest_int32_t[i],expect_int32_t_200[i]);
            __builtin_abort();
        }
    }

    int32_t expect_int32_t_m100[] = {580,960};
    int32_t *p_int32_t_m100 = src_int32_t + 200;
    f_int32_t_m100(dest_int32_t,p_int32_t_m100,len);
    for(long i=0; i<len; i++) {
        if (dest_int32_t[i]!=expect_int32_t_m100[i] ) {
            printf("f_int32_t_m100=index:%d,dest_int32_t:%d,expect_int32_t_m100:%d\n",i,dest_int32_t[i],expect_int32_t_m100[i]);
            __builtin_abort();
        }
    }

    uint32_t dest_uint32_t[] = {300,301};
    uint32_t src_uint32_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
                               32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
                               48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
                               64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,
                               80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
                               96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
                               112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
                               128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
                               144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
                               160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
                               176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
                               192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
                               208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223
                              };
    uint32_t expect_uint32_t_91[] = {316,408};
    f_uint32_t_91(dest_uint32_t,src_uint32_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t_91[i] ) {
            printf("f_uint32_t_91=index:%d,dest_uint32_t:%d,expect_uint32_t_91:%d\n",i,dest_uint32_t[i],expect_uint32_t_91[i]);
            __builtin_abort();
        }
    }


    uint32_t expect_uint32_t_177[] = {332,601};
    f_uint32_t_177(dest_uint32_t,src_uint32_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t_177[i] ) {
            printf("f_uint32_t_177=index:%d,dest_uint32_t:%d,expect_uint32_t_177:%d\n",i,dest_uint32_t[i],expect_uint32_t_177[i]);
            __builtin_abort();
        }
    }

    uint32_t expect_uint32_t_11[] = {348,628};
    f_uint32_t_11(dest_uint32_t,src_uint32_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t_11[i] ) {
            printf("f_uint32_t_11=index:%d,dest_uint32_t:%d,expect_uint32_t_11:%d\n",i,dest_uint32_t[i],expect_uint32_t_11[i]);
            __builtin_abort();
        }
    }

    uint32_t expect_uint32_t_200[] = {364,844};
    f_uint32_t_200(dest_uint32_t,src_uint32_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t_200[i] ) {
            printf("f_uint32_t_200=index:%d,dest_uint32_t:%d,expect_uint32_t_200:%d\n",i,dest_uint32_t[i],expect_uint32_t_200[i]);
            __builtin_abort();
        }
    }

    uint32_t expect_uint32_t_m100[] = {580,960};
    uint32_t *p_uint32_t_m100 = src_uint32_t + 200;
    f_uint32_t_m100(dest_uint32_t,p_uint32_t_m100,len);
    for(long i=0; i<len; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t_m100[i] ) {
            printf("f_uint32_t_m100=index:%d,dest_uint32_t:%d,expect_uint32_t_m100:%d\n",i,dest_uint32_t[i],expect_uint32_t_m100[i]);
            __builtin_abort();
        }
    }

    int64_t dest_int64_t[] = {300,301};
    int64_t src_int64_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
                             32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
                             48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
                             64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,
                             80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
                             96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
                             112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
                             128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
                             144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
                             160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
                             176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
                             192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
                             208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223
                            };
    int64_t expect_int64_t_91[] = {316,408};
    f_int64_t_91(dest_int64_t,src_int64_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int64_t[i]!=expect_int64_t_91[i] ) {
            printf("f_int64_t_91=index:%d,dest_int64_t:%d,expect_int64_t_91:%d\n",i,dest_int64_t[i],expect_int64_t_91[i]);
            __builtin_abort();
        }
    }


    int64_t expect_int64_t_177[] = {332,601};
    f_int64_t_177(dest_int64_t,src_int64_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int64_t[i]!=expect_int64_t_177[i] ) {
            printf("f_int64_t_177=index:%d,dest_int64_t:%d,expect_int64_t_177:%d\n",i,dest_int64_t[i],expect_int64_t_177[i]);
            __builtin_abort();
        }
    }

    int64_t expect_int64_t_11[] = {348,628};
    f_int64_t_11(dest_int64_t,src_int64_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int64_t[i]!=expect_int64_t_11[i] ) {
            printf("f_int64_t_11=index:%d,dest_int64_t:%d,expect_int64_t_11:%d\n",i,dest_int64_t[i],expect_int64_t_11[i]);
            __builtin_abort();
        }
    }

    int64_t expect_int64_t_200[] = {364,844};
    f_int64_t_200(dest_int64_t,src_int64_t,len);
    for(long i=0; i<len; i++) {
        if (dest_int64_t[i]!=expect_int64_t_200[i] ) {
            printf("f_int64_t_200=index:%d,dest_int64_t:%d,expect_int64_t_200:%d\n",i,dest_int64_t[i],expect_int64_t_200[i]);
            __builtin_abort();
        }
    }

    int64_t expect_int64_t_m100[] = {580,960};
    int64_t *p_int64_t_m100 = src_int64_t + 200;
    f_int64_t_m100(dest_int64_t,p_int64_t_m100,len);
    for(long i=0; i<len; i++) {
        if (dest_int64_t[i]!=expect_int64_t_m100[i] ) {
            printf("f_int64_t_m100=index:%d,dest_int64_t:%d,expect_int64_t_m100:%d\n",i,dest_int64_t[i],expect_int64_t_m100[i]);
            __builtin_abort();
        }
    }

    uint64_t dest_uint64_t[] = {300,301};
    uint64_t src_uint64_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
                               32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
                               48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
                               64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,
                               80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
                               96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
                               112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
                               128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
                               144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
                               160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
                               176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
                               192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
                               208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223
                              };
    uint64_t expect_uint64_t_91[] = {316,408};
    f_uint64_t_91(dest_uint64_t,src_uint64_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t_91[i] ) {
            printf("f_uint64_t_91=index:%d,dest_uint64_t:%d,expect_uint64_t_91:%d\n",i,dest_uint64_t[i],expect_uint64_t_91[i]);
            __builtin_abort();
        }
    }


    uint64_t expect_uint64_t_177[] = {332,601};
    f_uint64_t_177(dest_uint64_t,src_uint64_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t_177[i] ) {
            printf("f_uint64_t_177=index:%d,dest_uint64_t:%d,expect_uint64_t_177:%d\n",i,dest_uint64_t[i],expect_uint64_t_177[i]);
            __builtin_abort();
        }
    }

    uint64_t expect_uint64_t_11[] = {348,628};
    f_uint64_t_11(dest_uint64_t,src_uint64_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t_11[i] ) {
            printf("f_uint64_t_11=index:%d,dest_uint64_t:%d,expect_uint64_t_11:%d\n",i,dest_uint64_t[i],expect_uint64_t_11[i]);
            __builtin_abort();
        }
    }

    uint64_t expect_uint64_t_200[] = {364,844};
    f_uint64_t_200(dest_uint64_t,src_uint64_t,len);
    for(long i=0; i<len; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t_200[i] ) {
            printf("f_uint64_t_200=index:%d,dest_uint64_t:%d,expect_uint64_t_200:%d\n",i,dest_uint64_t[i],expect_uint64_t_200[i]);
            __builtin_abort();
        }
    }

    uint64_t expect_uint64_t_m100[] = {580,960};
    uint64_t *p_uint64_t_m100 = src_uint64_t + 200;
    f_uint64_t_m100(dest_uint64_t,p_uint64_t_m100,len);
    for(long i=0; i<len; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t_m100[i] ) {
            printf("f_uint64_t_m100=index:%d,dest_uint64_t:%d,expect_uint64_t_m100:%d\n",i,dest_uint64_t[i],expect_uint64_t_m100[i]);
            __builtin_abort();
        }
    }

    _Float16 dest__Float16[] = {300.0,301.0};
    _Float16 src__Float16[] = {16.0,17.0,18.0,19.0,20.0,21.0,22.0,23.0,24.0,25.0,26.0,27.0,28.0,29.0,30.0,31.0,
                               32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0,
                               48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0,
                               64.0,65.0,66.0,67.0,68.0,69.0,70.0,71.0,72.0,73.0,74.0,75.0,76.0,77.0,78.0,79.0,
                               80.0,81.0,82.0,83.0,84.0,85.0,86.0,87.0,88.0,89.0,90.0,91.0,92.0,93.0,94.0,95.0,
                               96.0,97.0,98.0,99.0,100.0,101.0,102.0,103.0,104.0,105.0,106.0,107.0,108.0,109.0,110.0,111.0,
                               112.0,113.0,114.0,115.0,116.0,117.0,118.0,119.0,120.0,121.0,122.0,123.0,124.0,125.0,126.0,127.0,
                               128.0,129.0,130.0,131.0,132.0,133.0,134.0,135.0,136.0,137.0,138.0,139.0,140.0,141.0,142.0,143.0,
                               144.0,145.0,146.0,147.0,148.0,149.0,150.0,151.0,152.0,153.0,154.0,155.0,156.0,157.0,158.0,159.0,
                               160.0,161.0,162.0,163.0,164.0,165.0,166.0,167.0,168.0,169.0,170.0,171.0,172.0,173.0,174.0,175.0,
                               176.0,177.0,178.0,179.0,180.0,181.0,182.0,183.0,184.0,185.0,186.0,187.0,188.0,189.0,190.0,191.0,
                               192.0,193.0,194.0,195.0,196.0,197.0,198.0,199.0,200.0,201.0,202.0,203.0,204.0,205.0,206.0,207.0,
                               208.0,209.0,210.0,211.0,212.0,213.0,214.0,215.0,216.0,217.0,218.0,219.0,220.0,221.0,222.0,223.0
                              };
    _Float16 expect__Float16_91[] = {316.0,408.0};
    f__Float16_91(dest__Float16,src__Float16,len);
    for(long i=0; i<len; i++) {
        if (dest__Float16[i]!=expect__Float16_91[i] ) {
            printf("f__Float16_91=index:%d,dest__Float16:%d,expect__Float16_91:%d\n",i,dest__Float16[i],expect__Float16_91[i]);
            __builtin_abort();
        }
    }


    _Float16 expect__Float16_177[] = {332.0,601.0};
    f__Float16_177(dest__Float16,src__Float16,len);
    for(long i=0; i<len; i++) {
        if (dest__Float16[i]!=expect__Float16_177[i] ) {
            printf("f__Float16_177=index:%d,dest__Float16:%d,expect__Float16_177:%d\n",i,dest__Float16[i],expect__Float16_177[i]);
            __builtin_abort();
        }
    }

    _Float16 expect__Float16_11[] = {348.0,628.0};
    f__Float16_11(dest__Float16,src__Float16,len);
    for(long i=0; i<len; i++) {
        if (dest__Float16[i]!=expect__Float16_11[i] ) {
            printf("f__Float16_11=index:%d,dest__Float16:%d,expect__Float16_11:%d\n",i,dest__Float16[i],expect__Float16_11[i]);
            __builtin_abort();
        }
    }

    _Float16 expect__Float16_200[] = {364.0,844.0};
    f__Float16_200(dest__Float16,src__Float16,len);
    for(long i=0; i<len; i++) {
        if (dest__Float16[i]!=expect__Float16_200[i] ) {
            printf("f__Float16_200=index:%d,dest__Float16:%d,expect__Float16_200:%d\n",i,dest__Float16[i],expect__Float16_200[i]);
            __builtin_abort();
        }
    }

    _Float16 expect__Float16_m100[] = {580.0,960.0};
    _Float16 *p__Float16_m100 = src__Float16 + 200;
    f__Float16_m100(dest__Float16,p__Float16_m100,len);
    for(long i=0; i<len; i++) {
        if (dest__Float16[i]!=expect__Float16_m100[i] ) {
            printf("f__Float16_m100=index:%d,dest__Float16:%d,expect__Float16_m100:%d\n",i,dest__Float16[i],expect__Float16_m100[i]);
            __builtin_abort();
        }
    }


    float dest_float[] = {300.0,301.0};
    float src_float[] = {16.0,17.0,18.0,19.0,20.0,21.0,22.0,23.0,24.0,25.0,26.0,27.0,28.0,29.0,30.0,31.0,
                         32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0,
                         48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0,
                         64.0,65.0,66.0,67.0,68.0,69.0,70.0,71.0,72.0,73.0,74.0,75.0,76.0,77.0,78.0,79.0,
                         80.0,81.0,82.0,83.0,84.0,85.0,86.0,87.0,88.0,89.0,90.0,91.0,92.0,93.0,94.0,95.0,
                         96.0,97.0,98.0,99.0,100.0,101.0,102.0,103.0,104.0,105.0,106.0,107.0,108.0,109.0,110.0,111.0,
                         112.0,113.0,114.0,115.0,116.0,117.0,118.0,119.0,120.0,121.0,122.0,123.0,124.0,125.0,126.0,127.0,
                         128.0,129.0,130.0,131.0,132.0,133.0,134.0,135.0,136.0,137.0,138.0,139.0,140.0,141.0,142.0,143.0,
                         144.0,145.0,146.0,147.0,148.0,149.0,150.0,151.0,152.0,153.0,154.0,155.0,156.0,157.0,158.0,159.0,
                         160.0,161.0,162.0,163.0,164.0,165.0,166.0,167.0,168.0,169.0,170.0,171.0,172.0,173.0,174.0,175.0,
                         176.0,177.0,178.0,179.0,180.0,181.0,182.0,183.0,184.0,185.0,186.0,187.0,188.0,189.0,190.0,191.0,
                         192.0,193.0,194.0,195.0,196.0,197.0,198.0,199.0,200.0,201.0,202.0,203.0,204.0,205.0,206.0,207.0,
                         208.0,209.0,210.0,211.0,212.0,213.0,214.0,215.0,216.0,217.0,218.0,219.0,220.0,221.0,222.0,223.0
                        };
    float expect_float_91[] = {316.0,408.0};
    f_float_91(dest_float,src_float,len);
    for(long i=0; i<len; i++) {
        if (dest_float[i]!=expect_float_91[i] ) {
            printf("f_float_91=index:%d,dest_float:%d,expect_float_91:%d\n",i,dest_float[i],expect_float_91[i]);
            __builtin_abort();
        }
    }


    float expect_float_177[] = {332.0,601.0};
    f_float_177(dest_float,src_float,len);
    for(long i=0; i<len; i++) {
        if (dest_float[i]!=expect_float_177[i] ) {
            printf("f_float_177=index:%d,dest_float:%d,expect_float_177:%d\n",i,dest_float[i],expect_float_177[i]);
            __builtin_abort();
        }
    }

    float expect_float_11[] = {348.0,628.0};
    f_float_11(dest_float,src_float,len);
    for(long i=0; i<len; i++) {
        if (dest_float[i]!=expect_float_11[i] ) {
            printf("f_float_11=index:%d,dest_float:%d,expect_float_11:%d\n",i,dest_float[i],expect_float_11[i]);
            __builtin_abort();
        }
    }

    float expect_float_200[] = {364.0,844.0};
    f_float_200(dest_float,src_float,len);
    for(long i=0; i<len; i++) {
        if (dest_float[i]!=expect_float_200[i] ) {
            printf("f_float_200=index:%d,dest_float:%d,expect_float_200:%d\n",i,dest_float[i],expect_float_200[i]);
            __builtin_abort();
        }
    }

    float expect_float_m100[] = {580.0,960.0};
    float *p_float_m100 = src_float + 200;
    f_float_m100(dest_float,p_float_m100,len);
    for(long i=0; i<len; i++) {
        if (dest_float[i]!=expect_float_m100[i] ) {
            printf("f_float_m100=index:%d,dest_float:%d,expect_float_m100:%d\n",i,dest_float[i],expect_float_m100[i]);
            __builtin_abort();
        }
    }


    double dest_double[] = {300.0,301.0};
    double src_double[] = {16.0,17.0,18.0,19.0,20.0,21.0,22.0,23.0,24.0,25.0,26.0,27.0,28.0,29.0,30.0,31.0,
                           32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0,
                           48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0,
                           64.0,65.0,66.0,67.0,68.0,69.0,70.0,71.0,72.0,73.0,74.0,75.0,76.0,77.0,78.0,79.0,
                           80.0,81.0,82.0,83.0,84.0,85.0,86.0,87.0,88.0,89.0,90.0,91.0,92.0,93.0,94.0,95.0,
                           96.0,97.0,98.0,99.0,100.0,101.0,102.0,103.0,104.0,105.0,106.0,107.0,108.0,109.0,110.0,111.0,
                           112.0,113.0,114.0,115.0,116.0,117.0,118.0,119.0,120.0,121.0,122.0,123.0,124.0,125.0,126.0,127.0,
                           128.0,129.0,130.0,131.0,132.0,133.0,134.0,135.0,136.0,137.0,138.0,139.0,140.0,141.0,142.0,143.0,
                           144.0,145.0,146.0,147.0,148.0,149.0,150.0,151.0,152.0,153.0,154.0,155.0,156.0,157.0,158.0,159.0,
                           160.0,161.0,162.0,163.0,164.0,165.0,166.0,167.0,168.0,169.0,170.0,171.0,172.0,173.0,174.0,175.0,
                           176.0,177.0,178.0,179.0,180.0,181.0,182.0,183.0,184.0,185.0,186.0,187.0,188.0,189.0,190.0,191.0,
                           192.0,193.0,194.0,195.0,196.0,197.0,198.0,199.0,200.0,201.0,202.0,203.0,204.0,205.0,206.0,207.0,
                           208.0,209.0,210.0,211.0,212.0,213.0,214.0,215.0,216.0,217.0,218.0,219.0,220.0,221.0,222.0,223.0
                          };
    double expect_double_91[] = {316.0,408.0};
    f_double_91(dest_double,src_double,len);
    for(long i=0; i<len; i++) {
        if (dest_double[i]!=expect_double_91[i] ) {
            printf("f_double_91=index:%d,dest_double:%d,expect_double_91:%d\n",i,dest_double[i],expect_double_91[i]);
            __builtin_abort();
        }
    }


    double expect_double_177[] = {332.0,601.0};
    f_double_177(dest_double,src_double,len);
    for(long i=0; i<len; i++) {
        if (dest_double[i]!=expect_double_177[i] ) {
            printf("f_double_177=index:%d,dest_double:%d,expect_double_177:%d\n",i,dest_double[i],expect_double_177[i]);
            __builtin_abort();
        }
    }

    double expect_double_11[] = {348.0,628.0};
    f_double_11(dest_double,src_double,len);
    for(long i=0; i<len; i++) {
        if (dest_double[i]!=expect_double_11[i] ) {
            printf("f_double_11=index:%d,dest_double:%d,expect_double_11:%d\n",i,dest_double[i],expect_double_11[i]);
            __builtin_abort();
        }
    }

    double expect_double_200[] = {364.0,844.0};
    f_double_200(dest_double,src_double,len);
    for(long i=0; i<len; i++) {
        if (dest_double[i]!=expect_double_200[i] ) {
            printf("f_double_200=index:%d,dest_double:%d,expect_double_200:%d\n",i,dest_double[i],expect_double_200[i]);
            __builtin_abort();
        }
    }

    double expect_double_m100[] = {580.0,960.0};
    double *p_double_m100 = src_double + 200;
    f_double_m100(dest_double,p_double_m100,len);
    for(long i=0; i<len; i++) {
        if (dest_double[i]!=expect_double_m100[i] ) {
            printf("f_double_m100=index:%d,dest_double:%d,expect_double_m100:%d\n",i,dest_double[i],expect_double_m100[i]);
            __builtin_abort();
        }
    }



    return 0;
}
