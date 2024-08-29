#include <stdio.h>

int main()
{

    int i = 1, count = 0;

    do
    {
        printf("%d\n", i);
        count++;
        i /= 5;
    } while (i > 1);

    printf("\nThis loop runned %d times", count);

    return 0;
}