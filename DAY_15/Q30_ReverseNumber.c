//PROGRAM NO = 30 WRITE A PROGRAM TO REVERSE A GIVEN NUMBER.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;
    if (num < 0) num = -num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original < 0) reversed = -reversed;

    printf("Reversed number = %d\n", reversed);

    return 0;
}