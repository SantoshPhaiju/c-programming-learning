#include <stdio.h>

int main()
{
    int i = 1, count = 0;

    while (i > 1)
    {
        // printf("%d\n", i);
        count++;
        i /= 5;
    }

    printf("This loop is executed %d times. \n", count);

    return 0;
}