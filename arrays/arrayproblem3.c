

#include <stdio.h>

#define SIZE 50

int main()
{
    int arr[SIZE], num, valid_input = 0;

    while (!valid_input)
    {

        printf("Enter the number of element you want to enter:- \n");
        scanf("%d", &num);

        if (num > 50)
        {
            valid_input = 0;
            printf("\n Invalid input");
        }
        else
        {
            valid_input = 1;
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("Enter the array element %d:- ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // max = arr[num - 1];
    // min = arr[0];

    printf("\nmax is:- %d", max);
    printf("\nmin is:- %d", min);

    return 0;
}