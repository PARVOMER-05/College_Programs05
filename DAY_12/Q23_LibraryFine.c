//PROGRAM NO 23 = WRITE A PROGRAM TO CALCULATE LIBRARY FINE BASED ON LATE DAYS AS FOLLOWS:
#include <stdio.h>

int main() {
    int lateDays;
    float fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 5) {
        fine = lateDays * 2;
    } else if (lateDays <= 10) {
        fine = 5 * 2 + (lateDays - 5) * 4;
    } else if (lateDays <= 30) {
        fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6;
    } else {
        printf("Membership Cancelled\n");
        return 0;
    }

    printf("Fine = Rs. %.2f\n", fine);

    return 0;
}