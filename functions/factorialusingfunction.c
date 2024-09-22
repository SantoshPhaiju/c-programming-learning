#include <stdio.h>

int factorial(int num);

int main()
{

    int num, fact;
    printf("\nEnter the number to find the factorial:- ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("The factorial of %d is %d", num, fact);
    return 0;
}

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return fact;
}
