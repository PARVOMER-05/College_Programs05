//PROGRAM NO = 48 WRITE A PROGRAM TO PRINT THE FOLLOWING PATTERN:(NESTED LOOPS WITHOUT ARRAYS/STRINGS)
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}