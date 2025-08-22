//CH.SC.U4CSE24015
#include <stdio.h>
int main() {
    int n, digit = 0, sum = 0;
    scanf("%d", &n);
    if (n == 0) {
        digit = 1;
        sum = 0;
    } else {
        while (n > 0) {
            sum += n % 10;
            digit++;
            n = n / 10;
        }
    }
    printf("Digit count is : %d\n",digit);
    printf("Sum of digits is : %d\n",sum);
    return 1;
}
