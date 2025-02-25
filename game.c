#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 10
#define HEIGHT 20
#define EMPTY 0
#define FILLED 1

int grid[HEIGHT][WIDTH] = {0};
int score = 0;

// 方块形状
int shapes[7][4][4] = {
    {
        {0,0,0,0},
        {1,1,1,1},
        {0,0,0,0},
        {0,0,0,0}
    },
    {
        {0,0,0,0},
        {0,2,2,0},
        {0,2,2,0},
        {0,0,0,0}
    },
    {
        {0,0,0,0},
        {0,3,3,3},
        {0,3,0,0},
        {0,0,0,0}
    },
    {
        {0,0,0,0},
        {0,4,4,4},
        {0,0,0,4},
        {0,0,0,0}
    },
    {
        {0,0,0,0},
        {0,5,5,0},
        {0,0,5,5},
        {0,0,0,0}
    },
    {
        {0,0,0,0},
        {0,0,6,6},
        {0,6,6,0},
        {0,0,0,0}
    },
    {
        {0,0,0,0},
        {0,7,7,7},
        {0,0,7,0},
        {0,0,0,0}
    }
};

typedef struct {
    int x;
    int y;
    int shape[4][4];
} Tetromino;

Tetromino current;

// 初始化当前方块
void init_tetromino() {
    current.x = WIDTH / 2 - 2;
    current.y = 0;
    int type = rand() % 7;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            current.shape[i][j] = shapes[type][i][j];
        }
    }
}

// 绘制网格
void draw_grid() {
    system("cls");
    printf("Score: %d\n\n", score);
    for(int i=0; i<HEIGHT; i++) {
        printf("|");
        for(int j=0; j<WIDTH; j++) {
            if(grid[i][j] == EMPTY) {
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("|\n");
    }
    printf("+");
    for(int j=0; j<WIDTH; j++) printf("-");
    printf("+\n");
}

// 检查碰撞
int check_collision() {
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(current.shape[i][j]) {
                int x = current.x + j;
                int y = current.y + i;
                if(x < 0 || x >= WIDTH || y >= HEIGHT || grid[y][x]) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

// 合并方块到网格
void merge_tetromino() {
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(current.shape[i][j]) {
                grid[current.y + i][current.x + j] = FILLED;
            }
        }
    }
}

// 清除满行
void clear_lines() {
    for(int i=HEIGHT-1; i>=0; i--) {
        int full = 1;
        for(int j=0; j<WIDTH; j++) {
            if(grid[i][j] == EMPTY) {
                full = 0;
                break;
            }
        }
        if(full) {
            for(int k=i; k>0; k--) {
                for(int j=0; j<WIDTH; j++) {
                    grid[k][j] = grid[k-1][j];
                }
            }
            for(int j=0; j<WIDTH; j++) {
                grid[0][j] = EMPTY;
            }
            score += 100;
            i++;
        }
    }
}

// 旋转方块
void rotate_tetromino() {
    int temp[4][4];
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            temp[i][j] = current.shape[3-j][i];
        }
    }
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            current.shape[i][j] = temp[i][j];
        }
    }
    if(check_collision()) {
        for(int i=0; i<4; i++) {
            for(int j=0; j<4; j++) {
                current.shape[i][j] = temp[3-j][i];
            }
        }
    }
}

// 游戏主循环
void game_loop() {
    init_tetromino();
    int game_over = 0;
    while(!game_over) {
        draw_grid();
        Sleep(300);
        if(_kbhit()) {
            char ch = _getch();
            switch(ch) {
                case 'a': // 左移
                    current.x--;
                    if(check_collision()) current.x++;
                    break;
                case 'd': // 右移
                    current.x++;
                    if(check_collision()) current.x--;
                    break;
                case 's': // 加速下落
                    current.y++;
                    if(check_collision()) current.y--;
                    break;
                case 'w': // 旋转
                    rotate_tetromino();
                    break;
                case 'q': // 退出
                    game_over = 1;
                    break;
            }
        }
        current.y++;
        if(check_collision()) {
            current.y--;
            merge_tetromino();
            clear_lines();
            init_tetromino();
            if(check_collision()) {
                game_over = 1;
            }
        }
    }
}

int main() {
    game_loop();
    printf("Game Over! Final Score: %d\n", score);
    return 0;
}
