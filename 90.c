/*
阅读程序
*/

#include<stdio.h>

#define M 5

int main(void){
    int a[M] = {1,2,3,4,5};
    int n,i,j,t;
    i = 0; j = M - 1;
    for(n = 0; n < M; n++){
        printf("%-4d",a[n]);
    }
    printf("\n");

    while(i < j){
        t = *(a+i);
        *(a+i) = *(a+j);
        *(a+j) = t;
        i++; j--;
    }
    for(n = 0; n < M; n++){
        printf("%-4d",a[n]);
    }
    printf("\n");
    
    return 0;
}