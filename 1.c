/*有1234四个数字，能组成多少互不相同且无重复数字的三位数，分别是多少

已知：
1.三位数
2.1-4
3.各不相同

输出：
1.有多少个这样的三位数
2.依次输出

思路：
int a, s, b;
b*100 + s*10 + g

遍历
for(g=1,g<5,g++)
*/  
#include<stdio.h>
int main()
{
    int g,s,b;
    int count = 0;
    for(b=1;b<5;b++)
        for(s=1;s<5;s++)
            for(g=1;g<5;g++)
            {
                if((b!=s) && (s!=g) && (g!=b))
                {
                    count = count + 1;
                    printf("%d,%d,%d\n",b,s,g);
                }
            }
    printf("total num is: %d",count);
    
    return 0;
}