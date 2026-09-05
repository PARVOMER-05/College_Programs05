//PROGRAM NO 52 WRITE A PROGRAM TO PRINT THE PATTERN:
#include <stdio.h>

int main() {
    int rows = 5;
    int mid = (rows + 1) / 2;

    for (int i = 1; i <= rows; i++) {
        int stars;
        if (i <= mid) {
            stars = 2 * i - 1;
        } else {
            stars = 2 * (rows - i + 1) - 1;
        }

        for (int j = 1; j <= stars; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}