/*
输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。
monday, Tuesday, Wednsday, Thursday, Friday, Saturday, Sunday
*/

#include <stdio.h>

int main(){

    char day,j;
    printf("please enter the first letter of someday:\n");
    scanf("%c",&day);
    switch (day)
    {
    case 'M':
        printf("monday\n");
        break;
    case 'T':
        printf("please enter second letter\n");
        scanf(" %c",&j);
        if (j == 'u')
        {
            printf("tuesday\n");
        }
        else if (j == 'h')
        {
            printf("thursday\n");
        }
        else
        {
            printf("data error\n");
        }
        break;
    case 'W':
        printf("wednesday\n");
        break;
    case 'F':
        printf("friday\n");
        break;
    case 'S':
        printf("please enter second letter\n");
        scanf(" %c",&j);
        if (j == 'a')
        {
            printf("saturday\n");
        }
        else if (j == 'u')
        {
            printf("sunday\n");
        }
        else
        {
            printf("data error\n");
        }
        break;
    
    default:
        break;
    }

    return 0;
}
