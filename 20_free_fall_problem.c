/*
一个球从100m高度自由落下，每次落地后反跳回原本高度的一半，再落下，求它在第n次落地时，共经过多少m。

视频思路：反弹高度h，经历路程s，
我的思路：
    反弹高度h，经历路程s
    s1=100，h1=50
    s2=100+50+50=200,h2=25
    s3=200+25+25=250,h3=12.5
*/

#include <stdio.h>

int main()
{
    int i,n;//回弹次数
    float h = 50, s = 100;
    scanf("%d",&n);
    printf("n=%d\n",n);
    
    if(n==1){
        s = 100;
    }else if(n>1){
        printf("h[1] = %3.1f  ",h);
        printf("s[1] = %3.1f  ",s);
        for(i=2;i<=n;i++){
        s = s + h*2;
        h = h/2;
        printf("h[%d] = %3.1f  ",i,h);
        printf("s[%d] = %3.1f  ",i,s);

        }
        
    }
    printf("\n在它第 %d 次落地时,经过路程%3.1f m",n,s);

    return 0;
}
