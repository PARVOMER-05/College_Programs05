//PROGRAM NO 6 = WRITE A PROGRAM TO SWAP TWO NUMBERS USING A THIRD VARIABLE 
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}