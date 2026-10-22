/*
Q120 (FILE HANDLING)
WRITE A PROGRAM TO TAKE A STRING INPUT. CHANGE IT TO SENTENCE CASE.
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int newWord = 1;

    while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r') {
        char ch = str[i];

        if (ch == ' ') {
            newWord = 1;
        } else if (newWord) {
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 'a' + 'A';
            }
            newWord = 0;
        } else {
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch - 'A' + 'a';
            }
        }

        printf("%c", ch);
        i++;
    }
    printf("\n");

    return 0;
}