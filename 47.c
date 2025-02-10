/*
关于define宏定义，优先级问题
*/

#include<stdio.h>

#define PI 3.1415926
#define DAYU >
#define MAXIMUM(X,Y) (X>Y)?X:Y

int main(){
    int a = 20;
    int b = 10;
    float c = 10.56;
    float d = 14.45;

    printf("大的那个是%d\n",MAXIMUM(a,b));
    printf("大的那个是%f\n",MAXIMUM(c,d));

    return 0;
}