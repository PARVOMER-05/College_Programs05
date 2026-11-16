/*
Q145 (ENUM)
RETURN A STRUCTURE CONTAINING TOP STUDENT'S DETAILS FROM A FUNCTION.
*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

struct Student findTopper(struct Student s[], int n) {
    int top = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }
    return s[top];
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];
    for (int i = 0; i < n; i++) {
        scanf("%99s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    struct Student topper = findTopper(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll_no, topper.marks);

    return 0;
}