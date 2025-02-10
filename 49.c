/*
条件编译：
#if #ifdef #ifndef
编译器没有编译这句语句，不生成汇编代码
*/

#include<stdio.h>

int main(){
    //----------------------
    #define A 0
    #if (A > 1)
    printf("A > 1");
    #elif (A == 1)
    printf("A == 1");
    #else
    printf("A<1");
    #endif
    return 0;
    //-----------------------

    //-----------------------
    int a=10, b=20;

    #ifdef MAX
        printf("更大的数字是 %d\n", MAXIMUM(a, b));
    #else
        printf("更小的数字是 %d\n", MINIMUM(a, b));
    #endif

    return 0;
    //-----------------------

    //-----------------------
    #ifndef MAX
        printf("更大的数字是 %d\n", MAXIMUM(a, b));
    #else
        printf("更小的数字是 %d\n", MINIMUM(a, b));
    #endif

    return 0;
    //-----------------------
}