//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"

int main(void) {
    char name[100];
    float tall;
    printf("Please input your name: \n");
    scanf("%s", name);
    printf("Please input your tall(cm):\n");
    scanf("%f", &tall);
    printf("Your name is %s, and your tall is %.2f(m).\n", name, tall / 100);
    return 0;
}