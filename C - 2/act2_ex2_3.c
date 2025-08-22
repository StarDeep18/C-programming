//CH.SC.U4CSE24015
#include <stdio.h>
int main() {
    int x, y, choice, num;
    printf("Enter first number (x): ");
    scanf("%d", &x);
    printf("Enter second number (y): ");
    scanf("%d", &y);
    printf("\nOptions:\n");
    printf("1. Equality - Check if x is equal to y\n");
    printf("2. Less Than - Check if x is less than y\n");
    printf("3. Quotient and Remainder - Divide x by y\n");
    printf("4. Range - Check if a number lies between x and y\n");
    printf("5. Swap - Interchange x and y\n");
    printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            if (x == y) {
                printf("x is equal to y.\n");
            } else {
                printf("x is not equal to y.\n");
            }
            break;
        case 2:
            if (x < y) {
                printf("x is less than y.\n");
            } else {
                printf("x is not less than y.\n");
            }
            break;
        case 3:
            if (y == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Quotient: %d\n", x / y);
                printf("Remainder: %d\n", x % y);
            }
            break;
        case 4:
            printf("Enter the number to check range: ");
            scanf("%d", &num);
            if ((num >= x && num <= y) || (num >= y && num <= x)) {
                printf("%d lies between %d and %d (inclusive).\n", num, x, y);
            } else {
                printf("%d does not lie between %d and %d.\n", num, x, y);
            }
            break;
        case 5: {
            int temp = x;
            x = y;
            y = temp;
            printf("After swapping: x = %d, y = %d\n", x, y);
            break;
        }
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
