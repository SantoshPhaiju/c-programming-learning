#include <stdio.h>

int main()
{

    int arr[10] = {32, 12, 10, 11, 4, 5, 7, 17, 26, 8};

    int search, found = 0;

    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == search)
        {
            printf("%d is found in index %d\n", search, i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("%d is not found in the array\n", search);
    }

    return 0;
}