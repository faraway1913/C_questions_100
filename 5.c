/*输入三个整数x,y,z,请把三个数由小到大输出*/

/*思路：三个数x,y,z,要进行排序，两个数x,y比较，把较小的赋给x，x与z比较把较小的赋给x，然后y与z比较把较小的赋给y，
随后依次输出x，y，z，引入中间变量m对两个数比较后进行交换时暂时存放数据*/

#include<stdio.h>

int main()
{
    int x,y,z,m;
    printf("请输入三个整数：");
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>y){
        m=x;
        x=y;
        y=m;
    }
    if(x>z){
        m=x;
        x=z;
        z=m;
    }
    if(y>z){
        m=y;
        y=z;
        z=m;
    }

    printf("%d,%d,%d",x,y,z);

    return 0;
}