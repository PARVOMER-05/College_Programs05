//PROGRAM NO = 89 COUNT FREQUENCY OF A GIVEN CHARACTER IN A STRING.
#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    char target;
    scanf("%c", &target);

    int count = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}