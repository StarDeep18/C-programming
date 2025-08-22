//CH.SC.U4CSE24015
#include <stdio.h>
int isPrime(int num) {
    int i;
    if(num < 2)
        return 0;
    for(i=2; i <= num/2; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int arr[50], prime[50], n, i, p=0;
    printf("How many numbers : ");
    scanf("%d", &n);
    printf("Enter %d numbers : \n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n; i++) {
        if(isPrime(arr[i]))
            prime[p++] = arr[i];
    }
    printf("Prime numbers are : \n");
    for(i=0; i<p; i++)
        printf("%d ", prime[i]);
    return 1;
}
