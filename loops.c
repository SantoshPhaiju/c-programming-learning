#include <stdio.h>

int main()
{

    // Types of loops in C programming...

    // 1. definite loop - for, while, do-while loops (if the condition is given)
    // 2. indefinite loop - while, do-while loops (if the condition is not given)

    // for loop
    for (int i = 1; i <= 10; i++)
        printf("Hello There %d\n", i);

    // new for loop
    for (int i = 1; i <= 10; i++)
    {
        printf("Hello There %d\n", i);
    }

    // while loop
    int i = 1;
    while (i <= 10)
    {
        printf("Bye There from while... %d\n", i);
        i++;
    }

    // do-while loop
    int j = 1;
    do
    {
        printf("Welcome There from do-while... %d\n", j);
        j++;
    } while (j <= 10);

    printf("\n%d\n", j);

    // Ulto loop

    for (int i = 10; i >= 1; i--)
    {
        printf("Hello There %d\n", i);
    }


    // write a program to add upto 10 numbers using for loop
    int sum = 0;
    for (i = 1; i <= 10; i++) {
        sum = sum + i;
    }

    printf("sum of first 10 numbers is %d\n", sum);


    // Print all odd numbers from 1 to 100
    for (int i = 1; i <= 100; i++ ) {
        if (i % 2 != 0) {
            printf("\n odd - %d", i);
        }
    }

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n even - %d", i);
        }
    }

    return 0;
}