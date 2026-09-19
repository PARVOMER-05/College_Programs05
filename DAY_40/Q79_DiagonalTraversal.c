//PROGRAM NO = 40 PERFORM DIAGONAL TRAVERSAL OF A MATRIX.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            // moving up
            int r = (d < rows) ? d : rows - 1;
            int c = (d < rows) ? 0 : d - rows + 1;
            while (r >= 0 && c < cols) {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        } else {
            // moving down
            int c = (d < cols) ? d : cols - 1;
            int r = (d < cols) ? 0 : d - cols + 1;
            while (c >= 0 && r < rows) {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");

    return 0;
}