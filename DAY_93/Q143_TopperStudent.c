/*
Q143 (ENUM)
FIND AND PRINT THE STUDENT WITH THE HIGHEST MARKS.
*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];
    for (int i = 0; i < n; i++) {
        scanf("%99s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    int top = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[top].name, s[top].marks);

    return 0;
}