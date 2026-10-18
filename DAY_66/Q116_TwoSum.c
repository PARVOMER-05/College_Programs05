/*
Q116 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE AN INTEGER ARRAY NUMS WHICH CONTAINS ONLY POSITIVE INTEGERS, AND AN
INTEGER TARGET AS INPUTS. THE GOAL IS TO FIND TWO DISTINCT INDICES I AND J IN THE ARRAY SUCH
THAT NUMS[I] + NUMS[J] EQUALS THE TARGET. ASSUME EXACTLY ONE SOLUTION EXISTS AND RETURN THE
INDICES IN ANY ORDER. PRINT THE TWO INDICES SEPARATED BY A SPACE AS OUTPUT. IF NO SOLUTION
EXISTS, PRINT "-1 -1".
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");

    return 0;
}