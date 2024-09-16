// 31) WAP that checks whether the given number(x) is prime or not.

#include <stdio.h>

int main()
{
    int num, i, temp = 0;

    printf("Enter a number: \n");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            temp = 1;
            break;
        }
    }

    if (num == 1)
    {
        printf("1 is neither prime nor composite.\n");
    }
    else
    {
        if (temp == 0)
        {
            printf("%d is a prime number.\n", num);
        }
        else
        {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}