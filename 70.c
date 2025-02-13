/*
写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度
1.写一个函数
2.求一个字符串的长度
3.在main函数中输入字符串
4.输出其长度
*/

#include<stdio.h>

int lenthofstr(char a[]){
    char *p;
    p = a;
    
    int count = 0;
    while(*p != '\0'){
        count++;
        p++;
    }

    return count;
}

int lenthofstr2(char *p){
    int count = 0;
    while(*p != '\0'){
        count++;
        p++;
    }
    return count;
}

void main(){
    //两种方法
    char a[] = "iamamaster";
    char *p = "iamamastertoo";

    char *p_a;
    p_a = a;

    printf("a = %s\n",a);
    printf("p = %s\n",p);
    printf("p_a = %s\n",p_a);

    int count = 0;
    while(*p_a != '\0'){
        count++;
        p_a++;
    }
    printf("count = %d\n",count);

    printf("lenthofstr = %d\n",lenthofstr(a));
    printf("lenthofstr2 = %d\n",lenthofstr2(p));

    p_a = a;
    printf("lenthofstr2 = %d\n",lenthofstr2(p_a));

}