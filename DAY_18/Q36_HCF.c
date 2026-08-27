//PROGRAM NO 36 = WRITE A PROGRAM TO FIND THE HCF (GCD) OF TWO NUMBER.
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    printf("HCF of %d and %d = %d\n", a, b, x);

    return 0;
}