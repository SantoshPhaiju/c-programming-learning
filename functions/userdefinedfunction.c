#include <stdio.h>

int add(int a, int b);

int main()
{
    int a, b;

    printf("Enter the two numbers to add:- ");
    scanf("%d %d", &a, &b);

    add(a, b);
    printf("\nThe value of a & b after add is:- %d, %d", a, b);
    {
        int a = 50;
        printf("\nInsid the block a = %d", a);
    }

    printf("\nOutside the block a = %d", a);
    printf("\nhehe %d", add(4, 5));

    return 0;
}

int add(int firstNum, int secondNum)
{
    firstNum = firstNum + 1;
    secondNum = secondNum + 1;
    printf("The sum of %d and %d is %d", firstNum, secondNum, firstNum + secondNum);
    return firstNum + secondNum;
}