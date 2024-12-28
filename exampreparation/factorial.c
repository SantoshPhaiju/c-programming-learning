#include <stdio.h>

int main()
{
    int num, factorial = 1;
    printf("Enter a number to find the factorial of: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        factorial += factorial * i;
    }

    printf("The factorial of %d is %d\n", num, factorial);

    return 0;
}