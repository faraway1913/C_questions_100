/*
输入数组，最大的元素与第一个元素交换，最小的与最后一个元素交换，输出数组
1.输入数组
2.找到最大元素
3.最大元素与第一个元素交换
4.找到最小元素
5.最小元素与最后一个元素交换
6.输出数组
*/

#include<stdio.h>

int main(){
    //定义的数组
    int a[5] = {1,2,3,4,5};
    int max = a[0], min = a[0];
    int temp = 0, temp1 = 0;
    int x = 0, y = 0;
    int *pa;
    // printf("请输入5个整数:\n");
    // for(i=0;i<5;i++){
    //     scanf("%d",&a[i]);
    // }
    // printf("\n");

    // int *p;
    // p = a;
    // printf("p = %p, a = %p\n",p,a);
    // printf("*p = %d\n",*p);

    // p++;
    // printf("p' = %p, a = %p\n",p,a);
    // printf("*p' = %d\n",*p);

    // p+=2;
    // printf("p'' = %p, a = %p\n",p,a);
    // printf("*p'' = %d\n",*p);

    // 寻找最大值对应的下标
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max = a[i];
            x = i;
        }
    }

    //寻找最小元素
    for(int i=0; i<5; i++){
        if(a[i] < min){
            min = a[i];
            y = i;
        }
    }
    printf("%d\n",x);
    printf("%d\n",y);

    //最大元素与第一个元素互换
    temp = max;
    // a[x] = a[0];
    a[0] = temp;
    //最小元素与最后一个元素互换
    temp1 = min;
    // a[y] = a[4];
    a[4] = temp1;

    for(int i=0;i<5;i++){
        printf("%-4d",a[i]);
    }
    printf("\n");

    return 0;
}
