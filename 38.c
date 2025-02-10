/*
求一个3*3矩阵主对角线的元素之和
思路：1.3*3矩阵用二维矩阵实现arr[2][2] 2.对角线元素？主对角线：arr[i][i],副对角线arr[i][2-i] 3.求和
*/

#include<stdio.h>

int main(){
    int a[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9},};
    
    int sum = 0;

    for(int i=0; i<3; i++){
        sum += a[i][i];
    }

    printf("%d",sum);

    return 0;
}