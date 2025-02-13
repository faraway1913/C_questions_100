/*输入某年某月某日，求这一天是这一年的第多少天*/
/*思路：根据月份算出该日之前的天数，加上该日就是一年的第多少天
注意是否是闰年
闰年判断：1.能被4整除，但不能能被100整除，3.能被400整除*/

#include <stdio.h>

int main()
{
    int year,month,day,daynum;
    printf("请输入年，月，日：");
    scanf("%d,%d,%d",&year,&month,&day);

    switch(month){
        case 1:
            daynum = day;
            break;
        case 2:
            daynum = 31 + day;
            break;
        case 3:
            daynum = 59 + day;
            break;
        case 4:
            daynum = 90 + day;
            break;
        case 5:
            daynum = 120 + day;
            break;
        case 6:
            daynum = 151 + day;
            break;
        case 7:
            daynum = 181 + day; 
            break;
        case 8:
            daynum = 212 + day;
            break;
        case 9:
            daynum = 242 + day;
            break;
        case 10:
            daynum = 273 + day;
            break;
        case 11:
            daynum = 303 + day;
            break;
        case 12:
            daynum = 334 + day;
            break;
        default: daynum = 0;
            break;
    }

    if( (month > 2) && (year%4 == 0 && year%100 != 0) || (year%400 == 0) ){
        daynum = daynum + 1;
    }else{
    daynum = daynum;
    }

    printf("%d,%d,%d is the %d day in %d",day,month,year,daynum,year);
}