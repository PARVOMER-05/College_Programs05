//PROGRAM NO 41 = WRITE A PROGRAM TO SWAP THE FIRST AND LAST DIGIT OF A NUMBER.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    if (temp < 0) temp = -temp;

    // count digits
    int count = temp;
    while (count != 0) {
        digits++;
        count /= 10;
    }

    lastDigit = temp % 10;
    firstDigit = temp / (int)pow(10, digits - 1);

    // remove old first and last digit, insert swapped ones
    int middle = (temp % (int)pow(10, digits - 1)) / 10;
    int result = firstDigit;
    int middleDigits = digits - 2;

    result = lastDigit;
    result = result * (int)pow(10, digits - 1) + middle * 10 + firstDigit;

    if (num < 0) result = -result;

    printf("After swapping first and last digit: %d\n", result);

    return 0;
}