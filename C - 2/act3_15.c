//CH.SC.U4CSE24022
#include <stdio.h>
void main() {
    int n,line_number,number;
    char ch = 'A';
    printf("How many lines: ");
    scanf("%d",&n);
    for (line_number = 1; line_number <= n; line_number++) {
        for (number = 1; number <= line_number; number++) {
            printf("%c\t", ch);
            ch++;
        }
        printf("\n");
    }
}
