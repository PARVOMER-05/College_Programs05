/*
Q112 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE AN INTEGER ARRAY ARR AS INPUT. THE TASK IS TO FIND THE MAXIMUM SUM OF
ANY CONTIGUOUS SUBARRAY USING KADANE'S ALGORITHM. PRINT THE MAXIMUM SUM AS OUTPUT. IF ALL
ELEMENTS ARE NEGATIVE, PRINT THE LARGEST (LEAST NEGATIVE) ELEMENT.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        if (currentSum + arr[i] > arr[i]) {
            currentSum = currentSum + arr[i];
        } else {
            currentSum = arr[i];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}