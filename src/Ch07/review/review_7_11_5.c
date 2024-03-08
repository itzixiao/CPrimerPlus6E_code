//
// Created by itzixiao on 2024/3/4.
//
#include <stdio.h>

int main(void) {
    int num;
    for (num = 1; num <= 11; num++) {
        if (num % 3 == 0)
            putchar('$');
        else
            putchar('*');
            putchar('#');
        putchar('%');
    }
    putchar('\n');
    return 0;
}