//PROGRAM NO = 83 COUNT VOWELS AND CONSONANTS IN A STRING.
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int vowels = 0, consonants = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}