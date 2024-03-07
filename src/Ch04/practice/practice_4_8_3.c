//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"
#include "string.h"

int main(void) {
    float num;

    printf("Enter a float number:");
    scanf("%f", &num);

    printf("The input is %.1f or %.1e\n", num, num);
    printf("The input is %.3f or %.3e\n", num, num);

    return 0;
}