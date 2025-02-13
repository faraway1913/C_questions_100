/*
一个数刚好等于它的因子之和，这个数就称为“完数”
例如6=1+2+3，28=1+2+4+7+14，编程找出1000内的所有完数

视频思路：1.判断是否是完数。2.遍历1-1000.3.输出
将判断是否完数的程序封装成函数，再进行循环遍历

我的思路：
1.判断完数：
    构建一个函数进行判断，函数返回值为整形数据，
    函数头：参数n，返回值sum
    函数体：n用1到n-1的n-1个数进行取模，若模为零，则加到sum中，循环判断完后进行判断n =? sum
2.限定循环范围
    1~1000循环查找，输入到函数中
3.输出
    循环过程得到完数输出一个，同时计数count，每有一个完数count++，
*/

#include<stdio.h>

int per_num(int n){
    int i=0;
    int sum=0;
    for(i=1;i<n;i++){
        if(n%i == 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n;
    
    for(n=1;n<=1000;n++){
        if(n == per_num(n)){
            printf("%d is perfect number\n",per_num(n));
        }
    }
    
    return 0;
}

