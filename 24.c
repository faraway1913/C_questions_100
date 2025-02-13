/*
有一分数数列：2/1, 3/2, 4/3, 5/4, ...求其前20项之和
视频思路：
    1.分析找到分子和分母的规律，都与i相关
    2.循环20次
我的思路：
    1.循环次数i从1到20，分子满足a=i+1，分母满足b=i，求和sum=sum+a/b循环
*/

#include<stdio.h>

int main(){
    int i;
    float a,b,sum=0;

    for(i=1;i<=20;i++){
        a = i+1;
        b = i;
        sum = sum + a/b;
    }
    printf("sum is %.3f",sum);

    return 0;
}