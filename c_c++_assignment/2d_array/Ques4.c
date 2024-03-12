#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

// Function to check if the matrix is symmetric
bool isSymmetric(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

// Function to calculate the trace of the matrix
int calculateTrace(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += matrix[i][i];
    }
    return trace;
}

// Function to check if the matrix is an upper triangular matrix
bool isUpperTriangular(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    if (isSymmetric(matrix, n)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    // Calculate and display the trace of the matrix
    int trace = calculateTrace(matrix, n);
    printf("Trace of the matrix: %d\n", trace);

    // Check if the matrix is an upper triangular matrix
    if (isUpperTriangular(matrix, n)) {
        printf("The matrix is an upper triangular matrix.\n");
    } else {
        printf("The matrix is not an upper triangular matrix.\n");
    }

    return 0;
}
