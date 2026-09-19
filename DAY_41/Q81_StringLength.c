//PROGRAM NO = 81 COUNT CHARACTER IN A STRING WITHOUT USING BUILT-IN LENGTH FUNCTION.
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int count = 0;
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        count++;
        i++;
    }

    printf("%d\n", count);

    return 0;
}