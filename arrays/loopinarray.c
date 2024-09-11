#include <stdio.h>

#define SIZE 5

int main()
{

    int inputs[SIZE];

    printf("Please enter %d values:- ", SIZE);
    for (int i = 0; i < SIZE; i++)
    { 
        printf("\nEnter the value %d :- ", i + 1);
        scanf("%d", &inputs[i]);
    }

    printf("\n -------------------- Values of the array ------------------------------");

    for (int i = 0; i < SIZE; i++)
    {
        printf("\nYour %d value is:- %d", i + 1, inputs[i]);
    }

    return 0;
}