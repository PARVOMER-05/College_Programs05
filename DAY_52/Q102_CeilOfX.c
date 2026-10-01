/*
Q102 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE A SORTED ARRAY ARR[] AND AN INTEGER X AS INPUT, FIND THE INDEX
(0-BASED) OF THE SMALLEST ELEMENT IN ARR[] THAT IS GREATER THAN OR EQUAL TO X AND PRINT IT.
THIS ELEMENT IS CALLED THE CEIL OF X. IF SUCH AN ELEMENT DOES NOT EXIST, PRINT -1.
NOTE: IN CASE OF MULTIPLE OCCURRENCES OF CEIL OF X, RETURN THE INDEX OF THE FIRST OCCURRENCE.

SAMPLE TEST CASES:
INPUT 1: ARR = [1,2,8,10,11,12,19], X = 5
OUTPUT 1: 2
EXPLANATION: SMALLEST NUMBER GREATER THAN 5 IS 8, WHOSE INDEX IS 2

INPUT 2: ARR = [1,2,8,10,11,12,19], X = 20
OUTPUT 2: -1
EXPLANATION: NO ELEMENT GREATER THAN 20 IS FOUND. SO OUTPUT IS -1

INPUT 3: ARR = [1,1,2,8,10,11,12,19], X = 0
OUTPUT 3: 0
EXPLANATION: SMALLEST NUMBER GREATER THAN 0 IS 1, WHOSE INDICES ARE 0 AND 1; RETURN FIRST

INPUT 4: ARR = [1,1,2,8,10,11,12,19], X = 2
OUTPUT 4: 2
EXPLANATION: IF X IS DIRECTLY PRESENT, RETURN THE INDEX OF ITS FIRST OCCURRENCE

FOLLOW-UP (OPTIONAL): CAN YOU DO IT IN O(LOG N) TIME COMPLEXITY?
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            result = mid;
            high = mid - 1; // keep searching left for first occurrence
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", result);

    return 0;
}