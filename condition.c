#include <stdio.h>

int main()
{

    // wap to ask 2 integer from the user along with operator and perform the operation...
    // using if else if ladder...

    printf("-------------- WELCOME TO MY CALCULATOR --------------\n");

    int a, b;
    char operatorByUser;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    printf("Enter the operator: \n");

    scanf(" %c", &operatorByUser);

    if (operatorByUser == '+')
    {
        printf("The sum of %d and %d is %d", a, b, a + b);
    }
    else if (operatorByUser == '-')
    {
        printf("The difference of %d and %d is %d", a, b, a - b);
    }
    else if (operatorByUser == '*')
    {
        printf("The product of %d and %d is %d", a, b, a * b);
    }
    else if (operatorByUser == '/')
    {
        printf("The division of %d and %d is %d", a, b, a / b);
    }
    else if (operatorByUser == '%')
    {
        printf("The remainder of %d and %d is %d", a, b, a % b);
    }
    else
    {
        printf("Invalid operator");
    }

    return 0;
}