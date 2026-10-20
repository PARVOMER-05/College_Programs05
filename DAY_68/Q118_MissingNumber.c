/*
Q118 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE AN INPUT ARRAY OF SIZE N. THE ARRAY SHOULD CONTAIN ALL THE INTEGERS
BETWEEN 0 TO N EXCEPT FOR ONE. PRINT THAT MISSING NUMBER
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        actualSum += nums[i];
    }

    int expectedSum = n * (n + 1) / 2;

    printf("%d\n", expectedSum - actualSum);

    return 0;
}