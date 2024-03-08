//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"

#define WEEK 7

int main(void) {
    int day_num;

    printf("Please input day num: \n");
    while(scanf("%d",&day_num) == 1){
        printf("%d days are %d weeks, %d days \n", day_num, day_num / WEEK, day_num % WEEK);
        printf("Please input day num: \n");
    }
    printf("Done!\n");
    return 0;
}