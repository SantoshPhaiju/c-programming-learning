#include <stdio.h>

int main()
{

    int arr[] = {5, 3, 8, 6, 2, 7, 1, 4};

    int temp;

    // code to find the length of array
    int length = sizeof arr / sizeof arr[0];
    printf("The length of the array is %d \n", length);

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("The value of arr is %d \n", arr[i]);
    }

    return 0;
}