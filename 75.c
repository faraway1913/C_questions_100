/*
输入一个整数，并将其反转后输出
输入123输出321
*/

#include<stdio.h>

int main(){
    int n = 12473824;
    int m = 0;
    int k = 0;

    while(n != 0){
        k = n%10;
        m = m*10 + k;
        n = n/10;
    }

    printf("m = %d\n",m);

    //下面是老解法，只能算三位
    // int ge, shi, bai;
    // ge = n%10;
    // shi = n/10%10;
    // bai = n/100;

    // m = ge*100 + shi*10 + bai;
    // printf("n = %d\n",n);
    // printf("m = %d\n",m);

    return 0;
}