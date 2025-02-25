/*
猜数游戏:随机选定一个1~100的数字,需要输入你猜的数字,若没猜中,给出提示,
若猜的数字比选定数字大提示:大了,反之提示:小了;
猜中了则恭喜猜对了,并提问是否继续玩,
若选择继续,则选定另外一个数字继续游戏,若选择不继续则提示:不玩拉倒
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, playAgain;
    srand(time(NULL)); // 初始化随机数种子

    do {
        number = rand() % 100 + 1; // 生成1到100的随机数
        printf("我已经想好了一个1到100之间的数字，请你猜猜看是多少？\n");

        do {
            printf("请输入你猜的数字：");
            scanf("%d", &guess);

            if (guess > number) {
                printf("大了！\n");
            } else if (guess < number) {
                printf("小了！\n");
            } else {
                printf("恭喜你，猜对了！\n");
            }
        } while (guess != number);

        printf("是否继续玩？(1表示继续，0表示不继续)：");
        scanf("%d", &playAgain);

        if (!playAgain) {
            printf("不玩拉倒！\n");
        }
    } while (playAgain);

    return 0;
}