#include <stdio.h>

int main()
{

    int firstm, firstn, secondm, secondn;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &firstm, &firstn);

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &secondm, &secondn);

    if (firstn != secondm)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }

    int firstmatrix[firstm][firstn], secondmatrix[secondm][secondn], result[firstm][secondn];

    printf("Enter the elements of first matrix: \n");
    for (int i = 0; i < firstm; i++)
    {
        for (int j = 0; j < firstn; j++)
        {
            printf("Enter the element at matA[%d][%d]: ", i, j);
            scanf("%d", &firstmatrix[i][j]);
        }
    }

    printf("Enter the elements of second matrix: \n");
    for (int i = 0; i < secondm; i++)
    {
        for (int j = 0; j < secondn; j++)
        {
            printf("Enter the element at matB[%d][%d]: ", i, j);
            scanf("%d", &secondmatrix[i][j]);
        }
    }

    for (int i = 0; i < firstm; i++)
    {
        for (int j = 0; j < secondn; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < firstn; k++)
            {
                result[i][j] += firstmatrix[i][k] * secondmatrix[k][j];
            }
        }
    }

    printf("The resultant matrix is: \n");
    for (int i = 0; i < firstm; i++)
    {
        for (int j = 0; j < secondn; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}