/*题目:84:一个偶数总能表示为两个素数之和。
1、如何获得一个数;int n;
2、怎么判断它是偶数;
3、如何判断一个数是素数;
4、n=a+b; a和b都是素数

输入一个数，进行判断是否是偶数，是则继续，不是则返回0
是偶数，如何将其分解为两个素数之和，
*/

#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n);
void findPrimePair(int evennumber);

int main(void){
    int evennumber;

    //输入一个偶数
    printf("请输入一个偶数\n");
    scanf("%d",&evennumber);

    //检查输入是否为偶数
    if(evennumber <= 2 || evennumber%2 != 0){
        printf("输入的不是大于2的偶数");
        return 1;
    }

    //找到两个素数之和为输入的偶数
    findPrimePair(evennumber);

    return 0;
}

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    if(n == 2){
        return true;
    }
    if(n%2 == 0){
        return false;
    }

    for(int i=3; i*i<=n; i+=2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void findPrimePair(int evennumber){
    for(int i = 2; i <= evennumber / 2; i++){
        if(isPrime(i) && isPrime(evennumber - i)){
            printf("%d = %d + %d\n",evennumber, i, evennumber - i);
            return;
        }
    }
}