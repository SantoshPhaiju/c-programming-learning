// 30) WAP that reads a number (n) from the user and calculates the factorial of that number.

// Finding a factorial of number entered by the user

#include <stdio.h>

int main()
{
    int num, fact = 1;

    printf("Enter a number: \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i; // 1*1
    }

    printf("Factorial of %d is %d\n", num, fact);

    return 0;
}