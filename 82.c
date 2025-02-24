/*
八进制转换为十进制
思路：先转为字符串，通过ASC码对比进行转换
123(8) = 1*8^2 + 2*8^1 + 3*8^0
slen=3; i=0; 8^2; 2=slen-i-1; 2=3-0-1
slen=3; i=1; 8^1; 1=slen-i-1; 1=3-1-1
slen=3; i=2; 8^0; 0=slen-i-1; 0=3-2-1
*/

#include<stdio.h>
#include"string.h"

int main(void){
    char s1[20] = "123";
    int slen = strlen(s1);
    int s2[20];
    for(int i=0; i<slen; i++){
        s2[i] = s1[i] - 48;
    }

    int s =  0;//存放转换后十进制
    int i = 0;//计数字符数组

    while(s1[i]!='\0'){
        int x = 1;//存放8的次幂
        //slen=3; i=0; 8^2; 2=slen-i-1; 2=3-0-1
        for(int j=1;j<=slen-i-1;j++){
           x = x*8;
        }
        printf("%d",x);
        printf("\n");

        s2[i] = s2[i]*x;        
        printf("%d\t",i);
        printf("%d\n",s2[i]);
        i++;
    }
    for(int i=0; i<slen; i++){
        s += s2[i];
    }
    printf("8进制 %s 转化成10进制后为 %d\n", s1, s);
    
    return 0;
}