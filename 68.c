/*
有n个整数，使其前面各数往后移动m个位置，最后m个数变成最前面的m个数
n = 8; m = 3;
1 2 3 4 5 6 7 8 9 10
8 9 10 1 2 3 4 5 6 7
*/

#include<stdio.h>
#include "math.h"

void main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/4;
    int m = 3;

    int *p;
    for(int i=0;i<3;i++){
        //1.保存10;
        p = a + n -1;
        int temp;
        temp = *p;
        //2.把10前面的所有数，依次后移一位
        while(p>a){
            *p = *(p-1);
            p--;
        }
        //3.把10放到第一个位置
        *p = temp;
        //4.循环3次
    }

    for(p=a;p<a+n;p++){
        printf("%-4d",*p);
    }

}