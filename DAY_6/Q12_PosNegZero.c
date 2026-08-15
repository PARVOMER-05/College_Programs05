//PROGRAM NO 12 = WRITE A PROGRAM TO INPUT AN INTEGER AND CHECK WHETHER IT IS POSITIVE , NEGATIVE OR ZERO USING NESTED IF-ELSE.
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is Positive\n", num);
    } else {
        if (num < 0) {
            printf("%d is Negative\n", num);
        } else {
            printf("%d is Zero\n", num);
        }
    }

    return 0;
}