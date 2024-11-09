#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }

    int matA[row1][col1], matB[row2][col2], matC[row1][col2];

    printf("Enter the elements of first matrix: \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Enter the element at matA[%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Enter the elements of second matrix: \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Enter the element at matB[%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            matC[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    printf("The resultant matrix is: \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}