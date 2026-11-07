/*
Q136 (ENUM)
USE ENUM TO REPRESENT MENU CHOICES (ADD, SUBTRACT, MULTIPLY) AND PERFORM OPERATIONS USING
SWITCH
*/

#include <stdio.h>
#include <string.h>

enum Choice { ADD, SUBTRACT, MULTIPLY };

int main() {
    char input[20];
    int a, b;
    scanf("%19s %d %d", input, &a, &b);

    enum Choice choice;
    if (strcmp(input, "ADD") == 0) {
        choice = ADD;
    } else if (strcmp(input, "SUBTRACT") == 0) {
        choice = SUBTRACT;
    } else if (strcmp(input, "MULTIPLY") == 0) {
        choice = MULTIPLY;
    } else {
        printf("Invalid input\n");
        return 1;
    }

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}