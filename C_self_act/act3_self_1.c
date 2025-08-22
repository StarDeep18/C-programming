//CH.SC.U4CSE24015
#include <stdio.h>
int main() {
    int n, line, num;
    printf("How many lines: ");
    scanf("%d", &n);
    for(line = 1; line <= n; line++) {
        for(num = 1; num <= line; num++) {
            printf("%d\t", num);
        }
        printf("\n");
    }
    return 1;
}

