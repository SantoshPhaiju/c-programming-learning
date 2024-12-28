#include <stdio.h>

// int  (*p)[4] pointer to an array of 4 integers
// int *p[4] is an array of 4 pointers to integer


void show(int (*p)[4], int r, int c)
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

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    show(arr, 3, 4);

    return 0;
}