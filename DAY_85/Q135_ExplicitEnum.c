/*
Q135 (ENUM
ASSIGN EXPLICIT VALUES STARTING FROM 10 AND PRINT THEM.
*/

#include <stdio.h>

enum Value { A = 10, B, C };

int main() {
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}