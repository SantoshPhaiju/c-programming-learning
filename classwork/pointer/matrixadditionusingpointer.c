#include <stdio.h>

void show(int (*p)[2], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // printf("arr[%d][%d] = %d\t", i, j, *(*(p + i) + j));
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
}


void sum(int (*pa)[2], int (*pb)[2], int result[][2], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            result[i][j] = *(*(pa + i) + j) + *(*(pb + i) + j);
            // printf("pa[%d][%d] = %d\n", i, j, *(*(pa + i) + j));
            // printf("pb[%d][%d] = %d\n", i, j, *(*(pb + i) + j));
        }
    }
    printf("\nSum of matrices:\n");
    // show(sumMat, ra, ca); // Displaying the sum matrix
}

int main()
{
    int result[2][2];
    int mata[2][2] = {
        {1, 2},
        {3, 4}};
    int matb[2][2] = {
        {5, 6},
        {7, 8}};

    sum(mata, matb, result, 2, 2);
    printf("showing muni muni\n");
    show(result, 2, 2);

    return 0;
}
