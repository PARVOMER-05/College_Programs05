//PROGRAM NO = 37 WRITE A PROGRAM TO FIND THE LCM OF TWO NUMBERS.
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b, hcf;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;

    int lcm = (a * b) / hcf;

    printf("LCM of %d and %d = %d\n", a, b, lcm);

    return 0;
}