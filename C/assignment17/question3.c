// Program to find the transpose of a matrix
#include <stdio.h>

// Define the size of the matrix
#define M 3
#define N 3

int main() {
    // Declare a matrix of size MxN
    int matrix[M][N];

    // Prompt the user to enter elements for the matrix
    printf("\nEnter the elements of the matrix:\t");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the original matrix
    printf("\nThe matrix to be transposed is:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Find and display the transpose of the matrix
    printf("\nThe transpose of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
