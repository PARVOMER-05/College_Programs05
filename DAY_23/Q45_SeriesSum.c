//PROGRAM NO = 45 WRITE A PROGRAM TO FIND THE SUM OF THE SERIES: 2/3 + 4/7 + 6/11 + 8/15 + ... UP TO N TERMS.
#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    float numerator = 2, denominator = 3;

    for (int i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}