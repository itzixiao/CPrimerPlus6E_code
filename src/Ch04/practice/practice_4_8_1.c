//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"
int main(void) {
    char first_name[100];
    printf("Please input your first name: \n");
    scanf("%s", first_name);
    char last_name[100];
    printf("Please input your last name: \n");
    scanf("%s", last_name);
    printf("Your name is %s,%s.\n", last_name, first_name);
    return 0;
}