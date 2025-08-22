// CH.SC.U4CSE24015
#include <stdio.h>
int main() {
    int a1[100] = {10, 25, 90};
    int a2[100] = {9, 16, 22, 26, 100};
    int a3[200];
    int n1 = 3, n2 = 5;
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a1[i] < a2[j]) {
            a3[k++] = a1[i++];
        } else {
            a3[k++] = a2[j++];
        }
    }
    while (i < n1) {
        a3[k++] = a1[i++];
    }
    while (j < n2) {
        a3[k++] = a2[j++];
    }
    printf("Merged and sorted array : ");
    for (i = 0; i < k; i++) {
        printf("%d ", a3[i]);
    }
    return 1;
}
