//PROGRAM NO = 25 WRITE A PROGRAM TO IMPLEMENT A BASIC CLACULATOR USING SWITCH-CASE FOR +, -, *, /, %.
#include <stdio.h>

int main() {
    float a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result = %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if ((int)b != 0) {
                printf("Result = %d\n", (int)a % (int)b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}