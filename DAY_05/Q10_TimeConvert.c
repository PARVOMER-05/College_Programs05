// PROGRAM NO 10 = WRITE A PROGRAM TO INPUT TIME IN SECONDS AND CONVERT IT TO HOURS:MINUTES:SECONDS FORMAT.
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}