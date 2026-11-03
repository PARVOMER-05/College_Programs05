/*
Q132 (ENUM)
DEFINE AN ENUM FOR TRAFFIC LIGHTS (RED, YELLOW, GREEN) AND PRINT 'STOP', 'WAIT', OR 'GO' BASED
ON ITS VALUE.
*/

#include <stdio.h>
#include <string.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    char input[20];
    scanf("%19s", input);

    enum Light light;
    if (strcmp(input, "RED") == 0) {
        light = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
    } else {
        printf("Invalid input\n");
        return 1;
    }

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}