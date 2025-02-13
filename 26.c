/*
利用递归的思想求取5!
视频思路：一个函数在它的函数体内调用它自身称为递归调用，这种函数称为递归函数
f(n)=n*(n-1)*(n-2)*...*3*2*1
我的思路：
    1.递归函数int factorial(int n)，n = n * factorial（n-1）
    2.终止递归条件：n = 1，return 1
    3.main中调用factorial（）
*/

#include <stdio.h>

int factorial(int n){
    if(n == 1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    int n = 5 ,result = 0;

    result = factorial(n);
    printf("5! = %d\n",result);
    return 0;
}