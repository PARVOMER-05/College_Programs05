/*
Q130 (FILE HANDLING)
STORE MULTIPLE STUDENT RECORDS (NAME, ROLL NUMBER, MARKS) INTO A FILE USING FPRINTF(). THEN READ
THEM USING FSCANF() AND DISPLAY EACH RECORD.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: could not create students.txt\n");
        return 1;
    }

    // write records to the file
    for (int i = 0; i < n; i++) {
        char name[100];
        int roll, marks;
        scanf("%99s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    // read records back from the file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open students.txt\n");
        return 1;
    }

    char name[100];
    int roll, marks;
    while (fscanf(fp, "%99s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);

    return 0;
}