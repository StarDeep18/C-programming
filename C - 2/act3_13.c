//CH.SC.U4CSE24015
#include <stdio.h>
int main() {
    int first,last,prime,i,j;
    printf("Enter the starting number: ");
    scanf("%d", &first);
    printf("Enter the ending number: ");
    scanf("%d", &last);
    printf("Prime numbers between %d and %d are:\n",first,last);
    for (i = first; i <= last; i++) {
        if (i < 2)
        continue;
        prime = 1;
        for (j=2;j*j<=i;j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 1;
}
