/*
Q123 (FILE HANDLING)
READ A TEXT FILE AND COUNT THE TOTAL NUMBER OF CHARACTERS, WORDS, AND LINES. A WORD IS DEFINED
AS A SEQUENCE OF NON-SPACE CHARACTERS SEPARATED BY SPACES OR NEWLINES.
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open sample.txt\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    int inWord = 0;
    int ch;
    int lastCh = '\n';

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }

        lastCh = ch;
    }

    // last line has no newline at the end, but it still counts as a line
    if (chars > 0 && lastCh != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}