//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"

int main(void) {
    char ch;
    int os = 0, on = 0, oo = 0;
    printf("Please input chars (# for exit):");
    while ((ch = getchar()) != '#') {
        if (ch == ' ') {
            os++;
        } else if (ch == '\n') {
            on++;
        } else {
            oo++;
        }
    }
    printf("os:%d\non:%d\noo:%d\n", os, on, oo);
    return 0;
}