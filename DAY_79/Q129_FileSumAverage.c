/*
Q129 (FILE HANDLING)
A FILE NUMBERS.TXT CONTAINS A LIST OF INTEGERS SEPARATED BY SPACES. READ ALL INTEGERS, COMPUTE
THEIR SUM AND AVERAGE, AND PRINT BOTH.
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open numbers.txt\n");
        return 1;
    }

    int num, sum = 0, count = 0;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in file\n");
        return 0;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);

    return 0;
}