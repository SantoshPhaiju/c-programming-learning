#include <stdio.h>

int main()
{
    union myarray
    {
        int a;
        char b[30];
        char c[50];
    } arr[3];

    // arr.c = 99;
    // printf("\nc = %d", arr.c);
    // printf("\na = %s", arr.a);
    // printf("\nb = %s", arr.b);

    printf("\nenter the integer value: ");
    scanf("%d", &arr[0].a);
    printf("\nEnter the character value: ");
    scanf(" %[^\n]", arr[1].b);
    printf("\nEnter the character value: ");
    scanf(" %[^\n]", arr[2].c);

    printf("union values:- ");
    printf("%d\n", arr[0].a);
    printf("%s\n", arr[1].b);
    printf("%s\n", arr[2].c);

    return 0;
}