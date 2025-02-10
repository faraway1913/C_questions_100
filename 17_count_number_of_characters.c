/*
输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

视频思路：循环getchar接收输入的字符，然后通过ASCII码判断
我的思路：通过判断中英文字母、空格、数字和其它字符的ASCII码范围来判断，然后进行统计。
*/

#include <stdio.h>

int main()
{
    char c;
    int letternum = 0, spacenum = 0, numbernum = 0, othernum = 0;
    c = getchar();
    while(c != '\n'){
        if( ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) ){
            letternum++;
        }else if( (c >= '0') && (c <= '9') ){
            numbernum++;
        }else if(c == ' '){
            spacenum++;
        }else{
            othernum++;
        }
        c = getchar();
    }
    printf("letter = %d, space = %d, number = %d, other = %d\n", letternum, spacenum, numbernum, othernum);

    return 0;
}
