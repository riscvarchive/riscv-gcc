/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */



#include <stdio.h>
#include "memcpy_1.c"


int  main(void )
{

    char cpy_in[]= "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig";
    char cpy_out[150]= "";
    size_t cpy_size= 128;
    char cpy_except[150] = "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefgh";
    do_it_cpy(cpy_in,cpy_out,cpy_size);
    for(int i=0; i<150; i++) {
        if (cpy_out[i]!=cpy_except[i] ) {
            printf("do_it_cpy=index:%d,cpy_out:%d,cpy_except:%d\n",i,cpy_out[i],cpy_except[i]);
            __builtin_abort();
        }
    }

    char cpy_large_in[]= "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                         "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                         "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                         "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                         "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                         "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                         "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                         "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                         "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                         "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                         "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig";
    char cpy_large_out[1100]= "";
    char cpy_large_except[1100] = "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                                  "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                                  "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                                  "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                                  "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                                  "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                                  "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                                  "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                                  "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                                  "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig"
                                  "abcdefghigabcdefghigabcd";
    do_it_cpy_large(cpy_large_in,cpy_large_out);
    for(int i=0; i<1100; i++) {
        if (cpy_large_out[i]!=cpy_large_except[i] ) {
            printf("do_it_cpy_large=index:%d,cpy_large_out:%d,cpy_large_except:%d\n",i,cpy_large_out[i],cpy_large_except[i]);
            __builtin_abort();
        }
    }


    char cpy_127_in[]= "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig";
    char cpy_127_out[150]= "";
    char cpy_127_except[150] = "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefg";
    do_it_cpy_127(cpy_127_in,cpy_127_out);
    for(int i=0; i<150; i++) {
        if (cpy_127_out[i]!=cpy_127_except[i] ) {
            printf("do_it_cpy_127=index:%d,cpy_127_out:%d,cpy_127_except:%d\n",i,cpy_127_out[i],cpy_127_except[i]);
            __builtin_abort();
        }
    }

    char cpy_128_in[]= "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghig";
    char cpy_128_out[150]= "";
    char cpy_128_except[150] = "abcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefghigabcdefgh";
    do_it_cpy_128(cpy_128_in,cpy_128_out);
    for(int i=0; i<150; i++) {
        if (cpy_128_out[i]!=cpy_128_except[i] ) {
            printf("do_it_cpy_128=index:%d,cpy_128_out:%d,cpy_128_except:%d\n",i,cpy_128_out[i],cpy_128_except[i]);
            __builtin_abort();
        }
    }





    return 0;
}


