//WRITE A PROGRAM TO PRINT THE FOLLOWING PATTERN:
//5
//45
//345
//2345
//12345
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        int start = rows - i + 1;
        for (int j = start; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}