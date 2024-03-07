//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"
#include <float.h>

int main(void) {
    double numA = 1.0 / 3.0;
    float numB = 1.0 / 3.0;
    printf("The numA result of 1.0/3.0 is %.6f or %.12f or %.16f.\n", numA, numA, numA);
    printf("The numB result of 1.0/3.0 is %.6f or %.12f or %.16f.\n", numB, numB, numB);

    /* float类型精度 */
    printf("FLT_DIG in float.h is %d\n",FLT_DIG);
    /* double类型精度 */
    printf("DBL_DIG in float.h is %d\n",DBL_DIG);
    return 0;
}