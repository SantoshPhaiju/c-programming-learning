// * Dynamic Memory Allocation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr, i, sum = 0;

    printf("Enter number of elements to enter:- ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("\nError: Memory Allocation Failed");
        exit(0);
    }

    printf("\nEnter the %d values of the array:- ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }

    printf("The sum of your array is:- %d\n", sum);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", ptr[i]);
    }

    return 0;
}