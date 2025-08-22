//CH.SC.U4CSE24015
#include <stdio.h>
int main() {
    int n, i;
    int a=1,b=1,c;
    printf("Enter no of terms : ");
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        if(i==1||i==2) {
            c=1;
        }
        else{
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d ",c);
    }
    return 1;
}
