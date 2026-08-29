//PROGRAM NO 40 = WRITE A PROGRAM TO FIND THE 1'S COMPLEMENT OF A BINARY NUMBER AND PRINT IT.
#include <stdio.h>

int main() {
    long long binary, complement = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary;
    while (temp != 0) {
        digit = temp % 10;

        if (digit == 0) {
            complement += 1 * place;
        } else {
            complement += 0 * place;
        }

        place *= 10;
        temp /= 10;
    }

    printf("1's Complement = %lld\n", complement);

    return 0;
}