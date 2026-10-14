/*
Q110 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE AN INTEGER ARRAY ARR AND AN INTEGER K AS INPUTS. THE TASK IS TO FIND THE
MAXIMUM ELEMENT IN EACH SUBARRAY OF SIZE K MOVING FROM LEFT TO RIGHT. PRINT THE MAXIMUM
ELEMENTS FOR EACH WINDOW SEPARATED BY SPACES AS OUTPUT.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        if (i > 0) printf(" ");
        printf("%d", max);
    }
    printf("\n");

    return 0;
}