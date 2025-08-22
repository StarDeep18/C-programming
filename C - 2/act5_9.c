//CH.SC.U4CSE24015
#include <stdio.h>
int main() {
    int a1[50], a2[50], a3[50];
    int n1, n2, i, j, k=0;
    printf("Enter number of elements in first set : ");
    scanf("%d", &n1);
    printf("Enter elements of first set :\n");
    for(i=0; i<n1; i++)
        scanf("%d", &a1[i]);
    printf("Enter number of elements in second set : ");
    scanf("%d", &n2);
    printf("Enter elements of second set :\n");
    for(i=0; i<n2; i++)
        scanf("%d", &a2[i]);
    for(i=0; i<n1; i++) {
        for(j=0; j<n2; j++) {
            if(a1[i]==a2[j]) {
                a3[k++] = a1[i];
                break;
            }
        }
    }
    printf("Intersection :\n");
    for(i=0; i<k; i++)
        printf("%d ", a3[i]);
    return 1;
}
