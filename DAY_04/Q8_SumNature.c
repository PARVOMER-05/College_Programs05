// PROGRAM NO 8 = WRITE A PROGRAM TO FIND AND DISPLAY THE SUM OF THE FIRST N NATURAL NUMBERS.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}