//CH.SC.U4CSE2022
#include <stdio.h>
int main(){
    int i,num,sum;
    printf("Perfect numbers below 500 are : \n");
    for (num = 1; num < 500; num++){
        sum = 0;
        for (i = 1; i <= num / 2; i++){
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}
