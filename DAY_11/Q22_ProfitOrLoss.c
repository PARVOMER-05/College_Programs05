//PROGRAM NO 22 = WRITE A PROGRAM TO FIND PROFIT OR LOSS PERCENTAGE GIVEN COST PRICE AND SELLING PRICE.
#include <stdio.h>

int main() {
    float cp, sp, p;

    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        p = (sp - cp) / cp * 100;
        printf("Profit = %.2f%%", p);
    }
    else if (cp > sp) {
        p = (cp - sp) / cp * 100;
        printf("Loss = %.2f%%", p);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}