//CH.SC.U4CSE2022
#include <stdio.h>
int main(){
    int i,n,num,temp,digit,sum;
    int max_sum = -1;
    int max_num = 0;
    printf("How many numbers : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &num);
        sum = 0;
        temp = num;
        while (temp != 0) {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        if (sum > max_sum) {
            max_sum = sum;
            max_num = num;
        }
    }
    printf("The number with maximum sum of digits is : %d",max_num);
    return 0;
}
