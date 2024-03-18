//
// Created by itzixiao on 2024/3/15.
//
#include "stdio.h"

int max(int *u, int *v, int *w);

int main(void) {
    int x = -5, y = 100, z = 15;

    printf("Originally x = %d and y = %d and z = %d.\n", x, y,z);
    int maxValue = max(&x, &y, &z);
    printf("maxValue = %d.\n", maxValue);

    return 0;
}

int max(int *u, int *v, int *w) {
    int max;
    max = *u > *v ? *u : *v;
    max = max > *w ? max : *w;
    return max;
}

// int max(int *u, int *v, int *w) {
//     int max;
//     max = *u;
//     if (*v > max) {
//         max = *v;
//     }
//     if (*w > max) {
//         max = *w;
//     }
//     return max;
// }
