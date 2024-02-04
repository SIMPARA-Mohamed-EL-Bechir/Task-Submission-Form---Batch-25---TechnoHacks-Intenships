#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Give the first number: ");
    scanf("%lf", &num1);

    // Add a space before %c to consume any leading whitespace, including newline
    printf("Give the operation mark (+,-,*,/): ");
    scanf(" %c", &op);

    printf("Give the second number: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  // Return an error code
            }
            break;
        default:
            printf("Error: Operation mark invalid!!!\n");
            return 1;  // Return an error code
    }

    printf("%.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);

    return 0;
}
