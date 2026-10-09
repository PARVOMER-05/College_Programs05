/*
Q104 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE A POSITIVE INTEGER N AS INPUT, AND FIND THE PIVOT INTEGER X SUCH THAT
THE SUM OF ALL ELEMENTS BETWEEN 1 AND X INCLUSIVELY EQUALS THE SUM OF ALL ELEMENTS BETWEEN X
AND N INCLUSIVELY. PRINT THE PIVOT INTEGER X. IF NO SUCH INTEGER EXISTS, PRINT -1.
ASSUME THAT IT IS GUARANTEED THAT THERE WILL BE AT MOST ONE PIVOT INTEGER FOR THE GIVEN INPUT.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;
    int x = (int)round(sqrt((double)totalSum));

    if (x * x == totalSum && x >= 1 && x <= n) {
        printf("%d\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}