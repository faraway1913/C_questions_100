/*
有一个已经排好序的数组，现在需要输入一个数，要求按原来的规律将其插入数组中
思路：已经排好序？升序还是降序。这个数在数组最前面/中间/后面？插入中间如何移动？
1.用if判断数组首位用于判断升序还是降序。2.这个数与数组首尾判断需要插入到什么位置。3.若插入位置在中间，数组应该怎么变化
*/

#include<stdio.h>
#include<stdlib.h>

# define up 1
# define down 0

int main(){
    int a[] = {1,4,6,32,75,78,987};
    int n = sizeof(a)/sizeof(a[0]);
    int* b = (int*)malloc((n+1)*sizeof(int));
    int insert = 10;
    int i = 0;
    int order;

    printf("插入前数组: ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    
    for(int j=0; j<(n+1); j++){
        b[j] = a[j];
    }

    //测试
    printf("新数组空间: ");
    for(int i=0; i<n+1; i++){
        printf("%d ",b[i]);
    }
    printf("\n");

    if(a[0] < a[n-1]){
        order = up;
    }else{
        order =down;
    }

    if(order == up){
        if(insert<b[0]){
            for(int i=0; i<(n+1); i++){
                b[n-i] = b[(n-1)-i];
            }
            b[0] = insert;
            //printf("%d\n",b[0]);
        }else if(insert>b[n-1]){
            b[n] = insert;
            //printf("%d\n",b[0]);
        }else{
            for(int i=0; i<n; i++){
                if(insert > b[i]){
                    //printf("%d\n",b[0]);
                    continue;
                }else{
                    printf("%d\n",i);
                    printf("%d\n",n);
                    printf("%d\n",n-i);
                    for(int j=0; j<(n-i); j++){
                        b[n-j] = b[n-j-1];
                    }
                    b[i] = insert;
                    //printf("%d\n",b[0]);
                    break;
                }
            }
        }
        printf("插入后数组: ");
        for(int i=0; i<n+1; i++){
            printf("%d ",b[i]);
        }
    }
    //else if(order == down){

    //}

    free(b);

    return 0;
}