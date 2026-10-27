/*
Q125 (FILE HANDLING)
OPEN AN EXISTING FILE IN APPEND MODE AND ALLOW THE USER TO ENTER A NEW LINE OF TEXT. APPEND THE
TEXT AT THE END WITHOUT OVERWRITING EXISTING CONTENT.
*/

#include <stdio.h>

int main() {
    char text[1000];
    fgets(text, sizeof(text), stdin);

    int len = 0;
    while (text[len] != '\0' && text[len] != '\n' && text[len] != '\r') len++;
    text[len] = '\0';

    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error: could not open data.txt\n");
        return 1;
    }

    fprintf(fp, "\n%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}