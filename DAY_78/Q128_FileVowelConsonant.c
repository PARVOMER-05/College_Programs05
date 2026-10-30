/*
Q128 (FILE HANDLING)
READ A TEXT FILE AND COUNT HOW MANY VOWELS AND CONSONANTS ARE IN THE FILE. IGNORE DIGITS AND
SPECIAL CHARACTERS.
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open text.txt\n");
        return 1;
    }

    int vowels = 0, consonants = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}