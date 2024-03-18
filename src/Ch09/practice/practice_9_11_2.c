//
// Created by itzixiao on 2024/3/15.
//

#include <stdio.h>

void chline(char ch, int i, int j);

int main(void) {
    chline('@', 10, 20);
    return 0;
}

void chline(char ch, int i, int j) {
    for (int k = 0; k < i; ++k) {
        for (int l = 0; l < j; ++l) {
            printf("%c", ch);
        }
        printf("\n");
    }
}
