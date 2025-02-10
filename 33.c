/*
 * 判断一个数是否是质数
 * 程序分析：质数（prime number）又称素数，有无限个，一个大于1的自然数，除了1和它本身外，不能被其他自然数整除
 * 优化思路：利用sqrt判断能够省去一部分遍历
 * 新增功能：输入验证、循环测试、函数封装
 */

#include <stdio.h>
#include <math.h>
#include <ctype.h>

// 判断是否为质数的函数
int isPrimeNumber(int n) {
    if (n <= 1) return 0;
    
    int j = (int)sqrt(n);
    for (int i = 2; i <= j; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// 获取有效输入的函数
int getValidInput() {
    int n;
    char ch;
    while (1) {
        printf("请输入一个正整数（输入0退出）：");
        if (scanf("%d", &n) != 1) {
            // 清除无效输入
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("输入无效，请输入一个整数。\n");
            continue;
        }
        if (n < 0) {
            printf("请输入正整数。\n");
            continue;
        }
        return n;
    }
}

int main() {
    printf("质数判断程序\n");
    
    while (1) {
        int n = getValidInput();
        
        if (n == 0) {
            printf("程序结束。\n");
            break;
        }
        
        if (isPrimeNumber(n)) {
            printf("%d 是质数\n\n", n);
        } else {
            printf("%d 不是质数\n\n", n);
        }
    }

    return 0;
}
