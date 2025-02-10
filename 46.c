/*
宏定义
1.定义一个变量；
2.给常见符号取个名
3.直接定义一个公式/表达式
*/

#include<stdio.h>

#define PI 3.2425926
#define CH *
#define mj(a,b) a*b*b

int main(){
    float r = 1.5;
    float mianji = PI CH r CH r;
    printf("%f\n",mianji);
    printf("mj(a,b) = %f\n",mj(PI,r));

    return 0;
}