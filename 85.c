/*
判断一个素数能整除几个9
比如99999/17?是否成立
*/

#include<stdio.h>

int main(){
    int ss = 13;
    int a = 9;
    while(a%ss !=0){
        a = a*10 + 9;
    }
    printf("a = %d\n",a);
    
    return 0;
}


// #include <stdio.h>
// #include <stdbool.h>

// // 判断一个数是否是素数
// bool isPrime(int n) {
//     if (n <= 1) return false; // 小于等于1的数不是素数
//     if (n == 2) return true;  // 2是素数
//     if (n % 2 == 0) return false; // 偶数不是素数

//     // 检查3到sqrt(n)之间的数
//     for (int i = 3; i * i <= n; i += 2) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// // 判断一个素数能整除几个9
// int countDivisibleBy9(int prime) {
//     if (prime == 3) {
//         // 3可以整除任意 9 的幂，返回无限大（用-1表示）
//         return -1;
//     } else {
//         // 其他素数不能整除任何 9 的幂
//         return 0;
//     }
// }

// int main() {
//     int number;

//     // 输入一个数
//     printf("请输入一个素数: ");
//     scanf("%d", &number);

//     // 检查是否为素数
//     if (!isPrime(number)) {
//         printf("%d 不是素数！\n", number);
//         return 1;
//     }

//     // 判断能整除几个9
//     int result = countDivisibleBy9(number);
//     if (result == -1) {
//         printf("素数 %d 能整除无限多个9（即它可以整除任意 9 的幂）。\n", number);
//     } else {
//         printf("素数 %d 不能整除任何9的幂。\n", number);
//     }

//     return 0;
// }
