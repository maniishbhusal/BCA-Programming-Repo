// Program to find the transpose of the matrix using function.
#include <stdio.h>

void display(int[][3], int, int);
void transpose(int[][3], int[][3], int, int);

int main()
{
    int r, c;
    printf("Enter no of rows and no of columns: ");
    scanf("%d%d", &r, &c);
    int matrix[r][c], t[c][r];
    printf("Enter elements of a matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The original matrix is\n");
    display(matrix, r, c);
    transpose(matrix, t, r, c);
    printf("The transposed matrix is\n");
    display(t, c, r);
    return 0;
}

void display(int matrix[][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transpose(int matrix[][3], int t[][3], int r, int c)
{
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            t[i][j] = matrix[j][i];
        }
    }
}