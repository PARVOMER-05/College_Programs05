//PROGRAM NO 15 = WRITE A PROGRAM TO INPUT A CHARACTER AND CHECK WHETHER IT IS AN UPPERCASE ALPHABET , LOWERCASE ALPHABET , DIGIT , OR SPECIAL CHARACTER.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase Alphabet\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase Alphabet\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit\n", ch);
    } else {
        printf("%c is a Special Character\n", ch);
    }

    return 0;
}