#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);

    int matrixA[m][n], matrixB[m][n], sum[m][n], product[m][n];

    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Adding matrices
    printf("Sum of matrices A and B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Multiplying matrices
    printf("Product of matrices A and B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            product[i][j] = 0;
            for (int k = 0; k < n; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
