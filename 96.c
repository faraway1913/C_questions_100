/*
计算字符串中出现子串的次数
例如字符串:123456123789
子串:123 --- 2次
子串:234 --- 1次
*/

#include<stdio.h>
#include<string.h>

int func(char *str1, char *str2){
    int i,j,count;
    for(i = 0; i < strlen(str1); i++){
        for(j = 0; j < strlen(str2); j++){
            if(*(str1+i+j) != *(str2+j)){
                break;
            }
        }
        if(j == strlen(str2)){
            count++;
        }
    }

    return count;
}

int main(void){
    int func(char *str1, char *str2);
    char str1[50] = "123789121234789";
    char str2[50] = "123";

    puts(str1);
    puts(str2);

    int len1 = (int)strlen(str1);
    printf("len1 = %d\n",len1);
    int len2 = (int)strlen(str2);
    printf("len2 = %d\n",len2);

    int n = func(str1, str2);
    printf("count = %d\n", n);

    return 0;
}


//AI生成
/*#include <stdio.h>
#include <string.h>

int count_substring(const char *str, const char *sub) {
    int count = 0;
    int sub_len = strlen(sub);
    while ((str = strstr(str, sub)) != NULL) {
        count++;
        str += sub_len;
    }
    return count;
}

int main() {
    char str[100], sub[100];
    
    printf("请输入字符串: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // 去除换行符
    
    printf("请输入子串: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = 0;  // 去除换行符
    
    int count = count_substring(str, sub);
    printf("子串 \"%s\" 在字符串中出现了 %d 次\n", sub, count);
    
    return 0;
}*/