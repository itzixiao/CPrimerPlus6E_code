#include <stdio.h>

int main(void) {
    float value;

    printf("%c%c%c\n", 'H', 105, '\41');
    printf("Which value do you want to convert?\n");
    scanf("%f", &value);
    printf("So you have %.2f cm convert %.2f in!\n", value, value * 2.54);

    return 0;
}