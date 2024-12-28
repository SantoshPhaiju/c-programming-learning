#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *arr, n = 10;
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation failed");
        exit(1);
    }

    printf("Enter 10 numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }

    int max = *(arr + 1), min = *(arr + 1);

    for (int i = 0; i < n; i++)
    {

        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
        if (*(arr + i) < min)
        {
            min = *(arr + i);
        }
    }

    printf("\n%d is minimum in array ", min);
    printf("\n%d is maximum in array ", max);

    return 0;
}