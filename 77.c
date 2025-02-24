/*
指向指针的指针
1.二级指针：指向指针的指针
2.二维数组
*/

#include<stdio.h>

int main(void){
    //1.二级指针
    /*int a = 100;
    int *p1 = &a;
    int **p2 = &p1;

    printf("&a = %x\n", p1);
    printf("*p2 = %x\n", *p2);

    printf("a = %d\n",a);
    printf("**p2 = %d\n",**p2);*/


    //2.二维数组
    /*int a[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
    int *p0 = a[0];
    int *p1 = a[1];
    int *p2 = a[2];

    printf("&a[0] = %x\n",a[0]);
    printf("p0 = %x\n",p0);
    printf("*p0 = %d\n",*p0);

    printf("&a[1] = %x\n",a[1]);
    printf("p1 = %x\n",p1);
    printf("*p1 = %d\n",*p1);
    
    printf("&a[2] = %x\n",a[2]);
    printf("p2 = %x\n",p2);
    printf("*p2 = %d\n",*p2);*/

    //指针指向二维数组的一种表达，能够用指针访问二维数组的任意一个数
    /*int (*p)[4] = a;
    printf("%d\n", *(*(p+0))+0);//第一个0代表第一行，第二个0代表这一行的第几个数，这里是第一行第一个数
    printf("%d\n", *(*(p+0))+2);*/

    //数组的指针
    // int a[10] = {};
    // int *p = a;
    
    /*//指针的数组：数组中所有的元素，保存的都是指针
    int a = 1;
    int b = 2;
    int c = 3;

    int *array[3] = {&a, &b, &c};
    int **p_array = array;

    printf("%d, %d, %d\n",*array[0], *array[1], *array[2]);
    printf("%d, %d, %d\n",**(p_array+0), **(p_array+1), **(p_array+2));*/

    /*char *str1 = "i am a teacher";
    char *str2 = "来一场不眠之夜做结尾";
    char *str3 = "c programming language";

    char *str[3] = {str1, str2, str3};

    printf("%s, %s, %s\n",str[0], str[1], str[2]);*/

    //例题
    const char *s[] = {"man", "woman", "girl", "boy", "sister"};
    const char **q;
    int k;
    for(k=0; k<5; k++){
        q = &s[k];      
        printf("%s\n",*q);
    }


    return 0;
}