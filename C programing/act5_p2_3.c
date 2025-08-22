//CH.SC.U4CSE24015
#include <stdio.h>
void accept(int a[10][10], int n);
void display(int a[10][10], int n);
int isSymmetric(int a[10][10], int n);
int trace(int a[10][10], int n);
int isUpperTriangular(int a[10][10], int n);
int isLowerTriangular(int a[10][10], int n);
int isIdentity(int a[10][10], int n);
void accept(int a[10][10], int n) {
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}
void display(int a[10][10], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}
int isSymmetric(int a[10][10], int n) {
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(a[i][j] != a[j][i])
                return 0; 
    return 1; 
}
int trace(int a[10][10], int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++)
        sum += a[i][i];
    return sum;
}
int isUpperTriangular(int a[10][10], int n) {
    int i, j;
    for(i = 1; i < n; i++)
        for(j = 0; j < i; j++)
            if(a[i][j] != 0)
                return 0;
    return 1;
}
int isLowerTriangular(int a[10][10], int n) {
    int i, j;
    for(i = 0; i < n; i++)
        for(j = i+1; j < n; j++)
            if(a[i][j] != 0)
                return 0;
    return 1;
}
int isIdentity(int a[10][10], int n) {
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++) {
            if(i == j && a[i][j] != 1)
                return 0;
            if(i != j && a[i][j] != 0)
                return 0;
        }
    return 1;
}
int main() {
    int mat[10][10], n, choice;
    printf("Enter order of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    accept(mat, n);
    printf("\nMatrix is:\n");
    display(mat, n);
    do {
        printf("\n--- MENU ---\n");
        printf("1. Check if the matrix is symmetric\n");
        printf("2. Display the trace of the matrix\n");
        printf("3. Check if the matrix is upper triangular\n");
        printf("4. Check if the matrix is lower triangular\n");
        printf("5. Check if the matrix is identity matrix\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                if(isSymmetric(mat, n))
                    printf("The matrix is symmetric.\n");
                else
                    printf("The matrix is NOT symmetric.\n");
                break;
            case 2:
                printf("The trace of the matrix is: %d\n", trace(mat, n));
                break;
            case 3:
                if(isUpperTriangular(mat, n))
                    printf("The matrix is upper triangular.\n");
                else
                    printf("The matrix is NOT upper triangular.\n");
                break;
            case 4:
                if(isLowerTriangular(mat, n))
                    printf("The matrix is lower triangular.\n");
                else
                    printf("The matrix is NOT lower triangular.\n");
                break;
            case 5:
                if(isIdentity(mat, n))
                    printf("The matrix is an identity matrix.\n");
                else
                    printf("The matrix is NOT an identity matrix.\n");
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 6);

    return 0;
}
