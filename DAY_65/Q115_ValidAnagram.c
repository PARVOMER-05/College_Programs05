/*
Q115 (LOGIC ENHANCERS)
WRITE A PROGRAM TO TAKE TWO STRINGS S AND T AS INPUTS (ASSUME ALL CHARACTERS ARE LOWERCASE).
THE TASK IS TO DETERMINE IF S AND T ARE VALID ANAGRAMS, MEANING THEY CONTAIN THE SAME
CHARACTERS WITH THE SAME FREQUENCIES. PRINT "ANAGRAM" IF THEY ARE, OTHERWISE "NOT ANAGRAM".
*/

#include <stdio.h>

int main() {
    char s[1000], t[1000];
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int count[26] = {0};

    int i = 0;
    while (s[i] != '\0' && s[i] != '\n' && s[i] != '\r') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            count[s[i] - 'a']++;
        }
        i++;
    }

    int j = 0;
    while (t[j] != '\0' && t[j] != '\n' && t[j] != '\r') {
        if (t[j] >= 'a' && t[j] <= 'z') {
            count[t[j] - 'a']--;
        }
        j++;
    }

    int isAnagram = (i == j);
    for (int k = 0; k < 26; k++) {
        if (count[k] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}