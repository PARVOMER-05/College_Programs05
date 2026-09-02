//WRITE A PROGRAM TO CHECK IF A NUMBER IF A NUMBER IS A STRONG NUMBER.
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        int fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num) {
        printf("%d is a Strong number\n", num);
    } else {
        printf("%d is not a Strong number\n", num);
    }

    return 0;
}