#include <stdio.h>

int main()
{

    // int arr[] = {1, 10, 20, 30, 40}; // * Here the size is optional for array initialization.
    int arr[5] = {1, 10, 20};

    for (int i = 0; i < 5; i++)
    {
        printf("\nThe value %d is:- %d", i + 1, arr[i]);
    }

    int val[3];
    val[0] = 20;
    val[1] = 30;
    val[2] = 40;
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nThe value %d is:- %d", i + 1, val[i]);
    }

    return 0;
}