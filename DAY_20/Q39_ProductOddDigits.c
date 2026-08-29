//PROGRAM NO 39 = WRITE A PROGRAM TO FIND THE PRODUCT OF ODD DIGITS OF A NUMBER.
#include <stdio.h>

int main() {
    long long num;
    long long product = 1;
    int remainder, found = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    long long temp = num;
    if (temp < 0) temp = -temp;

    while (temp != 0) {
        remainder = temp % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            found = 1;
        }
        temp /= 10;
    }

    if (found) {
        printf("Product of odd digits = %lld\n", product);
    } else {
        printf("No odd digits found\n");
    }

    return 0;
}