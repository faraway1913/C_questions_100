/*
利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来
视频思路：
我的思路：
    1.获取一段键盘输入的字符串，放入getchar()进行while循环，直到读取到回车\n，停止读取
    2.
*/

#include<stdio.h>

void f(int n){
    char c;
    if(n==1){
        c = getchar();
        putchar(c);
    }else{
        c = getchar();
        f(n-1);
        putchar(c);
    }
}

int main(){
    void f(int n);
    f(5);
    
    return 0;
}