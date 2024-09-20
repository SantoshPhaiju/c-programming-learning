#include <stdio.h>

// returnType FunctionName (parameters); -> function prototype
int sum(int a, int b);

int main()
{
    // function call here...
    int a = 5;
    int b = 5;
    int mySum = sum(a, b);
    printf("\n%d", mySum);
    printf("\n%d %d", a, b);

    return 0;
}


// function definition here...
int sum(int a, int b)
{
    a = a + 1;
    b = b + 1;
    return a + b;
}