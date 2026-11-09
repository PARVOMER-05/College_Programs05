/*
Q138 (ENUM)
PRINT ALL ENUM NAMES AND INTEGER VALUES USING A LOOP.
*/

#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}