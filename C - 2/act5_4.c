//CH.SC.U4CSE24015
#include <stdio.h>
int linearSearch(int a[], int n, int key) {
    int i;
    for(i=0; i<n; i++) {
        if(a[i]==key)
            return i;
    }
    return -1;
}
void accept(int a[], int n) {
    int i;
    printf("Enter %d elements : \n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}
int main() {
    int arr[50], n, key, pos;
    printf("How many numbers : ");
    scanf("%d", &n);
    accept(arr, n);
    printf("Enter the key to search : ");
    scanf("%d", &key);
    pos = linearSearch(arr, n, key);
    if(pos==-1)
        printf("Element not found.\n");
    else
        printf("Element found at position %d.\n", pos+1);
    return 0;
}
