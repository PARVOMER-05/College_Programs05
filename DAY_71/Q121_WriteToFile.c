/*
Q121 (FILE HANDLING)
WRITE A C PROGRAM THAT CREATES A TEXT FILE NAMED INFO.TXT IN WRITE MODE. THE PROGRAM SHOULD TAKE
THE USER'S NAME AND AGE AS INPUT, AND WRITE THEM TO THE FILE USING FPRINTF(). AFTER WRITING,
DISPLAY A MESSAGE CONFIRMING THAT THE DATA WAS SUCCESSFULLY SAVED.
*/

#include <stdio.h>

int main() {
    char name[100];
    int age;

    scanf("%99s", name);
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: could not create file\n");
        return 1;
    }

    fprintf(fp, "Name: %s Age: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}