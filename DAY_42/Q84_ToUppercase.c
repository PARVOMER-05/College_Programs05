//PROGRAM NO = 84 CONVERT A LOWERCASE STRING TO UPPERCASE WITHOUT USING BUILD-IN FUNCTION.
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        printf("%c", str[i]);
        i++;
    }
    printf("\n");

    return 0;
}