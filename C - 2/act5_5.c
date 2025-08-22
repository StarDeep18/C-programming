//CH.SC.U4CSE24015
#include <stdio.h>
int countOccurrences(int a[], int n, int num) {
    int i, count=0;
    for(i=0; i<n; i++) {
        if(a[i]==num)
            count++;
    }
    return count;
}
int main() {
    int arr[50], n, num, i, count;
    printf("How many numbers : ");
    scanf("%d", &n);
    printf("Enter %d numbers : \n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter number to count : ");
    scanf("%d", &num);
    count = countOccurrences(arr, n, num);
    printf("%d occurs %d times\n", num, count);
    return 1;
}
