/*
Q146 (ENUM)
CREATE EMPLOYEE STRUCTURE WITH NESTED DATE STRUCTURE FOR JOINING DATE AND PRINT DETAILS.
*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e;

    scanf("%99s %d %d %d %d", e.name, &e.id,
          &e.joining.day, &e.joining.month, &e.joining.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           e.name, e.id, e.joining.day, e.joining.month, e.joining.year);

    return 0;
}