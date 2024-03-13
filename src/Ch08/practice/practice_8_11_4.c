//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"
#include "ctype.h"

int main(void) {

    char ch;
    int word = 0, letter = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '#') {
        if (isalnum(ch)) {
            letter++;
        }
        if (isspace(ch)) {
            word++;
        }
    }
    printf("Number of words: %d,\nNumber of letters:%d,\n%.2f C/W!\n", word, letter, 1.0 * letter / word);

    return 0;
}
