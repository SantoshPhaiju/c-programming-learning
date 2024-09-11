#include <stdio.h>

int main()
{

    int a[7] = {10, 9, 3, 2, 6, 8, 1};

    int temp;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (a[i] < a[j])
            {
                printf("\na[%d] = %d",i, a[i]);
                printf("\na[%d] = %d", j, a[j]);

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                printf("\nAfter sort a[%d] %d", i, a[i]);
                printf("\nAfter sort a[%d] %d", j, a[j]);
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        printf("\nSorted value are:- %d ", a[i]);
    }

    return 0;
}