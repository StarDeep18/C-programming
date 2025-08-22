//CH.SC.U4CSE24015
#include <stdio.h>
void accept(int a[], int n) {
    int i;
    printf("Enter %d elements : \n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}
void displayReverse(int a[], int n) {
    int i;
    printf("Array in reverse order : \n");
    for(i=n-1; i>=0; i--)
        printf("%d ", a[i]);
}
int main() {
    int arr[50], n;
    printf("How many numbers :  ");
    scanf("%d", &n);
    accept(arr, n);
    displayReverse(arr, n);
    return 1;
}
