#include <stdio.h>

int main() {

    //declare variables
    char operator;
    int num1, num2;

    // taking inputs fro user
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // Note the space before %c to consume whitespace

    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // task 

    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            // Check for division by zero
            if (num2 != 0) {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}