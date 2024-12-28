#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 numbers: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter a string: ");
    char string[100];

    scanf(" %[^\n]", string);

    printf("You entered: %s", string);

    return 0;
}