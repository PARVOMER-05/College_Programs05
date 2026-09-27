//PROGRAM NO = 97 PRINT THE INITIALS OF A NAME.
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') len++;

    int newWord = 1;
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            if (newWord) {
                printf("%c.", str[i]);
                newWord = 0;
            }
        } else {
            newWord = 1;
        }
    }
    printf("\n");

    return 0;
}