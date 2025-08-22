//CH.SC.U4CSE24015
#include <stdio.h>
void bubbleSort(int a[], int n) {
    int i, j, temp;
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[50], n, i;
    printf("How many numbers : ");
    scanf("%d", &n);
    printf("Enter %d numbers : \n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr, n);
    printf("Sorted array : \n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 1;
}
