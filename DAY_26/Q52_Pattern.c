//PROGRAM NO 52 WRITE A PROGRAM TO PRINT THE PATTERN:
#include <stdio.h>

int main() {
    int n = 3; // half-height (rows above and including middle)

    // Upper half (including middle row)
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}