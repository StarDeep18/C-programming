//CH.SC.U4CSE24015
#include <stdio.h>
void accept(int a[20], int n);
void display(int a[20], int n);
int maximum(int a[20], int n);
int minimum(int a[20], int n);
int main() {
    int arr[20];
    int n, max, min, range;
    printf("How many numbers: ");
    scanf("%d", &n);
    accept(arr, n);
    display(arr, n);
    max = maximum(arr, n);
    min = minimum(arr, n);
    range = max - min;
    printf("\nThe maximum is: %d", max);
    printf("\nThe minimum is: %d", min);
    printf("\nThe range is: %d\n", range);
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
int maximum(int a[20], int n) {
    int i, max = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}
int minimum(int a[20], int n) {
    int i, min = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] < min)
            min = a[i];
    }
    return min;
}
