#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, na, *ptr, sum = 0;

    printf("Enter the number upto which you want to find the sum of:- ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(n));

    if (ptr == NULL)
    {
        printf("Memory Allocation failed");
        exit(1);
    }

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }

    printf("The sum of your numbers is: %d", sum);

    printf("\nHow many numbers do you want to add more:- ");
    scanf("%d", &na);

    ptr = (int *)realloc(ptr, na + n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory Allocation failed");
        exit(1);
    }

    printf("\nEnter %d numbers: ", na);
    for (int i = na; i < na + n; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }
    printf("The sum of your numbers is: %d", sum);

    return 0;
}