// 32) WAP to find all the prime numbers between 1 to 100.

#include <stdio.h>

int main()
{

    printf("Prime numbers between 1 to 100 are:- \n");
    for (int i = 1; i <= 100; i++)
    {
        int temp = 0;

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                temp = 1;
                break;
            }
        }

        if (temp == 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}