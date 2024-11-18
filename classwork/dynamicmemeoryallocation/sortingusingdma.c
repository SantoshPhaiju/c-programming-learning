// WAP to sort the five integers values from user using malloc function at first and then realloc function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL)
    {
        printf("memory allocation failed");
        exit(1);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", arr + i);
    }

    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("The sorted array is: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n");

    arr = (int *)realloc(arr, 10 * sizeof(int));

    if (arr == NULL)
    {
        printf("memory allocation failed");
        exit(1);
    }

    for (int i = 5; i < 10; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", arr + i);
    }

    for (int i = 5; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("The sorted array is: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n");

    free(arr);

    return 0;
}