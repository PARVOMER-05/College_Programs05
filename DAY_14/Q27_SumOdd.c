//PROGRAM NO = 27 WRITE A PROGRAM TO PRINT THE SUM OF THE N ODD NUMBERS.
#include <stdio.h>

int main() {
    int n, sum = 0, count = 0, num = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while (count < n) {
        sum += num;
        num += 2;
        count++;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}