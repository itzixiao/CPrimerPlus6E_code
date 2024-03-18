//
// Created by itzixiao on 2024/3/15.
//
#include "stdio.h"

#define STARS "**********************************"

void menu();

int choose(int low, int high);

int main(void) {
    int res;
    menu();
    while ((res = choose(1, 4)) != 4) {
        printf("I like choice %d.\n", res);
        menu();
    }
    printf("Bye!\n");
    return 0;
}

int choose(int low, int high) {
    int ans, good;
    good = scanf("%d", &ans);
    if (good == 1 && (ans < low || ans > high)) {
        printf("%d is Invalid choice! Try again\n", ans);
        menu();
        scanf("%d", &ans);
    }
    if (good != 1) {
        printf("Non-numeric input!\n");
        ans = 4;
    }

    return ans;
}

void menu(void) {
    printf("\n%s%s\n", STARS, STARS);
    printf("Please choose one of the following:\n");
    printf("1) copy files           2) move files\n");
    printf("3) remove files         4) quit \n");
    printf("Enter the number of your choice:\n");
    printf("%s%s\n", STARS, STARS);
}
