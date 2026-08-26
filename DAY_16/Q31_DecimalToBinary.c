//PROGRAM NO 31 = WRITE A PROGRAM TO TAKE A NUMBER AS INPUT AND PRINTS ITS EQUIVALENT BINARY NUMBER.
#include <stdio.h>

int main() {
    long long num, binary = 0;
    int remainder, place = 1;

    printf("Enter a number: ");
    scanf("%lld", &num);

    long long temp = num;
    while (temp != 0) {
        remainder = temp % 2;
        binary += remainder * place;
        place *= 10;
        temp /= 2;
    }

    printf("Binary representation of %lld = %lld\n", num, binary);

    return 0;
}