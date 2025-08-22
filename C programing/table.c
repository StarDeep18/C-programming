// ch.sc.u4cse24015
// Calculate average marks and determine class
#include <stdio.h>

int main() {
    float m1, m2, m3, avg;
    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3;
    printf("Average = %.2f\n", avg);

    if (avg >= 75)
        printf("Class: Distinction\n");
    else if (avg >= 60)
        printf("Class: First Class\n");
    else if (avg >= 50)
        printf("Class: Second Class\n");
    else if (avg >= 40)
        printf("Class: Pass Class\n");
    else
        printf("Class: Fail\n");

    return 0;
}

