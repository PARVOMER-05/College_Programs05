//PROGRAM NO = 92 FIND THE FIRST REPEATING LOWERCASE ALPHABET IN A STRING.
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        if (str[i] < 'a' || str[i] > 'z') continue;

        for (int j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character\n");

    return 0;
}