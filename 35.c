/*
字符串反转：例如“I like Kobe”反转为"eboK ekil I"
思路：把字符串放入字符数组中，strlen统计字符数据，如果为偶数，前后交换，如果为奇数中间一个数不交换
流程：定义字符数组 - 统计字符数组长度 - 判断奇偶 - 循环交换 - 输出
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "I like Kobe";
    int lenth;
    char temp;

    lenth = (int)strlen(str);

    for(int i=0; i<lenth/2; i++){
        temp = str[i];
        str[i] = str[lenth-1-i];
        str[lenth-1-i] = temp;
    }
    
    printf("交换后的字符串为%s\n",str);

    return 0;
}