/*
求100以内的素数
思路：什么是素数？只能被1和自身整除的数
求100内的素数 1.循环遍历1-100 2.判断每次循环数据是否是素数 3.输出
1.for循环 2.判断素数，只需要for循环判断判断从2到该数的平方根是否能整除该数 3.输出该数
*/

#include<stdio.h>
#include<math.h>

int is_prime_num(int num){
    if(num<2){
        return 0;
    }

    for(int i=2; i<=(int)sqrt(num); i++){
        if(num % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    for(int num=2; num<100; num++){
        if(is_prime_num(num)){
            printf("%d\t",num);
        }
    }

    return 0;
}