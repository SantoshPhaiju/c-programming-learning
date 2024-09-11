#include <stdio.h>

int main()
{

    int arr[] = {5, 3, 8, 6, 2, 7, 1, 4};

    int minIndex = arr[0];
    int temp;

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    for (int i = 0; i < 8; i++)
    {
        printf("The value of arris %d \n", arr[i]);
    }

    return 0;
}