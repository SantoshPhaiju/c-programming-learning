#include <stdio.h>

int main()
{

    char myStr[50] = "Santosh Phaiju";
    char characterArrayIsHere[] = {'a', 'b', 'c', '\0'};

    printf("My string in  dhdhdhdhdis:- %s\n", characterArrayIsHere);

    printf("My String in C is:- %s", myStr);

    char name[30];
    int number;
    char lastname[30];

    printf("\nEnter the name:- ");
    scanf(" %[^\n]", name);

    printf("\nEnter the number:- ");
    scanf("%d", &number);

    printf("\nEnter the lastname:- ");
    scanf(" %[^\n]", lastname);

    printf("\n%s", name);
    printf("\n%d", number);
    printf("\n%s", lastname);

    return 0;
}