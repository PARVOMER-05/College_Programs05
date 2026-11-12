/*
Q141 (ENUM)
DEFINE A STRUCTURE STUDENT WITH NAME, ROLL_NO, AND MARKS, THEN READ AND PRINT ONE STUDENT'S
DATA.
*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    scanf("%99s", s.name);
    scanf("%d", &s.roll_no);
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}