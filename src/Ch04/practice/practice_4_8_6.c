//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"
#include "string.h"

int main(void) {
    char first_name[100];
    printf("Please input your first name: \n");
    scanf("%s", first_name);
    char last_name[100];
    printf("Please input your last name: \n");
    scanf("%s", last_name);
    printf(" %s,%s.\n", first_name, last_name);
    printf(" %d,%d.\n", strlen(first_name), strlen(last_name));
}