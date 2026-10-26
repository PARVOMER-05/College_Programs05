/*
Q124 (FILE HANDLING)
TAKE TWO FILENAMES FROM THE USER - A SOURCE FILE AND A DESTINATION FILE. COPY ALL THE CONTENT
FROM THE SOURCE FILE TO THE DESTINATION FILE USING FGETC() AND FPUTC().
*/

#include <stdio.h>

int main() {
    char sourceName[100], destName[100];

    scanf("%99s", sourceName);
    scanf("%99s", destName);

    FILE *src = fopen(sourceName, "r");
    if (src == NULL) {
        printf("Error: could not open %s\n", sourceName);
        return 1;
    }

    FILE *dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error: could not create %s\n", destName);
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);

    return 0;
}