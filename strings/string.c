#include <stdio.h>

int main()
{
    char c;
    char name[50];

    // printf("Enter your name:- ");
    // c = getchar();
    printf("Enter your name:- ");
    scanf("%s", &name);
    // scanf("%[^\n]", &c);

    printf("\n%c", c);
    printf("\n%s", name);

    return 0;
}