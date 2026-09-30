//PROGRAM NO = 99  CHANGE THE DATA FORMAT FORM DD/04/YYYY TO DD-APR-YYYY.
#include <stdio.h>

int main() {
    int day, month, year;
    scanf("%d/%d/%d", &day, &month, &year);

    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                       "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("%02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}