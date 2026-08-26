//PROGRAM NO 33 = WRITE A PROGRAM TO CHECK IF AN ARMSTRONG NUMBER.
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // count digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if (result == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}