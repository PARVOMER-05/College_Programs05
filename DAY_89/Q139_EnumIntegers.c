/*
Q139 (ENUM)
SHOW THAT ENUMS STORE INTEGERS BY PRINTING ASSIGNED VALUES.
*/

#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);

    return 0;
}