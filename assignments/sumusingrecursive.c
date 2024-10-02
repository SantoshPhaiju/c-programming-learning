#include <stdio.h>

int add(int num);

int main()
{
    int num;

    printf("\nEnter the number you want to find the sum upto:- ");
    scanf("%d", &num);

    int sum = add(num);
    printf("\nThe sum of %d natural numbers is:- %d", num, sum);

    return 0;
}

int add(int num)
{

    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num + add(num - 1);
    }
}