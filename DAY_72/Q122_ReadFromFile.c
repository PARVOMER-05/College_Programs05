/*
Q122 (FILE HANDLING)
WRITE A C PROGRAM THAT OPENS AN EXISTING FILE (E.G., INFO.TXT) AND READS ITS CONTENTS USING
FGETS(). THE PROGRAM SHOULD PRINT ALL THE LINES TO THE CONSOLE UNTIL EOF (END OF FILE) IS
REACHED.
*/

#include <stdio.h>

int main() {
    char line[1000];

    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open info.txt\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}