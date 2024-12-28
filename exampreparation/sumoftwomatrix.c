// Write a C program to find the
// sum of two matrix of order m x n

#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;
    printf("\nEnter the row and column for matrix A: ");
    scanf("%d %d", &row1, &col1);

    printf("\nEnter the row and column for matrix B: ");
    scanf("%d %d", &row2, &col2);

    if (row1 != row2 && col1 != col2)
    {
        printf("\nMatrix Addition is not possible. Please enter matrix with same dimension");
    }

    int a[row1][col1], b[row2][col2], c[row1][col2];

    printf("\nEnter the elements of matrix A: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("\nEnter value of matA[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the elements of matrix B: ");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("\nEnter value of matB[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            c[i][j] = 0;
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nThe resultant matrix is: \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}