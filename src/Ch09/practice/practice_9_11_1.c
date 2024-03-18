//
// Created by itzixiao on 2024/3/15.
//

#include <stdio.h>

double min(double x, double y);

int main(void) {
    printf("min(1.1,2.2)=%.2f\n", min(1.1, 2.2));
    return 0;
}

double min(double x, double y) {
    return x < y ? x : y;
}

