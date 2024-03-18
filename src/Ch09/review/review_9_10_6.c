//
// Created by itzixiao on 2024/3/15.
//
#include "stdio.h"

void alter(int *u, int *v);

int main(void) {
    int x = 13, y = 12;

    printf("Originally x = %d and y = %d.\n", x, y);
    alter(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);

    return 0;
}

void alter(int *u, int *v) {
    int temp;
    // printf("Originally u = %d and v = %d.\n", *u, *v);
    temp = *u;
    *u = *u + *v;
    *v = temp - *v;
    // printf("Now u = %d and v = %d.\n", *u, *v);
}
