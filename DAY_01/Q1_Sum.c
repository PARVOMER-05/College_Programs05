// PROGRAM NO 1 = WRITE A PROGRAM TO INPUT TWO NUMBERS AND PRINT THEIR SUM
#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum = %d\n", sum);

    return 0;
}