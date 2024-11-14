#include <stdio.h>

void printSum(int *data)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(data + i);
    }

    printf("The sum of your data is:- %d", sum);
}

int main()
{

    int data[5];
    printf("Enter 5 values to find the sum of:- ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &data[i]);
    }

    printSum(data);

    return 0;
}