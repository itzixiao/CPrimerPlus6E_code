//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"

int main(void) {
    char alphabet = 70;
    int i, j;
    for (i = 1; i <= 6; i++) {
        /* 外部循环控制行数*/
        for (j = 0; j < i; j++) {
            /* 内部循环使用j < i 即表示第 N 行打印 N 个*/
            printf("%c", alphabet - j);
        }
        printf("\n");
    }
    return 0;
}