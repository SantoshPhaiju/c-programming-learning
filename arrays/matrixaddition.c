#include <stdio.h>

int main()
{

    int mat1[3][4];
    int mat2[3][4];
    int mat3[3][4];

    printf("Enter the elements of the first matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the value of mat1[%d][%d]: \n", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the value of mat2[%d][%d]: \n", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("The value of matrix 1: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", mat1[i][j]);
        }

        printf("\n");
    }

    printf("The value of matrix 2: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", mat2[i][j]);
        }

        printf("\n");
    }

    printf("The addition of the two matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", mat3[i][j]);
        }

        printf("\n\n");
    }

    return 0;
}