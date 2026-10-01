/*
Q101 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE A SORTED ARRAY (SAY NUMS[]) AND AN INTEGER (SAY TARGET) AS INPUTS.
THE ELEMENTS IN THE SORTED ARRAY MIGHT BE REPEATED. YOU NEED TO PRINT THE FIRST AND LAST
OCCURRENCE OF THE TARGET AND PRINT THE INDEX OF FIRST AND LAST OCCURRENCE.
PRINT -1, -1 IF THE TARGET IS NOT PRESENT.

SAMPLE TEST CASES:
INPUT 1: NUMS = [5,7,7,8,8,10], TARGET = 8
OUTPUT 1: 3,4

INPUT 2: NUMS = [5,7,7,8,8,10], TARGET = 6
OUTPUT 2: -1,-1

INPUT 3: NUMS = [5,7,7,8,8,10], TARGET = 10
OUTPUT 3: 5,5

FOLLOW-UP (OPTIONAL): CAN YOU DO IT IN O(LOG N) TIME COMPLEXITY?
*/

#include <stdio.h>

int findFirst(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int findLast(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    scanf("%d", &target);

    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    printf("%d,%d\n", first, last);

    return 0;
}