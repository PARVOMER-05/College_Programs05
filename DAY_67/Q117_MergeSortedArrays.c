/*
Q117 ( LOGIC ENHANCERS )
WRITE A PROGRAM TO TAKE TWO SORTED ARRAYS OF SIZE M AND N AS INPUT. MERGE BOTH THE ARRAYS SUCH
THAT THE MERGED ARRAY IS ALSO SORTED. PRINT THE MERGED ARRAY.
*/

#include <stdio.h>

int main() {
    int m, n;

    scanf("%d", &m);
    int nums1[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    scanf("%d", &n);
    int nums2[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    while (i < m) merged[k++] = nums1[i++];
    while (j < n) merged[k++] = nums2[j++];

    for (int x = 0; x < m + n; x++) {
        if (x > 0) printf(" ");
        printf("%d", merged[x]);
    }
    printf("\n");

    return 0;
}