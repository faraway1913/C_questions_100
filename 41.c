/*
全局变量
静态变量
auto变量
register变量
*/


#include<stdio.h>

static int num = 100;

void sellticket(){
    num--;
}

int main(){
    for(int i=0; i<100; i++){
        sellticket();
        printf("%d\n",num);
    }

    printf("%d\n",num);

    return 0;
}