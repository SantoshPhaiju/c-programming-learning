// Adding the element of array given by user

#include <stdio.h>
#define SIZE 50

int main()
{
    int arr[SIZE], num;

    printf("Enter the number of element you want to enter:- \n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter the array element %d:- ", arr[i]);
        scanf("%d", &arr[i]);
    }

    return 0;
}