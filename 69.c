/*
有n个人围成一圈，顺序排号
此处假定一桌8人，东北酒桌小游戏
从第一个人开始报数(从1到3报数)，凡报到3的人退出圈子，退出后从1重新报数，问最后留下来的事原来第几号那位
约瑟夫环
*/
/*
8个人怎么存，数组int table[8] = {1,1,1,1,1,1,1,1}，存放8个人，每个人一开始都是清醒的
int index = 0   index存下标，从0到7代表1到8位置的人
int baoshu = 0  报数存放的内容是当次报数为几，从1到3循环报数
baoshu = 3时，此时的table[index]设为0,baoshu重置为1
index要自加，加到7时置零，置零后再自加，
要判断条件table[index]是否为0，若为0，index继续自加，若不为零，则判断baoshu是否到3
需要一个count去终止循环，剩最后一个数也就是while(count>0)，去获取当前的index，输出
*/
#include <stdio.h>

#define N 8  // 定义总人数为 8

int main() {
    int people[N];  // 定义一个数组来表示 n 个人，数组下标从 0 到 n-1 分别对应 1 到 n 号
    int count = 0;  // 用于记录当前报数的数字，从 1 开始
    int index = 0;  // 用于记录当前报数的人的位置，从 0 开始
    int remaining = N;  // 用于记录当前圈子里还剩下的人数，初始值为总人数 n

    // 初始化数组，将每个人的状态都设为 1，表示都在圈子里
    for (int i = 0; i < N; i++) {
        people[i] = 1;
    }

    // 当圈子里剩下的人数大于 1 时，继续报数
    while (remaining > 1) {
        // 如果当前位置的人还在圈子里（即数组元素值为 1）
        if (people[index] == 1) {
            count++;  // 报数加 1
            // 如果报数到 3
            if (count == 3) {
                people[index] = 0;  // 将该人的状态设为 0，表示退出圈子
                count = 0;  // 报数重置为 0，以便下一轮从 1 开始报数
                remaining--;  // 圈子里剩下的人数减 1
            }
        }
        index++;  // 移动到下一个人的位置
        // 如果已经到了数组的末尾，将位置重置为 0，实现循环报数
        if (index == N) {
            index = 0;
        }
    }

    // 找到最后留下来的人的编号
    for (int i = 0; i < N; i++) {
        if (people[i] == 1) {
            printf("最后留下来的是原来第 %d 号那位。\n", i + 1);
            break;
        }
    }

    return 0;
}