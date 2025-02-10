/*
按位与  &
按位或  |
按位异或  ^
*/

#include<stdio.h>

int decimalToBinary(int num) {
    int binary = 0;
    int base = 1;
    // 当num不为0时进行循环
    while (num > 0) {
        // 取出num的最低位
        int remainder = num % 2;
        // 将最低位添加到二进制结果中
        binary += remainder * base;
        // 右移一位，相当于去掉最低位
        num /= 2;
        // 为下一位做准备，将基数乘以10
        base *= 10;
    }
    return binary;
}

int main(){
    int a = 10;
    int b = 14;
    // printf("%d\n",sizeof(int));
    // printf("%d\n",sizeof(long int));
    // printf("%d\n",sizeof(long long int));
    printf("%d的十六进制是%x",a,a);
    printf("%d的十进制是%d\n",a,a);
    printf("%d的八进制是%o\n",a,a);
    int c = decimalToBinary(a);
    int d = decimalToBinary(b);
    printf("%d的二进制是%d\n",a,c);
    printf("%d的二进制是%d\n",b,d);

    int and = a & b;
    int or = a | b;
    int xor = a ^ b;

    int band = decimalToBinary(and);
    int bor = decimalToBinary(or);
    int bxor = decimalToBinary(xor);

    printf("a & b = %d\n", band);
    printf("a | b = %d\n", bor);
    printf("a ^ b = %d\n", bxor);

    return 0;
}