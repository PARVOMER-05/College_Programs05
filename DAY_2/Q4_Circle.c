//PROGRAM NO 4 = WRITE A PROGRAM TO CALCULATE THE AREA AND CIRCUMFERENCE OF A CIRCLE GIVEN ITS RADIUS.
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
