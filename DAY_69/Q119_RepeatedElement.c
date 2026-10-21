/*
Q119 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE AN INTEGER ARRAY AS INPUT. ONLY ONE ELEMENT WILL BE REPEATED. PRINT
THE REPEATED ELEMENT. TRY TO FIND THE RESULT IN ONE SINGLE ITERATION.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int seen[1001] = {0};
    int repeated = -1;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (repeated == -1) {
            if (seen[x]) {
                repeated = x;
            } else {
                seen[x] = 1;
            }
        }
    }

    printf("%d\n", repeated);

    return 0;
}