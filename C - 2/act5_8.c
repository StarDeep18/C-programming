//CH.SC.U4CSE24015
#include <stdio.h>
void toBinary(int n) {
    int bin[32], i=0;
    if(n==0) {
        printf("0");
        return;
    }
    while(n>0) {
        bin[i++] = n%2;
        n = n/2;
    }
    for(i=i-1; i>=0; i--)
        printf("%d", bin[i]);
}
int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary: ");
    toBinary(num);
    printf("\nOctal: %o\n", num);
    printf("Hexadecimal: %X\n", num);
    return 1;
}
