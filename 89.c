/*
某公司采用公用电话传输数据,数据是四位整数,传输过程中是加密的,加密规则如下:
每位数字都加上5,然后用加上5后的和去除以10得到的余数代替该数字,
再将第一位和第四位交换,第二位和第三位交换
*/
#include <stdio.h>

int main() {
    int num, encrypted;
    int d1, d2, d3, d4;

    int valid = 0;
    
    while (!valid) {
        printf("Enter a 4-digit number: ");
        if (scanf("%d", &num) != 1 || num < 1000 || num > 9999) {
            printf("Invalid input! Please enter a 4-digit number.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        } else {
            valid = 1;
        }
    }

    // Extract each digit
    d1 = num / 1000;
    d2 = (num / 100) % 10;
    d3 = (num / 10) % 10;
    d4 = num % 10;

    // Encrypt each digit
    d1 = (d1 + 5) % 10;
    d2 = (d2 + 5) % 10;
    d3 = (d3 + 5) % 10;
    d4 = (d4 + 5) % 10;

    // Swap digits
    encrypted = d4 * 1000 + d3 * 100 + d2 * 10 + d1;

    printf("Encrypted number: %04d\n", encrypted);

    return 0;
}
