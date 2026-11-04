/*
Q133 (ENUM)
CREATE AN ENUM FOR MONTHS AND PRINT HOW MANY DAYS EACH MONTH HAS.
*/

#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    char input[20];
    scanf("%19s", input);

    char *names[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
                     "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

    int found = -1;
    for (int i = 0; i < 12; i++) {
        if (strcmp(input, names[i]) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Invalid input\n");
        return 1;
    }

    enum Month m = (enum Month)found;

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
    }

    return 0;
}