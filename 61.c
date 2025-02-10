/*
输出杨辉三角形，中国南宋数学家杨辉
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
1   5   10  10  5   1
1   6   15  20  15  6   1
1   7   21  35  35  21  7   1
1   8   28  56  70  56  28  8   1
1   9   36  84  126 126 84  36  9   1
*/

#include<stdio.h>

int main(){
    int a[10][10];
    for(int i=0;i<10;i++){
        a[i][0] = 1;
        for(int j=1;j<10;j++){
            a[i][j] = 0;
        }
    }
    
    for(int i=1;i<10;i++){
        for(int j=1;j<=i;j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
            //printf("%-4d",a[i][j]);
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<=i;j++){
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}