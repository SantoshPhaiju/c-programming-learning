#include <stdio.h>
#include <stdlib.h>

void sort(int *nums, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(nums + i) > *(nums + j))
            {
                temp = *(nums + i);
                *(nums + i) = *(nums + j);
                *(nums + j) = temp;
            }
        }
    }
}

int main()
{
    // 24. WAP to sort n numbers in ascending order using DMA and function.

    int n, *ptr;
    printf("Enter how many numbers you want to enter for sorting: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory Allocation Failed!");
        exit(1);
    }

    printf("Enter %d numbers to sort: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    sort(ptr, n);

    printf("Sorted Data: \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}
