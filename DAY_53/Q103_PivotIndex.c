/*
Q103 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE AN ARRAY OF INTEGERS AS INPUT, CALCULATE THE PIVOT INDEX OF THIS ARRAY.
THE PIVOT INDEX IS THE INDEX WHERE THE SUM OF ALL THE NUMBERS STRICTLY TO THE LEFT OF THE
INDEX IS EQUAL TO THE SUM OF ALL THE NUMBERS STRICTLY TO THE INDEX'S RIGHT. IF THE INDEX IS
ON THE LEFT EDGE OF THE ARRAY, THEN THE LEFT SUM IS 0 BECAUSE THERE ARE NO ELEMENTS TO THE
LEFT. THIS ALSO APPLIES TO THE RIGHT EDGE OF THE ARRAY. PRINT THE LEFTMOST PIVOT INDEX.
IF NO SUCH INDEX EXISTS, PRINT -1.

SAMPLE TEST CASES:
INPUT 1: NUMS = [1,7,3,6,5,6]
OUTPUT 1: 3
EXPLANATION: PIVOT INDEX IS 3. LEFT SUM = 1+7+3 = 11, RIGHT SUM = 5+6 = 11

INPUT 2: NUMS = [1,2,3]
OUTPUT 2: -1
EXPLANATION: NO INDEX SATISFIES THE CONDITIONS

INPUT 3: NUMS = [2,1,-1]
OUTPUT 3: 0
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    int leftSum = 0;
    int pivot = -1;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            pivot = i;
            break;
        }
        leftSum += nums[i];
    }

    printf("%d\n", pivot);

    return 0;
}