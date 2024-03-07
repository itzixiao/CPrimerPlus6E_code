//
// Created by itzixiao on 2024/3/4.
//
#include <stdio.h>

#define BOOK "War and peace"

int main(void ) {

    float cost = 12.99;
    float percent = 80.0;
    printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);

    printf("That is %.0f%% of list.\n", percent);

    return 0;
}