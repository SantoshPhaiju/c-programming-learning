#include <stdio.h>

int factorial(int n);

int main()
{
    int num;
    printf("Enter a number to find the factorial of: ");
    scanf("%d", &num);

    int fact = factorial(num);
    printf("The factorial of %d is %d\n", num, fact);

    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}