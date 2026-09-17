//PROGRAM NO = 76 CHECK IF A MATRIX IS SYMMETRI.
#include <stdio.h>

int main() {
    int n;
    scanf("%d %d", &n, &n); // rows and cols are equal for symmetric check

    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSymmetric = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
            }
        }
    }

    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}