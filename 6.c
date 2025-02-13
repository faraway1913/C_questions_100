/*用*号输出字母C的图案*/
/*思路：假设字母C高度5行，宽度5行，最中间一行只有一个*号，往两边依次往后延一个位置，最顶上4个*号*/

#include <stdio.h>

int main()
{
    int i,j;
    for(i=0;i<5;i++){
        if(i==0){
            printf("*****\n");
        }
        if(i==1){
            printf("* \n");
        }
        if(i==2){
            printf("*\n");
        }
        if(i==3){
            printf("*\n");
        }
        if(i==4){
            printf("*****\n");
        }
    }

    return 0;
}