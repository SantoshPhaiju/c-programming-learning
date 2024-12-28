#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;

    printf("Enter the number of elements in the array:- ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory Allocation failed");
        exit(1);
    }

    printf("Enter the elements of the array:- ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    int smallest = *ptr, largest = *ptr;
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) < smallest)
        {
            smallest = *(ptr + i);
        }

        if (*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }

    printf("The smallest element in the array is: %d\n", smallest);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}