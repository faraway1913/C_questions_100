/*
求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。1<= a <=9，n个数字由键盘输入。

视频思路：1.如何控制。2.a，aa，aaa...怎么表示3.求和
我的思路：
*/

#include<stdio.h>

int main()
{
    int a = 2;
    int n = 0, i = 0, sum = 2;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("a[%d] = %d  ",i,a);
        printf("s[%d] = %d  ",i,sum);
        
        a = a*10 + 2; 
        sum = sum + a;
    }

    //printf("\n");
    printf("\ns = %d",sum);

    return 0;
}