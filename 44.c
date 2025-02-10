/*
函数变量作用域
*/

#include <stdio.h>

int a = 1; // 全局变量a
int b = 10; // 全局变量b
int c; // 全局变量c，未初始化，默认值为0

void add() {
    c = a + b;
    printf("a = %d\n", a);
}

int main() {
    int a = 20; // 局部变量a，覆盖全局变量a
    add();
    printf("c = %d\n", c);
    return 0;
}