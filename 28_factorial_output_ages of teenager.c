/*
有5个人坐在一起，问第5个人多少岁？他说比第四个人大2岁
问第4个人多少岁，他说比第2个人大2岁
问第2个人，说比第1个人大两岁，问第1个人，他说自己18岁
请问第5个人多大

视频思路：利用递归方法，递归分为回推和递归两个阶段。要知道第5个人多大，
需知道第4人，以此类推，推到第一人，再往回推
*/

#include <stdio.h>

int age(int n){
    int c = 0;
    if(n==1){
        c = 10;
        printf("c = %d\n",c);
    }else{
        c = age(n-1)+2;
        printf("c = %d\n",c);
    }
    return c;
}

int main(){
    printf("age(5) = %d\n",age(5));

    return 0;
}