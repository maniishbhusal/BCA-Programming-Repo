// Program to read two M*N matrices and display their sum/difference
#include <stdio.h>

// Define the size of the matrices
#define M 3
#define N 3

int main() {
    // Declare two matrices of size MxN
    int matrix1[M][N], matrix2[M][N];

    // Prompt the user to enter elements for the first matrix
    printf("\nEnter the elements of the first matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Display the first matrix
    printf("\nThe first matrix is:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    // Prompt the user to enter elements for the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Display the second matrix
    printf("\nThe second matrix is:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    // Display the sum of the matrices
    printf("\nThe sum of the matrices is: \n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    // Display the difference of the matrices
    printf("\nThe difference of the matrices is:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix1[i][j] - matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}