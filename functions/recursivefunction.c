// Recursion and iteration.
// Diff of recursion and iteration.

// recursive
// * Recursive function -> needs to store intermediate result in memory, Easy to code
// * Iteration -> 

// finding factorial

#include <stdio.h>

int factorial(int num);

int main()
{
    int num, fact;
    printf("Enter a number to find the factorial of:- ");
    scanf("%d", &num);

    fact = factorial(num);
    printf("The factorial of the number %d is:- %d", num, fact);

    return 0;
}

int factorial(int num)
{
    if (num <= 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}