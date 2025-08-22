//CH.SC.U4CSE24015
#include <stdio.h>
#include <math.h>
int main(){
    float x,sum=0;
    int i,n;
    printf("Enter the number : ");
    scanf("%f",&x);
    printf("Enter no of terms : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum += pow(x,i);
    }
    printf("Sum : %.2f\n",sum);
    return 1;
}
