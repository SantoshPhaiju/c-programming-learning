#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int sum = 0;

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
        sum += *(arr + i);
    }

    printf("You entered: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\nSum of the numbers: %d\n", sum);

    return 0;
}