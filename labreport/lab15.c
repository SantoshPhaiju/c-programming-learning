#include <stdio.h>

int factorial(int no)
{
    int fact = 1;

    for (int i = 1; i <= no; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{

    int num;
    printf("Enter the number to find the factorial of:- ");
    scanf("%d", &num);

    int result = factorial(num);
    printf("Factorial of %d is %d", num, result);

    return 0;
}