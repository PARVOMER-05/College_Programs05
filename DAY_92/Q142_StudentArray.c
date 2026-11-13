/*
Q142 (ENUM)
STORE DETAILS OF 5 STUDENTS IN AN ARRAY OF STRUCTURES AND PRINT ALL.
*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        scanf("%99s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (int i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10d\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}