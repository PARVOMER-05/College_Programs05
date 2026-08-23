// PROGRAM NO 9 = WRITE A PROGRAM TO CALCULATE SIMPLE INTEREST FOR GIVEN PRINCIPLE,RATE,AND TIME.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci;

    printf("Enter principal: ");
    scanf("%f", &principal);
    printf("Enter rate (%%): ");
    scanf("%f", &rate);
    printf("Enter time (years): ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;
    ci = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
