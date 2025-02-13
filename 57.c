/*
用函数交换两个变量的值
*/
#include<stdio.h>

void swap_2var(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
};
// void swap_2var(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// };

int main(){
    int a=1, b=2;
    int *p_a = &a;
    int *p_b = &b;
    printf("%d,%d\n",*p_a,*p_b);
    //swap_2var(a,b);
    swap_2var(p_a,p_b);
    printf("%d,%d\n",*p_a,*p_b);
    
    return 0;
}