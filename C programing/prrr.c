//CH.SC.U4CSE24015
#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("\nCHOICES:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = (float)num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 1;
}

