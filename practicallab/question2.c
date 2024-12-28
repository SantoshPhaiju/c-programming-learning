#include <stdio.h>
#include <stdlib.h>

// wap to sort n numbers in ascending order using dma.

int main()
{
    int num, *ptr;
    printf("How many numbers you want to enter for sorting: ");
    scanf("%d", &num);
    ptr = (int *)malloc(num * sizeof(num));

    if (ptr == NULL)
    {
        printf("Memory Allocation failed");
        exit(1);
    }

    printf("Enter %d numbers: \n", num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", (ptr + i));
    }

    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("The sorted array is: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}