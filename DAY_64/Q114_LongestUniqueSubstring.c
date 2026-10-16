/*
Q114 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE A STRING S AS INPUT. THE TASK IS TO FIND THE LENGTH OF THE LONGEST
SUBSTRING WITHOUT REPEATING CHARACTERS. PRINT THE LENGTH AS OUTPUT.
*/

#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int len = 0;
    while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') len++;

    int maxLen = 0;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            // check if s[j] already appeared in s[i..j-1]
            int repeated = 0;
            for (int k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    repeated = 1;
                    break;
                }
            }
            if (repeated) break;

            if (j - i + 1 > maxLen) {
                maxLen = j - i + 1;
            }
        }
    }

    printf("%d\n", maxLen);

    return 0;
}