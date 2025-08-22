//CH.SC.U4CSE25015
#include <stdio.h>
int main() {
    int att, i;
    float math[att], science[att], english[att], average[att], avg = 0;
    int max_index = 0;
    printf("Enter the number of students: ");
    scanf("%d", &att);
    for(i = 0; i < att; i++) {
        printf("Enter the math mark for student %d: ", i+1);
        scanf("%f", &math[i]);
        printf("Enter the science mark for student %d: ", i+1);
        scanf("%f", &science[i]);
        printf("Enter the english mark for student %d: ", i+1);
        scanf("%f", &english[i]);
        average[i] = (math[i] + science[i] + english[i]) / 3;
        if(average[i] > avg) {
            avg = average[i];
            max_index = i;
        }
    }
    printf("\n Averages of each student : \n");
    for(i = 0; i < att; i++) {
        printf("Student %d: %.2f\n", i+1, average[i]);
    }
    printf("\n Highest Average : \nStudent %d with %.2f\n", max_index + 1,avg);
    return 0;
}
