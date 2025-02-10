/*
利用条件运算符的嵌套来完成：学习成绩>=90分的同学用A表示，60~89分之间的用B表示，60分以下的用C表示。
条件运算符：(a>b)?a:b
*/

#include <stdio.h>

int main()
{
    int score;
    int A=90,B=60,C=0;
    printf("请输入成绩：");
    scanf("%d",&score);
    (score>=A)?printf("A"):(score>=B)?printf("B"):printf("C");

    return 0;
}