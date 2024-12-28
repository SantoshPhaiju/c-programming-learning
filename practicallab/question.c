#include <stdio.h>

void fibonacci(int n, int a, int b)
{
    if (n > 0)
    {
        printf("%d ", a);
        fibonacci(n - 1, b, a + b);
    }
}

int main()
{
    int num;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Fibonacci series: ");
        fibonacci(num, 0, 1);
    }
    else
    {
        printf("Please enter a positive number.");
    }

    return 0;
}