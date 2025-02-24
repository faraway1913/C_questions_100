/*
字符串排序
1.有若干个字符串
2.排序：比较大小：挨个字符比较；strcmp(str1,str2)>0,则str1 > str2
3.展示出来：a = 10, b = 20,法一：输出b，a。法二：输出a，b，但是改变a，b的值a=20,b=10
*/

#include<stdio.h>
#include<string.h>

void swap(char *str1, char *str2){
    char temp[20];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main(void){
    char str1[20] = "1";
    char str2[20] = "2";

    // fgets(str2, 20, stdin);
    // printf("%s\n",str2);

    if(strcmp(str1,str2)>0){
        printf("str1 is bigger\n");
    }else{
        swap(str1, str2);
        printf("str2 is bigger\n");
    }

    printf("%s, %s\n", str1, str2);
    
    return 0;
}