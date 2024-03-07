//
// Created by itzixiao on 2024/3/4.
//
#include <stdio.h>

#define Ten 103

int main(void) {
    int n = 96;
    while (n++ < Ten) {
        printf("%5c", n);
    }
    printf("\n");
    return 0;
}