//CH.SC.U4CSE24015
#include <stdio.h>
int main(){
    char ch;
    int alphabets = 0, digits = 0;
    printf("Enter characters : ");
    while (scanf("%c", &ch) == 1){
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            alphabets++;
        }
        else if (ch >= '0' && ch <= '9'){
            digits++;
        }
    }
    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    return 0;
}
