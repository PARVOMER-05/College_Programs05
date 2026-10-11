/*
Q108 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE AN INTEGER ARRAY NUMS. PRINT AN ARRAY ANSWER SUCH THAT ANSWER[I] IS
EQUAL TO THE PRODUCT OF ALL THE ELEMENTS OF NUMS EXCEPT NUMS[I]. THE PRODUCT OF ANY PREFIX OR
SUFFIX OF NUMS IS GUARANTEED TO FIT IN A 32-BIT INTEGER.

FOLLOW-UP (OPTIONAL): CAN YOU WRITE A CODE THAT RUNS IN O(N) TIME AND WITHOUT USING THE
DIVISION OPERATION.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n], answer[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // answer[i] = product of all elements to the left of i
    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // multiply by product of all elements to the right of i
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * right;
        right = right * nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(",");
        printf("%d", answer[i]);
    }
    printf("]\n");

    return 0;
}