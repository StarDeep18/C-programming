//CH.SC.U4CSE25015
#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    printf("Enter characters :\n");
    scanf(" %c", &ch);
    while (ch != '*') {
        count++;
        scanf(" %c", &ch);
    }
    printf("Total characters entered : %d\n", count);

    return 0;
}
