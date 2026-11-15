/*
Q144 (ENUM)
WRITE A FUNCTION THAT ACCEPTS A STRUCTURE AS PARAMETER AND PRINTS ITS MEMBERS.
*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student st;

    scanf("%99s %d %d", st.name, &st.roll_no, &st.marks);

    printStudent(st);

    return 0;
}