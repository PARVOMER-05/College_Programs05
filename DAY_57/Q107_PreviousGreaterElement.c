/*
Q107 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE AN ARRAY ARR[] OF INTEGERS AS INPUT, THE TASK IS TO FIND THE
PREVIOUS GREATER ELEMENT FOR EACH ELEMENT OF THE ARRAY IN ORDER OF THEIR APPEARANCE IN THE
ARRAY. PREVIOUS GREATER ELEMENT OF AN ELEMENT IN THE ARRAY IS THE NEAREST ELEMENT ON THE LEFT
WHICH IS GREATER THAN THE CURRENT ELEMENT. IF THERE DOES NOT EXIST NEXT GREATER OF CURRENT
ELEMENT, THEN PREVIOUS GREATER ELEMENT FOR CURRENT ELEMENT IS -1.

N.B:
- PRINT THE OUTPUT FOR EACH ELEMENT IN A COMMA SEPARATED FASHION.
- DO NOT USE STACK, USE BRUTE FORCE APPROACH (NESTED LOOP) TO SOLVE.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        if (i > 0) printf(", ");
        printf("%d", prev);
    }
    printf("\n");

    return 0;
}