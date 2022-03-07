/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize " } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "gather_load_31.c"
#include <stdio.h>

int16_t src_int16_t[200000]= {0};
int16_t src_uint16_t[200000]= {0};
int32_t src_int32_t[200000]= {0};
uint32_t src_uint32_t[200000]= {0};
int64_t src_int64_t[200000]= {0};
uint64_t src_uint64_t[200000]= {0};
_Float16 src__Float16[200000]= {0};
float src_float[200000]= {0};
double src_double[200000]= {0};

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_int16_t_real (int16_t *arr,int start_ele,int len)
{
    for(int i=start_ele; i<len+start_ele; i++)
        arr[i-start_ele]=(int16_t)i;
}
#pragma GCC pop_options


#pragma GCC push_options
#pragma GCC optimize("O0")
void get_int16_t_except (int16_t *expect,int16_t *dst,int16_t *src,int var,int len)
{
    for(int i=0; i<len; i++)
        expect[i] = dst[i] + src[i * var];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_uint16_t_real (uint16_t *arr,int start_ele,int len)
{
    for(int i=start_ele; i<len+start_ele; i++)
        arr[i-start_ele]=(uint16_t)i;
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_uint16_t_except (uint16_t *expect,uint16_t *dst,uint16_t *src,int var,int len)
{
    for(int i=0; i<len; i++)
        expect[i] = dst[i] + src[i * var];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_int32_t_real (int32_t *arr,int start_ele,int len)
{
    for(int i=start_ele; i<len+start_ele; i++)
        arr[i-start_ele]=(int32_t)i;
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_int32_t_except (int32_t *expect,int32_t *dst,int32_t *src,int var,int len)
{
    for(int i=0; i<len; i++)
        expect[i] = dst[i] + src[i * var];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_uint32_t_real (uint32_t *arr,int start_ele,int len)
{
    for(int i=start_ele; i<len+start_ele; i++)
        arr[i-start_ele]=(uint32_t)i;
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_uint32_t_except (uint32_t *expect,uint32_t *dst,uint32_t *src,int var,int len)
{
    for(int i=0; i<len; i++)
        expect[i] = dst[i] + src[i * var];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_int64_t_real (int64_t *arr,int start_ele,int len)
{
    for(int i=start_ele; i<len+start_ele; i++)
        arr[i-start_ele]=(int64_t)i;
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_int64_t_except (int64_t *expect,int64_t *dst,int64_t *src,int var,int len)
{
    for(int i=0; i<len; i++)
        expect[i] = dst[i] + src[i * var];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_uint64_t_real (uint64_t *arr,int start_ele,int len)
{
    for(int i=start_ele; i<len+start_ele; i++)
        arr[i-start_ele]=(uint64_t)i;
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_uint64_t_except (uint64_t *expect,uint64_t *dst,uint64_t *src,int var,int len)
{
    for(int i=0; i<len; i++)
        expect[i] = dst[i] + src[i * var];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get__Float16_real (_Float16 *arr,int start_ele,int len)
{
    for(int i=start_ele; i<len+start_ele; i++)
        arr[i-start_ele]=(_Float16)i;
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get__Float16_except (_Float16 *expect,_Float16 *dst,_Float16 *src,int var,int len)
{
    for(int i=0; i<len; i++)
        expect[i] = dst[i] + src[i * var];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_float_real (float *arr,int start_ele,int len)
{
    for(int i=start_ele; i<len+start_ele; i++)
        arr[i-start_ele]=(float)i;
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_float_except (float *expect,float *dst,float *src,int var,int len)
{
    for(int i=0; i<len; i++)
        expect[i] = dst[i] + src[i * var];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_double_real (double *arr,int start_ele,int len)
{
    for(int i=start_ele; i<len+start_ele; i++)
        arr[i-start_ele]=(double)i;
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize("O0")
void get_double_except (double *expect,double *dst,double *src,int var,int len)
{
    for(int i=0; i<len; i++)
        expect[i] = dst[i] + src[i * var];
}
#pragma GCC pop_options



int main (void)
{
    int16_t dest_int16_t[1000]= {0};
    //int16_t src_int16_t[200000]= {0};
    get_int16_t_real(src_int16_t,16,200000);
    int16_t expect_int16_t_91[1000]= {0};
    get_int16_t_except(expect_int16_t_91,dest_int16_t,src_int16_t,91,1000);
    f_int16_t_91(dest_int16_t,src_int16_t);
    for(long i=0; i<1000; i++) {
        if (dest_int16_t[i]!=expect_int16_t_91[i] ) {
            printf("f_int16_t_91=index:%d,dest_int16_t:%d,expect_int16_t_91:%d\n",i,dest_int16_t[i],expect_int16_t_91[i]);
            __builtin_abort();
        }
    }

    get_int16_t_real(dest_int16_t,0,1000);
    get_int16_t_real(src_int16_t,16,200000);
    get_int16_t_except(expect_int16_t_91,dest_int16_t,src_int16_t,177,1000);
    f_int16_t_177(dest_int16_t,src_int16_t);
    for(long i=0; i<1000; i++) {
        if (dest_int16_t[i]!=expect_int16_t_91[i] ) {
            printf("f_int16_t_177=index:%d,dest_int16_t:%d,expect_int16_t_91:%d\n",i,dest_int16_t[i],expect_int16_t_91[i]);
            __builtin_abort();
        }
    }

    get_int16_t_real(dest_int16_t,0,1000);
    get_int16_t_real(src_int16_t,16,200000);
    get_int16_t_except(expect_int16_t_91,dest_int16_t,src_int16_t,11,1000);
    f_int16_t_11(dest_int16_t,src_int16_t);
    for(long i=0; i<1000; i++) {
        if (dest_int16_t[i]!=expect_int16_t_91[i] ) {
            printf("f_int16_t_11=index:%d,dest_int16_t:%d,expect_int16_t_91:%d\n",i,dest_int16_t[i],expect_int16_t_91[i]);
            __builtin_abort();
        }
    }


    get_int16_t_real(dest_int16_t,0,1000);
    get_int16_t_real(src_int16_t,16,200000);
    get_int16_t_except(expect_int16_t_91,dest_int16_t,src_int16_t,200,1000);
    f_int16_t_200(dest_int16_t,src_int16_t);
    for(long i=0; i<1000; i++) {
        if (dest_int16_t[i]!=expect_int16_t_91[i] ) {
            printf("f_int16_t_200=index:%d,dest_int16_t:%d,expect_int16_t_91:%d\n",i,dest_int16_t[i],expect_int16_t_91[i]);
            __builtin_abort();
        }
    }

    get_int16_t_real(dest_int16_t,0,1000);
    get_int16_t_real(src_int16_t,16,200000);
    int16_t *offset_int16_t = src_int16_t + 200000;
    get_int16_t_except(expect_int16_t_91,dest_int16_t,offset_int16_t,-100,1000);
    f_int16_t_m100(dest_int16_t,offset_int16_t);
    for(long i=0; i<1000; i++) {
        if (dest_int16_t[i]!=expect_int16_t_91[i] ) {
            printf("f_int16_t_m100=index:%d,dest_int16_t:%d,expect_int16_t_91:%d\n",i,dest_int16_t[i],expect_int16_t_91[i]);
            __builtin_abort();
        }
    }

    uint16_t dest_uint16_t[1000]= {0};
    //uint16_t src_uint16_t[200000]= {0};
    get_uint16_t_real(src_uint16_t,16,200000);
    uint16_t expect_uint16_t_91[1000]= {0};
    get_uint16_t_except(expect_uint16_t_91,dest_uint16_t,src_uint16_t,91,1000);
    f_uint16_t_91(dest_uint16_t,src_uint16_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t_91[i] ) {
            printf("f_uint16_t_91=index:%d,dest_uint16_t:%d,expect_uint16_t_91:%d\n",i,dest_uint16_t[i],expect_uint16_t_91[i]);
            __builtin_abort();
        }
    }

    get_uint16_t_real(dest_uint16_t,0,1000);
    get_uint16_t_real(src_uint16_t,16,200000);
    get_uint16_t_except(expect_uint16_t_91,dest_uint16_t,src_uint16_t,177,1000);
    f_uint16_t_177(dest_uint16_t,src_uint16_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t_91[i] ) {
            printf("f_uint16_t_177=index:%d,dest_uint16_t:%d,expect_uint16_t_91:%d\n",i,dest_uint16_t[i],expect_uint16_t_91[i]);
            __builtin_abort();
        }
    }

    get_uint16_t_real(dest_uint16_t,0,1000);
    get_uint16_t_real(src_uint16_t,16,200000);
    get_uint16_t_except(expect_uint16_t_91,dest_uint16_t,src_uint16_t,11,1000);
    f_uint16_t_11(dest_uint16_t,src_uint16_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t_91[i] ) {
            printf("f_uint16_t_11=index:%d,dest_uint16_t:%d,expect_uint16_t_91:%d\n",i,dest_uint16_t[i],expect_uint16_t_91[i]);
            __builtin_abort();
        }
    }


    get_uint16_t_real(dest_uint16_t,0,1000);
    get_uint16_t_real(src_uint16_t,16,200000);
    get_uint16_t_except(expect_uint16_t_91,dest_uint16_t,src_uint16_t,200,1000);
    f_uint16_t_200(dest_uint16_t,src_uint16_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t_91[i] ) {
            printf("f_uint16_t_200=index:%d,dest_uint16_t:%d,expect_uint16_t_91:%d\n",i,dest_uint16_t[i],expect_uint16_t_91[i]);
            __builtin_abort();
        }
    }

    get_uint16_t_real(dest_uint16_t,0,1000);
    get_uint16_t_real(src_uint16_t,16,200000);
    uint16_t *offset_uint16_t = src_uint16_t + 200000;
    get_uint16_t_except(expect_uint16_t_91,dest_uint16_t,offset_uint16_t,-100,1000);
    f_uint16_t_m100(dest_uint16_t,offset_uint16_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint16_t[i]!=expect_uint16_t_91[i] ) {
            printf("f_uint16_t_m100=index:%d,dest_uint16_t:%d,expect_uint16_t_91:%d\n",i,dest_uint16_t[i],expect_uint16_t_91[i]);
            __builtin_abort();
        }
    }


    int32_t dest_int32_t[1000]= {0};
    int32_t src_int32_t[200000]= {0};
    get_int32_t_real(src_int32_t,16,200000);
    int32_t expect_int32_t_91[1000]= {0};
    get_int32_t_except(expect_int32_t_91,dest_int32_t,src_int32_t,91,1000);
    f_int32_t_91(dest_int32_t,src_int32_t);
    for(long i=0; i<1000; i++) {
        if (dest_int32_t[i]!=expect_int32_t_91[i] ) {
            printf("f_int32_t_91=index:%d,dest_int32_t:%d,expect_int32_t_91:%d\n",i,dest_int32_t[i],expect_int32_t_91[i]);
            __builtin_abort();
        }
    }

    get_int32_t_real(dest_int32_t,0,1000);
    get_int32_t_real(src_int32_t,16,200000);
    get_int32_t_except(expect_int32_t_91,dest_int32_t,src_int32_t,177,1000);
    f_int32_t_177(dest_int32_t,src_int32_t);
    for(long i=0; i<1000; i++) {
        if (dest_int32_t[i]!=expect_int32_t_91[i] ) {
            printf("f_int32_t_177=index:%d,dest_int32_t:%d,expect_int32_t_91:%d\n",i,dest_int32_t[i],expect_int32_t_91[i]);
            __builtin_abort();
        }
    }

    get_int32_t_real(dest_int32_t,0,1000);
    get_int32_t_real(src_int32_t,16,200000);
    get_int32_t_except(expect_int32_t_91,dest_int32_t,src_int32_t,11,1000);
    f_int32_t_11(dest_int32_t,src_int32_t);
    for(long i=0; i<1000; i++) {
        if (dest_int32_t[i]!=expect_int32_t_91[i] ) {
            printf("f_int32_t_11=index:%d,dest_int32_t:%d,expect_int32_t_91:%d\n",i,dest_int32_t[i],expect_int32_t_91[i]);
            __builtin_abort();
        }
    }


    get_int32_t_real(dest_int32_t,0,1000);
    get_int32_t_real(src_int32_t,16,200000);
    get_int32_t_except(expect_int32_t_91,dest_int32_t,src_int32_t,200,1000);
    f_int32_t_200(dest_int32_t,src_int32_t);
    for(long i=0; i<1000; i++) {
        if (dest_int32_t[i]!=expect_int32_t_91[i] ) {
            printf("f_int32_t_200=index:%d,dest_int32_t:%d,expect_int32_t_91:%d\n",i,dest_int32_t[i],expect_int32_t_91[i]);
            __builtin_abort();
        }
    }

    get_int32_t_real(dest_int32_t,0,1000);
    get_int32_t_real(src_int32_t,16,200000);
    int32_t *offset_int32_t = src_int32_t + 200000;
    get_int32_t_except(expect_int32_t_91,dest_int32_t,offset_int32_t,-100,1000);
    f_int32_t_m100(dest_int32_t,offset_int32_t);
    for(long i=0; i<1000; i++) {
        if (dest_int32_t[i]!=expect_int32_t_91[i] ) {
            printf("f_int32_t_m100=index:%d,dest_int32_t:%d,expect_int32_t_91:%d\n",i,dest_int32_t[i],expect_int32_t_91[i]);
            __builtin_abort();
        }
    }


    uint32_t dest_uint32_t[1000]= {0};
    //uint32_t src_uint32_t[200000]= {0};
    get_uint32_t_real(src_uint32_t,16,200000);
    uint32_t expect_uint32_t_91[1000]= {0};
    get_uint32_t_except(expect_uint32_t_91,dest_uint32_t,src_uint32_t,91,1000);
    f_uint32_t_91(dest_uint32_t,src_uint32_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t_91[i] ) {
            printf("f_uint32_t_91=index:%d,dest_uint32_t:%d,expect_uint32_t_91:%d\n",i,dest_uint32_t[i],expect_uint32_t_91[i]);
            __builtin_abort();
        }
    }

    get_uint32_t_real(dest_uint32_t,0,1000);
    get_uint32_t_real(src_uint32_t,16,200000);
    get_uint32_t_except(expect_uint32_t_91,dest_uint32_t,src_uint32_t,177,1000);
    f_uint32_t_177(dest_uint32_t,src_uint32_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t_91[i] ) {
            printf("f_uint32_t_177=index:%d,dest_uint32_t:%d,expect_uint32_t_91:%d\n",i,dest_uint32_t[i],expect_uint32_t_91[i]);
            __builtin_abort();
        }
    }

    get_uint32_t_real(dest_uint32_t,0,1000);
    get_uint32_t_real(src_uint32_t,16,200000);
    get_uint32_t_except(expect_uint32_t_91,dest_uint32_t,src_uint32_t,11,1000);
    f_uint32_t_11(dest_uint32_t,src_uint32_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t_91[i] ) {
            printf("f_uint32_t_11=index:%d,dest_uint32_t:%d,expect_uint32_t_91:%d\n",i,dest_uint32_t[i],expect_uint32_t_91[i]);
            __builtin_abort();
        }
    }


    get_uint32_t_real(dest_uint32_t,0,1000);
    get_uint32_t_real(src_uint32_t,16,200000);
    get_uint32_t_except(expect_uint32_t_91,dest_uint32_t,src_uint32_t,200,1000);
    f_uint32_t_200(dest_uint32_t,src_uint32_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t_91[i] ) {
            printf("f_uint32_t_200=index:%d,dest_uint32_t:%d,expect_uint32_t_91:%d\n",i,dest_uint32_t[i],expect_uint32_t_91[i]);
            __builtin_abort();
        }
    }

    get_uint32_t_real(dest_uint32_t,0,1000);
    get_uint32_t_real(src_uint32_t,16,200000);
    uint32_t *offset_uint32_t = src_uint32_t + 200000;
    get_uint32_t_except(expect_uint32_t_91,dest_uint32_t,offset_uint32_t,-100,1000);
    f_uint32_t_m100(dest_uint32_t,offset_uint32_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint32_t[i]!=expect_uint32_t_91[i] ) {
            printf("f_uint32_t_m100=index:%d,dest_uint32_t:%d,expect_uint32_t_91:%d\n",i,dest_uint32_t[i],expect_uint32_t_91[i]);
            __builtin_abort();
        }
    }


    int64_t dest_int64_t[1000]= {0};
    //int64_t src_int64_t[200000]= {0};
    get_int64_t_real(src_int64_t,16,200000);
    int64_t expect_int64_t_91[1000]= {0};
    get_int64_t_except(expect_int64_t_91,dest_int64_t,src_int64_t,91,1000);
    f_int64_t_91(dest_int64_t,src_int64_t);
    for(long i=0; i<1000; i++) {
        if (dest_int64_t[i]!=expect_int64_t_91[i] ) {
            printf("f_int64_t_91=index:%d,dest_int64_t:%d,expect_int64_t_91:%d\n",i,dest_int64_t[i],expect_int64_t_91[i]);
            __builtin_abort();
        }
    }

    get_int64_t_real(dest_int64_t,0,1000);
    get_int64_t_real(src_int64_t,16,200000);
    get_int64_t_except(expect_int64_t_91,dest_int64_t,src_int64_t,177,1000);
    f_int64_t_177(dest_int64_t,src_int64_t);
    for(long i=0; i<1000; i++) {
        if (dest_int64_t[i]!=expect_int64_t_91[i] ) {
            printf("f_int64_t_177=index:%d,dest_int64_t:%d,expect_int64_t_91:%d\n",i,dest_int64_t[i],expect_int64_t_91[i]);
            __builtin_abort();
        }
    }

    get_int64_t_real(dest_int64_t,0,1000);
    get_int64_t_real(src_int64_t,16,200000);
    get_int64_t_except(expect_int64_t_91,dest_int64_t,src_int64_t,11,1000);
    f_int64_t_11(dest_int64_t,src_int64_t);
    for(long i=0; i<1000; i++) {
        if (dest_int64_t[i]!=expect_int64_t_91[i] ) {
            printf("f_int64_t_11=index:%d,dest_int64_t:%d,expect_int64_t_91:%d\n",i,dest_int64_t[i],expect_int64_t_91[i]);
            __builtin_abort();
        }
    }


    get_int64_t_real(dest_int64_t,0,1000);
    get_int64_t_real(src_int64_t,16,200000);
    get_int64_t_except(expect_int64_t_91,dest_int64_t,src_int64_t,200,1000);
    f_int64_t_200(dest_int64_t,src_int64_t);
    for(long i=0; i<1000; i++) {
        if (dest_int64_t[i]!=expect_int64_t_91[i] ) {
            printf("f_int64_t_200=index:%d,dest_int64_t:%d,expect_int64_t_91:%d\n",i,dest_int64_t[i],expect_int64_t_91[i]);
            __builtin_abort();
        }
    }

    get_int64_t_real(dest_int64_t,0,1000);
    get_int64_t_real(src_int64_t,16,200000);
    int64_t *offset_int64_t = src_int64_t + 200000;
    get_int64_t_except(expect_int64_t_91,dest_int64_t,offset_int64_t,-100,1000);
    f_int64_t_m100(dest_int64_t,offset_int64_t);
    for(long i=0; i<1000; i++) {
        if (dest_int64_t[i]!=expect_int64_t_91[i] ) {
            printf("f_int64_t_m100=index:%d,dest_int64_t:%d,expect_int64_t_91:%d\n",i,dest_int64_t[i],expect_int64_t_91[i]);
            __builtin_abort();
        }
    }

    uint64_t dest_uint64_t[1000]= {0};
    //uint64_t src_uint64_t[200000]= {0};
    get_uint64_t_real(src_uint64_t,16,200000);
    uint64_t expect_uint64_t_91[1000]= {0};
    get_uint64_t_except(expect_uint64_t_91,dest_uint64_t,src_uint64_t,91,1000);
    f_uint64_t_91(dest_uint64_t,src_uint64_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t_91[i] ) {
            printf("f_uint64_t_91=index:%d,dest_uint64_t:%d,expect_uint64_t_91:%d\n",i,dest_uint64_t[i],expect_uint64_t_91[i]);
            __builtin_abort();
        }
    }

    get_uint64_t_real(dest_uint64_t,0,1000);
    get_uint64_t_real(src_uint64_t,16,200000);
    get_uint64_t_except(expect_uint64_t_91,dest_uint64_t,src_uint64_t,177,1000);
    f_uint64_t_177(dest_uint64_t,src_uint64_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t_91[i] ) {
            printf("f_uint64_t_177=index:%d,dest_uint64_t:%d,expect_uint64_t_91:%d\n",i,dest_uint64_t[i],expect_uint64_t_91[i]);
            __builtin_abort();
        }
    }

    get_uint64_t_real(dest_uint64_t,0,1000);
    get_uint64_t_real(src_uint64_t,16,200000);
    get_uint64_t_except(expect_uint64_t_91,dest_uint64_t,src_uint64_t,11,1000);
    f_uint64_t_11(dest_uint64_t,src_uint64_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t_91[i] ) {
            printf("f_uint64_t_11=index:%d,dest_uint64_t:%d,expect_uint64_t_91:%d\n",i,dest_uint64_t[i],expect_uint64_t_91[i]);
            __builtin_abort();
        }
    }


    get_uint64_t_real(dest_uint64_t,0,1000);
    get_uint64_t_real(src_uint64_t,16,200000);
    get_uint64_t_except(expect_uint64_t_91,dest_uint64_t,src_uint64_t,200,1000);
    f_uint64_t_200(dest_uint64_t,src_uint64_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t_91[i] ) {
            printf("f_uint64_t_200=index:%d,dest_uint64_t:%d,expect_uint64_t_91:%d\n",i,dest_uint64_t[i],expect_uint64_t_91[i]);
            __builtin_abort();
        }
    }

    get_uint64_t_real(dest_uint64_t,0,1000);
    get_uint64_t_real(src_uint64_t,16,200000);
    uint64_t *offset_uint64_t = src_uint64_t + 200000;
    get_uint64_t_except(expect_uint64_t_91,dest_uint64_t,offset_uint64_t,-100,1000);
    f_uint64_t_m100(dest_uint64_t,offset_uint64_t);
    for(long i=0; i<1000; i++) {
        if (dest_uint64_t[i]!=expect_uint64_t_91[i] ) {
            printf("f_uint64_t_m100=index:%d,dest_uint64_t:%d,expect_uint64_t_91:%d\n",i,dest_uint64_t[i],expect_uint64_t_91[i]);
            __builtin_abort();
        }
    }

    _Float16 dest__Float16[1000]= {0.0};
    //_Float16 src__Float16[200000]= {0.0};
    get__Float16_real(src__Float16,16.0,200000);
    _Float16 expect__Float16_91[1000]= {0.0};
    get__Float16_except(expect__Float16_91,dest__Float16,src__Float16,91,1000);
    f__Float16_91(dest__Float16,src__Float16);
    for(long i=0; i<1000; i++) {
        if (dest__Float16[i]!=expect__Float16_91[i] ) {
            printf("f__Float16_91=index:%d,dest__Float16:%d,expect__Float16_91:%d\n",i,dest__Float16[i],expect__Float16_91[i]);
            __builtin_abort();
        }
    }

    get__Float16_real(dest__Float16,0.0,1000);
    get__Float16_real(src__Float16,16.0,200000);
    get__Float16_except(expect__Float16_91,dest__Float16,src__Float16,177,1000);
    f__Float16_177(dest__Float16,src__Float16);
    for(long i=0; i<1000; i++) {
        if (dest__Float16[i]!=expect__Float16_91[i] ) {
            printf("f__Float16_177=index:%d,dest__Float16:%d,expect__Float16_91:%d\n",i,dest__Float16[i],expect__Float16_91[i]);
            __builtin_abort();
        }
    }

    get__Float16_real(dest__Float16,0.0,1000);
    get__Float16_real(src__Float16,16.0,200000);
    get__Float16_except(expect__Float16_91,dest__Float16,src__Float16,11,1000);
    f__Float16_11(dest__Float16,src__Float16);
    for(long i=0; i<1000; i++) {
        if (dest__Float16[i]!=expect__Float16_91[i] ) {
            printf("f__Float16_11=index:%d,dest__Float16:%d,expect__Float16_91:%d\n",i,dest__Float16[i],expect__Float16_91[i]);
            __builtin_abort();
        }
    }


    get__Float16_real(dest__Float16,0.0,1000);
    get__Float16_real(src__Float16,16.0,200000);
    get__Float16_except(expect__Float16_91,dest__Float16,src__Float16,200,1000);
    f__Float16_200(dest__Float16,src__Float16);
    for(long i=0; i<1000; i++) {
        if (dest__Float16[i]!=expect__Float16_91[i] ) {
            printf("f__Float16_200=index:%d,dest__Float16:%d,expect__Float16_91:%d\n",i,dest__Float16[i],expect__Float16_91[i]);
            __builtin_abort();
        }
    }

    get__Float16_real(dest__Float16,0.0,1000);
    get__Float16_real(src__Float16,16.0,200000);
    _Float16 *offset__Float16 = src__Float16 + 200000;
    get__Float16_except(expect__Float16_91,dest__Float16,offset__Float16,-100,1000);
    f__Float16_m100(dest__Float16,offset__Float16);
    for(long i=0; i<1000; i++) {
        if (dest__Float16[i]!=expect__Float16_91[i] ) {
            printf("f__Float16_m100=index:%d,dest__Float16:%d,expect__Float16_91:%d\n",i,dest__Float16[i],expect__Float16_91[i]);
            __builtin_abort();
        }
    }


    float dest_float[1000]= {0.0};
    //float src_float[200000]= {0.0};
    get_float_real(src_float,16.0,200000);
    float expect_float_91[1000]= {0.0};
    get_float_except(expect_float_91,dest_float,src_float,91,1000);
    f_float_91(dest_float,src_float);
    for(long i=0; i<1000; i++) {
        if (dest_float[i]!=expect_float_91[i] ) {
            printf("f_float_91=index:%d,dest_float:%d,expect_float_91:%d\n",i,dest_float[i],expect_float_91[i]);
            __builtin_abort();
        }
    }

    get_float_real(dest_float,0.0,1000);
    get_float_real(src_float,16.0,200000);
    get_float_except(expect_float_91,dest_float,src_float,177,1000);
    f_float_177(dest_float,src_float);
    for(long i=0; i<1000; i++) {
        if (dest_float[i]!=expect_float_91[i] ) {
            printf("f_float_177=index:%d,dest_float:%d,expect_float_91:%d\n",i,dest_float[i],expect_float_91[i]);
            __builtin_abort();
        }
    }

    get_float_real(dest_float,0.0,1000);
    get_float_real(src_float,16.0,200000);
    get_float_except(expect_float_91,dest_float,src_float,11,1000);
    f_float_11(dest_float,src_float);
    for(long i=0; i<1000; i++) {
        if (dest_float[i]!=expect_float_91[i] ) {
            printf("f_float_11=index:%d,dest_float:%d,expect_float_91:%d\n",i,dest_float[i],expect_float_91[i]);
            __builtin_abort();
        }
    }


    get_float_real(dest_float,0.0,1000);
    get_float_real(src_float,16.0,200000);
    get_float_except(expect_float_91,dest_float,src_float,200,1000);
    f_float_200(dest_float,src_float);
    for(long i=0; i<1000; i++) {
        if (dest_float[i]!=expect_float_91[i] ) {
            printf("f_float_200=index:%d,dest_float:%d,expect_float_91:%d\n",i,dest_float[i],expect_float_91[i]);
            __builtin_abort();
        }
    }

    get_float_real(dest_float,0.0,1000);
    get_float_real(src_float,16.0,200000);
    float *offset_float = src_float + 200000;
    get_float_except(expect_float_91,dest_float,offset_float,-100,1000);
    f_float_m100(dest_float,offset_float);
    for(long i=0; i<1000; i++) {
        if (dest_float[i]!=expect_float_91[i] ) {
            printf("f_float_m100=index:%d,dest_float:%d,expect_float_91:%d\n",i,dest_float[i],expect_float_91[i]);
            __builtin_abort();
        }
    }

    double dest_double[1000]= {0.0};
    //double src_double[200000]= {0.0};
    get_double_real(src_double,16.0,200000);
    double expect_double_91[1000]= {0.0};
    get_double_except(expect_double_91,dest_double,src_double,91,1000);
    f_double_91(dest_double,src_double);
    for(long i=0; i<1000; i++) {
        if (dest_double[i]!=expect_double_91[i] ) {
            printf("f_double_91=index:%d,dest_double:%d,expect_double_91:%d\n",i,dest_double[i],expect_double_91[i]);
            __builtin_abort();
        }
    }

    get_double_real(dest_double,0.0,1000);
    get_double_real(src_double,16.0,200000);
    get_double_except(expect_double_91,dest_double,src_double,177,1000);
    f_double_177(dest_double,src_double);
    for(long i=0; i<1000; i++) {
        if (dest_double[i]!=expect_double_91[i] ) {
            printf("f_double_177=index:%d,dest_double:%d,expect_double_91:%d\n",i,dest_double[i],expect_double_91[i]);
            __builtin_abort();
        }
    }

    get_double_real(dest_double,0.0,1000);
    get_double_real(src_double,16.0,200000);
    get_double_except(expect_double_91,dest_double,src_double,11,1000);
    f_double_11(dest_double,src_double);
    for(long i=0; i<1000; i++) {
        if (dest_double[i]!=expect_double_91[i] ) {
            printf("f_double_11=index:%d,dest_double:%d,expect_double_91:%d\n",i,dest_double[i],expect_double_91[i]);
            __builtin_abort();
        }
    }


    get_double_real(dest_double,0.0,1000);
    get_double_real(src_double,16.0,200000);
    get_double_except(expect_double_91,dest_double,src_double,200,1000);
    f_double_200(dest_double,src_double);
    for(long i=0; i<1000; i++) {
        if (dest_double[i]!=expect_double_91[i] ) {
            printf("f_double_200=index:%d,dest_double:%d,expect_double_91:%d\n",i,dest_double[i],expect_double_91[i]);
            __builtin_abort();
        }
    }

    get_double_real(dest_double,0.0,1000);
    get_double_real(src_double,16.0,200000);
    double *offset_double = src_double + 200000;
    get_double_except(expect_double_91,dest_double,offset_double,-100,1000);
    f_double_m100(dest_double,offset_double);
    for(long i=0; i<1000; i++) {
        if (dest_double[i]!=expect_double_91[i] ) {
            printf("f_double_m100=index:%d,dest_double:%d,expect_double_91:%d\n",i,dest_double[i],expect_double_91[i]);
            __builtin_abort();
        }
    }

    return 0;
}
