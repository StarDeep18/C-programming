//CH.SC.U4CSE2022
#include <stdio.h>
int main() {
    int num,temp,digit,sum;
    printf("Armstrong numbers are :\n");
    for (num = 1; num <= 500; num++) {
        sum = 0;
        temp = num;
        while (temp != 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}
