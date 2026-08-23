//PROGRAM NO 28 WRITE A PROGRAM TO PRINT THE PRODUCT OF EVEN NUMBERS FROM 1 TO N.
#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}