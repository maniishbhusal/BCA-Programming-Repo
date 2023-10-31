// Program to add two m*n matrices using pointer.
#include <stdio.h>

void addMatrices(int m, int n, int mat1[][n], int mat2[][n], int result[][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(result + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}

void displayMatrix(int m, int n, int mat[][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int m, n;

    // Input matrix dimensions
    printf("Enter number of rows (m) and columns (n) for matrices: ");
    scanf("%d %d", &m, &n);

    int mat1[m][n], mat2[m][n], result[m][n];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", (*(mat1 + i) + j));
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", (*(mat2 + i) + j));
        }
    }

    // Add matrices
    addMatrices(m, n, mat1, mat2, result);

    // Display matrices and result
    printf("\nMatrix 1:\n");
    displayMatrix(m, n, mat1);

    printf("\nMatrix 2:\n");
    displayMatrix(m, n, mat2);

    printf("\nSum of Matrices:\n");
    displayMatrix(m, n, result);

    return 0;
}
