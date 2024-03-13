//
// Created by itzixiao on 2024/3/6.
//
#include "stdio.h"

int main(void) {

    int start = 1;
    int end = 100;
    int guess = (start + end) / 2;

    char ch;
    printf("Please enter a number between %d and %d,I will to guess.", start, end);

    printf("Response (y/n):.\n");

    do {
        printf("Your guess: %d,\n", guess);
        if (getchar() == 'y') break;
        printf("Well, then %d,big or small? Response(b/s):\n", guess);
        while((ch = getchar()) == '\n') continue;
        if (ch == 'b') {
            end = guess - 1;
            guess = (start + end) / 2;
            continue;
        } else if (ch == 's') {
            start = guess + 1;
            guess = (start + end) / 2;
            continue;
        } else {
            continue;
        }
    } while (getchar() != 'y');

    printf("I knew i can guess it: %d!\n", guess);

    return 0;
}
