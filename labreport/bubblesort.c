#include <stdio.h>

int main()
{
    int arrsize, temp;

    printf("Enter the number of elements you want to have in your array for sorting:- ");
    scanf("%d", &arrsize);

    int arr[arrsize];

    for (int i = 0; i < arrsize; i++)
    {
        printf("\nEnter the %d element of the array:- ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < arrsize; i++)
    {
        for (int j = 0; j < arrsize - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nYour sorted array is:- ");

    for (int i = 0; i < arrsize; i++)
    {
        printf("\n%d", arr[i]);
    }

    return 0;
}