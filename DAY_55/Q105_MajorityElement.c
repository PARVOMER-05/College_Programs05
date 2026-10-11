/*
Q105 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE AN INTEGER ARRAY NUMS OF SIZE N, AND PRINT THE MAJORITY ELEMENT.
THE MAJORITY ELEMENT IS THE ELEMENT THAT APPEARS STRICTLY MORE THAN ⌊N / 2⌋ TIMES.
PRINT -1 IF NO SUCH ELEMENT EXISTS.
NOTE: MAJORITY ELEMENT IS NOT NECESSARILY THE ELEMENT THAT IS PRESENT MOST NUMBER OF TIMES.

FOLLOW-UP (OPTIONAL): CAN YOU DO IT IN O(N) TIME COMPLEXITY?
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: find a candidate (Boyer-Moore voting)
    int candidate = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: verify the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}