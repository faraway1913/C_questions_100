/*题目:两个字符串连接程序
1、char*a；char a[]；
*/

#include<stdio.h>
#include<string.h>

void concatenateStrings(char dest[], const char src[]);

int main(void){
    char str1[100];//存储第一个字符串
    char str2[100];//存储第二个字符串

    //输入第一个字符串
    printf("请输入第一个字符串: ");
    scanf("%s", str1);  //注意,这里使用%s会忽略空格

    //输入第二个字符串
    printf("请输入第二个字符串: ");
    scanf("%s", str2);

    //调用字符串连续函数
    concatenateStrings(str1, str2);

    //输出连接后的字符串
    printf("连接后的字符串: %s\n", str1);

    return 0;
}

void concatenateStrings(char dest[], const char src[]){
    //找到dest的结尾
    int destLenth = strlen(dest);
    int i = 0;

    //将src的内容复制到dest的结尾
    while(src[i] != '\0'){
        dest[destLenth + i] = src[i];
        i++;
    }

    //确保新字符以'\0'结尾
    dest[destLenth + i] = '\0';
}
