/*PROGRAM NO 53 = WRITE A PROGRAM TO PRINT THE FOLLOWING PATTERN:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>

int main() {
    int n = 5; // half-height

    // Upper half (including middle)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}