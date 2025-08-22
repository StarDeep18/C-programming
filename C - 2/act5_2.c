//CH.SC.U4CSE24015
#include <stdio.h>
void accept(int a[20], int n);
void display(int a[20], int n);
float average(int a[20], int n);
int main() {
    int arr[20], n;
    float avg;
    printf("How many numbers: ");
    scanf("%d", &n);
    accept(arr, n);
    display(arr, n);
    avg = average(arr, n);
    printf("\nThe average is: %.2f\n", avg);
    return 1;
}
void accept(int a[20], int n) {
    int i;
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
void display(int a[20], int n) {
    int i;
    printf("Array elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
float average(int a[20], int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += a[i];
    }
    return (float)sum / n;
}
