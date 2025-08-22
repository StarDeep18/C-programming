#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char ch1[100], ch2[100];
    printf("Enter the strings : ");
    scanf("%s%s", ch1, ch2);
    for(i = 0; ch1[i] != '\0'; i++) {
        if (ch1[i] >= 'a' && ch1[i] <= 'z') {
            ch1[i] = ch1[i] - ('a' - 'A');
        }
    }
    printf("Answer is : %s", ch1);
    return 0;
}

