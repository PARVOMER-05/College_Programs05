//PROGRAM NO = 93 CHECK IF TWO STRINGS ARE ANAGRAMS OF EACH OTHER.
#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int count[26] = {0};

    int i = 0;
    while (str1[i] != '\0' && str1[i] != '\n') {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            count[str1[i] - 'a']++;
        }
        i++;
    }

    i = 0;
    while (str2[i] != '\0' && str2[i] != '\n') {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            count[str2[i] - 'a']--;
        }
        i++;
    }

    int isAnagram = 1;
    for (int j = 0; j < 26; j++) {
        if (count[j] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}