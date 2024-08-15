#include <stdio.h>

int main()
{

    // wap to ask 2 integer from the user along with operator and perform the operation...
    // using if else if ladder...

    printf("-------------- WELCOME TO MY CALCULATOR --------------\n");
    int a, b;
    int operatorByUser;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter 5 for remainder\n");

    printf("Enter your choice: ");
    scanf("%d", &operatorByUser);

    if (operatorByUser == 1)
    {
        printf("The sum of %d and %d is %d", a, b, a + b);
    }
    else if (operatorByUser == 2)
    {
        printf("The difference of %d and %d is %d", a, b, a - b);
    }
    else if (operatorByUser == 3)
    {
        printf("The product of %d and %d is %d", a, b, a * b);
    }
    else if (operatorByUser == 4)
    {
        printf("The division of %d and %d is %d", a, b, a / b);
    }
    else if (operatorByUser == 5)
    {
        printf("The remainder of %d and %d is %d", a, b, a % b);
    }
    else
    {
        printf("Invalid operator");
    }

    return 0;
}