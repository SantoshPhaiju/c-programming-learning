#include <stdio.h>

int main()
{
    int arrsize;

    printf("Enter the number of elements you want to have in your array for sorting:- ");
    scanf("%d", &arrsize);

    int arr[arrsize];
    int temp, minIndex = 0;

    printf("Enter the elements of an array:- ");

    for (int i = 0; i < arrsize; i++)
    {
        printf("\nEnter the %d element of the array:- ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < arrsize; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < arrsize; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("\nYour sorted array is:- ");

    for (int i = 0; i < arrsize; i++)
    {
        printf("\n%d", arr[i]);
    }

    return 0;
}