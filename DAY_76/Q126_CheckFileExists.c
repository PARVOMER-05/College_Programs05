/*
Q126 (FILE HANDLING)
ASK THE USER FOR A FILENAME. CHECK IF IT EXISTS BY TRYING TO OPEN IT IN READ MODE. IF THE FILE
POINTER IS NULL, PRINT AN ERROR MESSAGE; OTHERWISE, READ AND DISPLAY ITS CONTENT.
*/

#include <stdio.h>

int main() {
    char filename[100];
    scanf("%99s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    printf("\n");

    fclose(fp);

    return 0;
}