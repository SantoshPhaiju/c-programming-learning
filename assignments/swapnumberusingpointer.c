#include <stdio.h>

void swap(int *a, int *b);

int main()
{

    int a, b;
    printf("Enter two numbers to swap:- ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("\nThe swapped value of the numbers are:- ");

    printf("\na = %d", a);
    printf("\nb = %d", b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}