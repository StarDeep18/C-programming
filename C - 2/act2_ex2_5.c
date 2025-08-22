//CH.SC.U4CSE2015
#include <stdio.h>
int main() {
    float PI = 3.14;
    int choice;
    float radius, area, circumference, volume;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }
    printf("\nOptions:\n");
    printf("1. Area of Circle\n");
    printf("2. Circumference of Circle\n");
    printf("3. Volume of Sphere\n");
    printf("\nEnter your choice (1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            area = PI * radius * radius;
            printf("Area of Circle: %.2f\n", area);
            break;
        case 2:
            circumference = 2 * PI * radius;
            printf("Circumference of Circle: %.2f\n", circumference);
            break;
        case 3:
            volume = (4.0/3.0) * PI * radius * radius * radius;
            printf("Volume of Sphere: %.2f\n", volume);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
