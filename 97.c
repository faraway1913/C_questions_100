/*
从键盘输入一些字符,逐个将它们送入到磁盘上,直到输入一个#为止
*/

#include <stdio.h>

int main() {
    char ch;
    FILE *file;

    // 打开文件（如果文件不存在则创建）
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("无法打开文件！\n");
        return 1;
    }

    printf("请输入字符（以 # 结束）:\n");

    // 读取字符并写入文件
    while ((ch = getchar()) != '#') {
        fputc(ch, file); // 将字符写入文件
    }

    // 关闭文件
    fclose(file);

    printf("字符已成功写入文件 output.txt\n");

    return 0;
}
