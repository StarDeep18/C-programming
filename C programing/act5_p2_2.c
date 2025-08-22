//CH.SC.U4CSE24015
#include <stdio.h>
void accept(int a[10][10], int m, int n);
void display(int a[10][10], int m, int n);
int add(int a[10][10], int b[10][10], int res[10][10], int m1, int n1, int m2, int n2);
int multiply(int a[10][10], int b[10][10], int res[10][10], int m1, int n1, int m2, int n2);

int main() {
    int a[10][10], b[10][10], sum[10][10], product[10][10];
    int m1, n1, m2, n2;
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d%d", &m1, &n1);
    printf("Enter the elements for Matrix A:\n");
    accept(a, m1, n1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d%d", &m2, &n2);
    printf("Enter the elements for Matrix B:\n");
    accept(b, m2, n2);
    printf("\nMatrix A:\n");
    display(a, m1, n1);
    printf("\nMatrix B:\n");
    display(b, m2, n2);
    if (add(a, b, sum, m1, n1, m2, n2)) {
        printf("\nSum of A and B:\n");
        display(sum, m1, n1);
    } else {
        printf("\nAddition not possible (matrices are of different sizes).\n");
    }
    if (multiply(a, b, product, m1, n1, m2, n2)) {
        printf("\nProduct of A and B:\n");
        display(product, m1, n2);
    } else {
        printf("\nMultiplication not possible (columns of A != rows of B).\n");
    }
    return 0;
}
void accept(int a[10][10], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}
void display(int a[10][10], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}
int add(int a[10][10], int b[10][10], int res[10][10], int m1, int n1, int m2, int n2) {
    if (m1 != m2 || n1 != n2)
        return 0;
    int i, j;
    for (i = 0; i < m1; i++)
        for (j = 0; j < n1; j++)
            res[i][j] = a[i][j] + b[i][j];
    return 1;
}
int multiply(int a[10][10], int b[10][10], int res[10][10], int m1, int n1, int m2, int n2) {
    if (n1 != m2)
        return 0;
    int i, j, k;
    for (i = 0; i < m1; i++)
        for (j = 0; j < n2; j++) {
            res[i][j] = 0;
            for (k = 0; k < n1; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
    return 1;
}

