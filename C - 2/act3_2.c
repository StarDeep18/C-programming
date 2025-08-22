//CH.SC.U4CSE24015
#include <stdio.h>
int main() {
    int i,n,prime=1;
    scanf("%d", &n);
    if(n == 1) {
        printf("Neither Prime nor Composite");
    }
    else {
        for(i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                prime = 0;
                break;
            }
        }
        if(prime)
            printf("prime number");
        else
            printf("Not a prime number");
    }
    return 0;
}
