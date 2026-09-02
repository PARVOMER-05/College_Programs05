//PROGRAM NO = 44 WRITE A PROGRAM TO FIND THE SUM OF THE SERIES 1 + 3/4 + 5/9 + 7/8 + ... UP TO N NUMBER.
#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        sum += numerator / denominator;
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}