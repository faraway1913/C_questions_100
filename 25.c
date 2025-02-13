/*
求1!+2!+3!+4!+...+20!的和
视频思路：
    1.1+2+3+...+100
    2.1*2*3*...*100
我的思路：
    1.n的阶乘为n次循环求乘积，每次从n开始乘，循环n次，直到1.
    2.1到n的分别的阶乘的和，外层循环n次，每次sum = sum + 
*/

#include<stdio.h>

int main(){
    int i,j;
    long long int n=1, sum=0;

    for(i=1;i<=20;i++){
        n=1;
        for(j=1;j<=i;j++){
            n = n*j;
            //printf("%lld ",n);
        }
        printf("%d!=%lld\n",i,n);
        sum = sum + n;
    }
    printf("sum = %lld",sum);

    return 0;
}

