//CH.SC.U4CSE2022
#include <stdio.h>
int main() {
    int i,j,first,last,n;
    printf("Enter the first number : ");
    scanf("%d",&first);
    printf("Enter the last number : ");
    scanf("%d",&last);
    printf("Enter the no of multiples : ");
    scanf("%d",&n);
    printf("\n");
    for(i = 1; i <= n; i++){
        for (j = first; j <= last; j++) {
            printf("%d * %d = %-4d\t", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}
