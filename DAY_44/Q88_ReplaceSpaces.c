//PROGRAM NO = 88 REPLACE SPACES WITH HYPHENS IN A STRING.
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            printf("-");
        } else {
            printf("%c", str[i]);
        }
        i++;
    }
    printf("\n");

    return 0;
}