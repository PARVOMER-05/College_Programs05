 // PROGRAM NO 2 = WRITE A PROGRAM TO INPUT TWO NUMBERS AND DISPLAY THEIR SUM , DIFFERENCE , PRODUCT AND QUOTIENT 
 #include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b != 0) {
        printf("Quotient = %.2f\n", (float)a / b);
    } else {
        printf("Quotient = Undefined (division by zero)\n");
    }

    return 0;
}