/*
编写input()和output()函数输入、输出5个学生的数据记录
1.函数：定义，声明，调用
2.学生的数据记录。“实体”“对象”
*/
#include<stdio.h>

struct student{
    char name[20];
    char sex[5];
    int age;
};
//等于定义了一种新的数据类型，叫做struct student

void input(struct student *stu){
    int i;
    for(i=0; i<3; i++){
        scanf("%s%s%d", stu[i].name, stu[i].sex, &stu[i].age);
    }
}

void output(struct student *stu){
    int i;
    for(i=0; i<3; i++){
        printf("name is %s, gender is %s, age is %d\n", stu[i].name, stu[i].sex, stu[i].age);
    }
}

int main(){
    struct student stu[3];
    input(stu);
    output(stu);

    return 0;
}