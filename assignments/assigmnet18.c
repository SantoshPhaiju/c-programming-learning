// 18) print all odd and even numbers from 1 to 100 using a while loop and modulus operator.

#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            printf("Even - %d\n", i);
        }
        else
        {
            printf("Odd - %d\n", i);
        }
        i++;
    }
    return 0;
}