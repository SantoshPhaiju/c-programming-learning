#include <stdio.h>

int main()
{

    int arr[] = {1, 4, 3, 5};

    int minIndex;
    int temp;

    for (int i = 0; i < 3; i++)

    {
        minIndex = i;
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of arris %d \n", arr[i]);
    }

    return 0;
}