//CH.SC.U4CSE25015
#include <stdio.h>
int main() {
    char ch[200];
    printf("Enter the string : ");
    fgets(ch,sizeof(ch),stdin);
    puts(ch);
    return 1;
}
