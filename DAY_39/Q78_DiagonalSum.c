//PROGRAM NO = 78 FIND THE SUM OF MAIN DIAGONAL ELEMENTS FOR A SQUARE MATRIX.
#include <stdio.h>

int main() {
    int n;
    scanf("%d %d", &n, &n);

    int matrix[n][n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}