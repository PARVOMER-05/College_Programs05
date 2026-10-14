/*
Q111 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE AN INTEGER ARRAY ARR AND AN INTEGER K AS INPUTS. THE TASK IS TO FIND THE
FIRST NEGATIVE INTEGER IN EACH SUBARRAY OF SIZE K MOVING FROM LEFT TO RIGHT. IF NO NEGATIVE
EXISTS IN A WINDOW, PRINT "0" FOR THAT WINDOW. PRINT THE RESULTS SEPARATED BY SPACES AS OUTPUT.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;
            }
        }
        if (i > 0) printf(" ");
        printf("%d", firstNeg);
    }
    printf("\n");

    return 0;
}