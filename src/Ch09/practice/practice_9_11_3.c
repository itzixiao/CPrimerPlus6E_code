//
// Created by itzixiao on 2024/3/15.
//

#include <stdio.h>

void chline(char ch, int j, int i);

int main(void) {
    int i, j;
    char ch;
    printf("Enter the char you want to print: ");
    scanf("%c", &ch);
    printf("Enter the rows and cols you want to print: ");
    scanf("%d %d", &i, &j);
    // 输入校验
    if (ch < 'A' || ch > 'z' || i <= 0 || j <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    chline(ch, i, j);
    return 0;
}

void chline(char ch, int j, int i) {
    for (int k = 0; k < i; ++k) {
        for (int l = 0; l < j; ++l) {
            printf("%c", ch);
        }
        printf("\n");
    }
}
