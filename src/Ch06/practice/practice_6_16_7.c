//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"
#include "string.h"

int main(void) {
    char word[100];
    printf("Please input a word:");
    scanf("%s", word);
    printf("The word you enter is : %s\n", word);
    printf("The reverse word you enter is : ");
    for (int i = strlen(word); i > 0; i--) {
        printf("%c", word[i - 1]);
    }
    return 0;
}