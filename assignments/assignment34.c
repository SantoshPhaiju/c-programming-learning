// program to find the lcm of two numbers entered by the user.

#include <stdio.h>

// first need a function to calculate Greatest Common Divisor
// need to find lcm

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;
    int result;

    printf("Enter the two numbers to find the lcm of: -");
    scanf("%d %d", &a, &b);

    result = lcm(a, b);
    printf("The lcm of %d and %d is %d", a, b, result);

    return 0;
}