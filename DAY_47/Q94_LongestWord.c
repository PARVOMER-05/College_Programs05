//PROGRAM NO = 94 FIND THE LONGEST WORD IN A SENTENCE.
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int wordStart = 0;
    int maxLen = 0, maxStart = 0;
    int currLen = 0;

    while (1) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (currLen == 0) wordStart = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = wordStart;
            }
            currLen = 0;
        }

        if (str[i] == '\0' || str[i] == '\n') break;
        i++;
    }

    for (int j = maxStart; j < maxStart + maxLen; j++) {
        printf("%c", str[j]);
    }
    printf("\n");

    return 0;
}