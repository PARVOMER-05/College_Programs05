//PROGRAM NO = 98 PRINT INITIALS OF A NAME WITH THE SURNAME DISPLAYED THE FULL.
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') len++;

    // find start indices of each word
    int wordStart[100];
    int wordCount = 0;
    int i = 0;

    while (i < len) {
        while (i < len && str[i] == ' ') i++;
        if (i < len) {
            wordStart[wordCount++] = i;
            while (i < len && str[i] != ' ') i++;
        }
    }

    for (int w = 0; w < wordCount - 1; w++) {
        printf("%c.", str[wordStart[w]]);
    }

    // print last word in full
    int lastStart = wordStart[wordCount - 1];
    for (int j = lastStart; j < len && str[j] != ' '; j++) {
        printf("%c", str[j]);
    }
    printf("\n");

    return 0;
}