/*
删除一个字符串中的指定字母，如“abca”，删除其中的a字母

定义字符串类型的数组，遍历数组中每一个元素进行与要删除字母进行比较，
怎么删除？删除后的空位怎么办？
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "ilovepolyuandcdut.doyoulovethem";
    char c;

    printf("%s\n",str);
    scanf("%c",&c);
    int len = strlen(str);
    int j = 0;

    for(int i=0;i<len;i++){
        if(str[i] != c){
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
    printf("%s\n",str);

    return 0;
}