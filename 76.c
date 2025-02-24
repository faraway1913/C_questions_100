/*
编写函数，
输入n为偶数时，函数1求：1/2 + 1/4 + 1/6 + ... + 1/n
输入n为奇数时，函数2求：1/1 + 1/3 + 1/5 + ... + 1/n

指针函数：本质是一个函数，不过它的返回值是一个指针
函数指针：本质是一个指针，该指针的地址指向一个函数，所以它是指向函数的指针，定义如下：
typedef int (*fun_ptr)(int,int)
*/
/*
int add(int x, int y){
    return x+y;
}
*/

double fun1(int n){
    int i;
    double k;
    double sum = 0;
    for(i = 2; i<=n; i+=2){
        k = (double)1/i;
        sum += k;
    }
    return sum;
}

double fun2(int n){
    int i;
    double k;
    double sum = 0;
    for(i = 1; i<=n; i+=2){
        k = (double)1/i;
        sum += k;
    }
    return sum;
}

#include <stdio.h>

int main(){
    double fun1(int n);
    double fun2(int n);

    double (*p)(int);

    int n = 5;
    double sum = 0;

    if(n%2 == 0){
        p = fun1;
    }else{
        p = fun2;
    }

    sum = p(n);

    printf("sum = %lf\n",sum);
    
    
    /*int add(int x, int y);
    
    int (*p_add)(int , int ) = &add;

    int a = 10;
    int b = 20;
    int c = 30;
    int sum = 0;
    sum = p_add(a, b);
    
    printf("sum = %d\n", sum);
    printf("三个数的和是: %d\n",p_add(p_add(a, b), c));*/



    return 0;
}