//CH.SC.U4CSE24015
#include <stdio.h>
void accept(int a[10][10], int m, int n);
void display_augmented(int a[10][10], int m, int n);
void accept(int a[10][10], int m, int n) {
    int i, j;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
}
void display_augmented(int a[10][10], int m, int n) {
    int i, j;
    int sum_row, sum_col, total = 0;
    for(i=0; i<m; i++) {
        sum_row = 0;
        for(j=0; j<n; j++) {
            printf("%d\t", a[i][j]);
            sum_row += a[i][j];
        }
        printf("%d\n", sum_row);
        total += sum_row;
    }
    for(j=0; j<n; j++) {
        sum_col = 0;
        for(i=0; i<m; i++)
            sum_col += a[i][j];
        printf("%d\t", sum_col);
    }
    printf("%d\n", total);
}
int main() {
    int a[10][10], m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    accept(a, m, n);
    printf("\nThe augmented matrix is:\n");
    display_augmented(a, m, n);
    return 0;
}
