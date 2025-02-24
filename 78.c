/*
结构体指针
*/

#include<stdio.h>
#include<stdlib.h>

struct man{
    char name[20];
    int age;
}person[3] = {"li",18, "wang",25, "sun",22};
//person1 = {"lixiaolong", 32};*/

int main(void){
    struct man *p;
    p = person;
    struct man *q = NULL;
    int m = 0;
    
    for(int i=0; i<3; i++){
        if(p->age > m){
            m = p->age;
            q = p;
        }
        p++;
    }

    printf("%s, %d\n", q->name, q->age);

    //void:没有返回值或者没有形参
    //void *
    //malloc定义：void * malloc(size_t __size).返回的是void *，使用时需要进行强制类型转换，返回的空指针
    /*char *str = (char *)malloc(sizeof(char)*30);    //强制转换成char * 类型指针
    // gets(str);
    fgets(str, 30, stdin);
    printf("%s\n",str);*/
    
    return 0;
}