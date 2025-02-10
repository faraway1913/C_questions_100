/*
输入两个正整数m，n，求其最大公约数和最小公倍数。

视频思路：最大公约数用辗转相除法，最小公倍数用两个数的乘积除以最大公约数
我的思路：最大公约数，判断出将较小的值给m，较大的值给n，然后用m递减被m，n相除判断出最大公约数，
最小公倍数就是两个数的乘积除以最大公约数
*/

#include <stdio.h>

int main()
{
    int m, n, i, j, gcd, lcm;
    printf("Please input two positive integers: ");
    scanf("%d,%d", &m, &n);
    for (i = m; i >= 1; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            gcd = i;
            break;
        }
    }
    for (j = m; j <= m * n; j++)
    {
        if (j % m == 0 && j % n == 0)
        {
            lcm = j;
            break;
        }
    }
    printf("The greatest common divisor of %d and %d is %d.\n", m, n, gcd);
    printf("The least common multiple of %d and %d is %d.\n", m, n, lcm);
    return 0;
}
