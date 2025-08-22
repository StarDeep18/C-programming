//CH.SC.U4CSE24015
#include <stdio.h>
int main(){
    int num,rev=0,temp;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp = num;
    while(num>0){
        int digit = num % 10;
        rev = rev*10 + digit;
        num = num/10;
    }
    printf("Original number : %i\n",temp);
    printf("Reverse : %i",rev);
    return 1;
}
