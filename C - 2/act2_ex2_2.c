//CH.SC.U4CSE24015
#include <stdio.h>
int main() {
    int num1, num2;
    char op;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    switch(op) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %d\n", num1 / num2);
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
