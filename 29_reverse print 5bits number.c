/*
给一个不多于5位的正整数，要求：1.求他是几位数。2.逆序打印出各位数字
*/


#include<stdio.h>

int main(){
    int num = 12345;
    int g,s,b,q,w;
    w = num/10000;
    //printf("百位的值b=%d\n",b);
    q = num%10000/1000;
    b = num%1000/100;
    s = num%100/10;
    g = num%10;

    if (w!=0){
        printf("是个5位数\n");
        printf("%d %d %d %d %d\n",g,s,b,q,w);
    }else if(q!=0){
        printf("是个4位数\n");
        printf("%d %d %d %d\n",g,s,b,q);
    }else if(b!=0){
        printf("是个3位数\n");
        printf("%d %d %d\n",g,s,b);
    }else if(s!=0){
        printf("是个2位数\n");
        printf("%d %d\n",g,s);
    }else if(g!=0){
        printf("是个1位数\n");
        printf("%d\n",g);
    }

    return 0;
}