#include <stdio.h>

int main()
{
    int num;
    printf("Enter how many number you want to enter in array: ");
    scanf("%d", &num);

    int arr[100];

    printf("Enter the value of array: ");

    for (int i = 0; i < num; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int min = arr[0], max = arr[0];

    for (int i = 0; i < num; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("\n%d is max in the array.", max);
    printf("\n%d is min in the array.", min);


    
    return 0;
}