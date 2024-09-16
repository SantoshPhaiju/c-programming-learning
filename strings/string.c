#include <stdio.h>
#include <string.h>

int main()
{
    // char c;
    // char name[50];

    // printf("Enter your name:- ");
    // c = getchar();
    // printf("Enter your name:- ");
    // scanf("%s", &name);
    // // scanf("%[^\n]", &c);

    // for (int i = 0; i < count; i++)
    // {
    //     /* code */
    // }

    // printf("\n%c", c);
    // printf("\n%s", name);

    char name[50];

    printf("Enter your name: ");

    int s = 20;
    int ch;
    int i = 0;
    while (ch != '\n')
    {
        ch = getchar();
        name[i] = ch;
        i++;
    }

    char myName[20];

    printf("my name is: %s", name);

    printf("\nEnter name:- ");
    gets(myName);

    puts(myName);

    return 0;
}