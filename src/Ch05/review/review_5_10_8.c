//
// Created by itzixiao on 2024/3/4.
//
#include <stdio.h>

#define Ten 10

int main(void) {
    int n = 0;
    while (n++ < Ten) {
        printf("%5d", n);
    }
    printf("\n");
    return 0;
}