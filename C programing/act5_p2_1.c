//CH.SC.U4CSE24015
#include <stdio.h>
void accept(int a[10][10], int m, int n);
void display(int a[10][10], int m, int n);
void transpose(int a[10][10], int b[10][10], int m, int n);
void accept(int a[10][10], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void display(int a[10][10], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}
void transpose(int a[10][10], int b[10][10], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }
}
int main() {
    int mat[10][10], trans[10][10];
    int m, n;
    printf("How many rows and columns :  ");
    scanf("%d%d", &m, &n);
    printf("Enter the matrix elements:\n");
    accept(mat, m, n);
    printf("\nThe matrix is:\n");
    display(mat, m, n);
    transpose(mat, trans, m, n);
    printf("\nThe transpose of the matrix is:\n");
    display(trans, n, m);
    return 0;
}

