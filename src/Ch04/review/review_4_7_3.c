//
// Created by itzixiao on 2024/3/4.
//
#include <stdio.h>
#include <string.h>

#define Q "His Hamlet was funny without being vulgar."

int main(void) {
    printf("%s\nhas %d characters.\n", Q, strlen(Q));
    printf("\"%s\"\nhas %d characters.\n", Q, strlen(Q));
}