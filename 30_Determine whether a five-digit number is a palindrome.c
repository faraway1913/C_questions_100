/*
一个5位数，判断它是否是回文数，即12321是回文数，各位与万位相同，十位与千位相同
*/

#include <stdio.h>
int main(){
    int num;
    int a, b, c, d, e;
    printf("Please input a 5-digit number:");
    scanf("%d", &num);
    printf("num = %d\n",num);
    a = num / 10000;
    b = num / 1000 % 10;
    c = num / 100 % 10;
    d = num / 10 % 10;
    e = num % 10;
    printf("a = %d, b = %d, c = %d, d = %d, e = %d\n",a,b,c,d,e);
    if (a == e && b == d)
        printf("This number is a palindrome.\n");
    else
        printf("This number is not a palindrome.\n");

    return 0;
}
