// PROGRAM NO = 51 WRITE A PROGRAM TO PRINT THE FOLLOWING PATTERN:
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        for (int j = 0; j < rows - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}