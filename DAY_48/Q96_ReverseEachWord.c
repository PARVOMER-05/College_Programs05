//PROGRAM NO = 96 REVERSE EACH WORD IN A SENTENCE WITHOUT CHANGING THE WORD ORDER.
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;

    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || i == len) {
            for (int j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }
            if (i != len) printf(" ");
            start = i + 1;
        }
    }
    printf("\n");

    return 0;
}