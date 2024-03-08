//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"

int main(void) {
    char ch;
    int ce = 0, ci = 0;
    char input[100];
    int index = 0;
    printf("Please input chars (# for exit):");
    while ((ch = getchar()) != '#') {
        if (ch == 'e') {
            ce++;
        } else if (ch == 'i') {
            ci++;
        }
        input[index++]=ch;
    }
    printf("Receive your:%s\n", input);
    printf("ce:%d\nci:%d\n", ce, ci);
    return 0;
}