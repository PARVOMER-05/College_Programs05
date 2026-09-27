//PROGRAM N0 = 95 CHECK IF ONE STRING IS A ROTATION OF ANOTHER.
#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    char combined[2000];
    int k = 0;
    for (int i = 0; i < len1; i++) combined[k++] = str1[i];
    for (int i = 0; i < len1; i++) combined[k++] = str1[i];
    combined[k] = '\0';

    // check if str2 exists in combined
    int found = 0;
    for (int i = 0; i <= k - len2; i++) {
        int match = 1;
        for (int j = 0; j < len2; j++) {
            if (combined[i + j] != str2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}