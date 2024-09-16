#include <stdio.h>

int main()
{
    char c[40];

    printf("Enter your name:- ");
    scanf("%[^\n]", &c);

    printf("\n%s", c);

    return 0;
}