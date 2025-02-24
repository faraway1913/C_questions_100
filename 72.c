/*
title:malloc函数的用法
创建一个链表
1.void* malloc(size_t size);
2.void *realloc(void *ptr, size_t size);
3.void free(void *p);
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    // int *p = (int *)malloc(sizeof(int)*20);//malloc返回值是void型指针，需要分配什么类型，进行什么类型的强制类型转换，这里是int *
    // int i = 10;
    // int space;
    // *p = i;
    // space = sizeof(p);
    // printf("%d\n",*p);
    // printf("%d\n",space);

    char *p;
    p = (char *)malloc(sizeof(char)*20);

    strcpy(p, "hello");
    printf("%s sizeof(p) = %zd\n",p, sizeof(p));

    char *q;
    q = (char *)realloc(p, sizeof(char)*20);
    /*情况1：如果当前 p 所指向的内存空间后面有足够的连续空闲空间，realloc 会直接在原内存空间后面追加
    所需的空间，并返回 p 原来的地址，即 q 和 p 指向相同的内存地址。
    情况2：如果当前 p 所指向的内存空间后面没有足够的连续空闲空间，realloc 会在内存的其他地方找到一块
    大小为 20 个 char 类型的连续内存空间，将 p 所指向的原内存空间中的内容复制到新的内存空间中，
    然后释放原内存空间，并返回新内存空间的起始地址，此时 q 指向新的内存地址，而 p 所指向
    的原内存空间已被释放。*/

    strcat(q, "teacher");//在p后新加一串字符
    printf("%s sizeof(q) = %zd\n",q, sizeof(q));

    free(q);
    free(p);
    //先申请的后free掉，因为后面申请空间的有可能用到前面申请的空间

    return 0;
}