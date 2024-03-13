//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"
#include <stdlib.h>

int main(void) {
    int count = 0;
    FILE *fp;
    char fname[50];         // to hold the file name

    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r"); // open file for reading
    if (fp == NULL)         // attempt failed
    {
        printf("Failed to open file. Bye\n");
        exit(1);            // quit program
    }
    while ((getc(fp)) != EOF) {
        count++;
    }
    fclose(fp);
    printf("Number of char in the file: %d\n", count);
    return 0;
}
