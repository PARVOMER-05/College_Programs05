//PROGRAM NO 32 = WRITE A PRORAM TO CHECK IF A NUMBER IS A PALINDROME.
#include <stdio.h>
int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        printf("%d is a Palindrome\n", original);
    } else {
        printf("%d is not a Palindrome\n", original);
    }

    return 0;
}