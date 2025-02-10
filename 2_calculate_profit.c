/*企业发放的奖金根据利润提成
#利润（I）低于或等于10万元时，奖金可提10%
#利润高于10万元，低于20万元时，低于10万元部分按10%提，高于10万元部分，可提7.5%
#20万到40万元之间，高于20万元部分可提5%
#40万到60万元之间，高于40万元部分可提3%
#60万到100万元之间，高于60万元部分，可提1.5%
#高于100万元，超过100万元部分按1%提
从键盘输入当月利润I，求英法放奖金总数
*/
#include<stdio.h>

int main()
{
    int profit, bonus;
    int bonus1, bonus2, bonus3, bonus4,bonus5;
    bonus1 = 100000*0.1;
    bonus2 = bonus1 + 100000*0.075;
    bonus3 = bonus2 + 200000*0.05;
    bonus4 = bonus3 + 200000*0.03;
    bonus5 = bonus4 + 400000*0.015;

    scanf("%d",&profit);
    if(profit < 100000)
    {
        bonus = profit * 0.1;
    }else if(profit < 200000)
    {
        bonus = bonus1 + (profit-100000)*0.075;
    }else if(profit < 400000)
    {
        bonus = bonus2 + (profit-200000)*0.05;
    }else if(profit < 600000)
    {
        bonus = bonus3 + (profit-400000)*0.03;
    }else if(profit < 1000000)
    {
        bonus = bonus4 + (profit-600000)*0.015;
    }else
    {
        bonus = bonus5 + (profit-1000000)*0.01;
    }

    printf("the bonus is %d\n",bonus);

    return 0;
}