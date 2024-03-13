//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"
#include <stdlib.h>

int main(void) {
    int count = 0;
    FILE * fp;
    char fname[50];
    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if (fp == NULL) {
        return 0;
    }
    while ((getc(fp) )!= EOF) {
        count++;
    }
    printf("Number of char in the file: %d\n", count);
    return 0;
}
