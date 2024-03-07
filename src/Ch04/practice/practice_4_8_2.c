//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"
#include "string.h"

int main(void) {
    char name[100];
    printf("Please input your name: \n");
    scanf("%s", name);
    printf("Your name strlen() is :%d\n", strlen(name));
    // 打印名字，包括双引号
    printf("Your name is \"%s\".\n", name);
    // 在宽度为20的字段右端打印名字，包括双引号
    printf("Your name is \"%*s\".\n", 20, name);
    // 在宽度为20的字段左端打印名字，包括双引号
    printf("Your name is \"%*s\".\n", -20, name);
    // 在比名字宽度宽3的字段中打印名字
    printf("Your name is \"%*s\".\n", strlen(name) + 3, name);
    return 0;
}