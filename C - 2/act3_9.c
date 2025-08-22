//CH.SC.U4CSE24015
#include <stdio.h>
int main(){
    float x,sum=0;
    int i,n;
    printf("Enter the number : ");
    scanf("%f",&x);
    printf("Enter no of terms : ");
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        sum+=(2*i+1)*x;
    }
    printf("Sum : %.2f\n",sum);
    return 1;
}
