//
// Created by itzixiao on 2024/3/15.
//

#include <stdio.h>

float harmonicAverage(float x, float y);

int main(void) {
    float x, y;
    printf("Enter the x and y you want to harmonicAverage: ");
    scanf("%f %f",&x,&y);
    printf("x=%f, y=%f\n", x, y);
    printf("harmonicAverage(%f, %f) = %f\n", x, y, harmonicAverage(x, y));
    return 0;
}

// Formulas: 2/(1/x+1/y)
float harmonicAverage(float x, float y) {
    return 2 / (1 / x + 1 / y);
}
