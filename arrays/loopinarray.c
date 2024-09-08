#include <stdio.h>

int main()
{

    int inputs[5];

    printf("Please enter 5 values:- ");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the value %d :- ", i + 1);
        scanf("%d", &inputs[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nYour %d value is:- %d", i + 1, inputs[i]);
    }

    return 0;
}