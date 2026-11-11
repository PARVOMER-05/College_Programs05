/*
Q140 (ENUM)
DEFINE A STRUCT WITH ENUM GENDER AND PRINT PERSON'S GENDER.
*/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main() {
    char input[20];
    scanf("%19s", input);

    // accept both "MALE" and "Gender=MALE"
    char *value = input;
    char *eq = strchr(input, '=');
    if (eq != NULL) {
        value = eq + 1;
    }

    struct Person p;
    if (strcmp(value, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(value, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(value, "OTHER") == 0) {
        p.gender = OTHER;
    } else {
        printf("Invalid input\n");
        return 1;
    }

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}