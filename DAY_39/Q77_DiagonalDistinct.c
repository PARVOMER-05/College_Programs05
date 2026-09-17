//PROGRAM NO = 77 CHECK IF THE ELEMENTS ON THE DIAGONAL OF A MATRIX ARE DISTINCT.
#include <stdio.h>

int main() {
    int n;
    scanf("%d %d", &n, &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isDistinct = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
            }
        }
    }

    if (isDistinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}