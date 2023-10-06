// Program to read a matrix of size M*N from the user and display it on the screen.
#include <stdio.h>

// Define the size of the matrix
#define M 2
#define N 3

int main() {
    // Declare a matrix with M rows and N columns
    int matrix[M][N];

    // Prompt the user to enter matrix elements
    printf("\nEnter the matrix elements:\t");

    // Read matrix elements from the user
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the entered matrix
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
