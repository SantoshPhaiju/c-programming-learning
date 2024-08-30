#include <stdio.h>

int main()
{
    int add, mul, sub, div;

    // take the input from the user and do the add, div, sub, mul
    printf("Enter the value of a and b: \n");
    int a, b;
    scanf("%d %d", &a, &b);
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    printf("The value of %d + %d is %d \n", a, b, add);
    printf("The value of %d - %d is %d \n", a, b, sub);
    printf("The value of %d * %d is %d \n", a, b, mul);
    printf("The value of %d / %d is %d \n", a, b, div);

    // Another way to do the same thing
    printf("Second question answer from here: \n");
    printf("The value of %d + %d is %d \n", a, b, a + b);
    printf("The value of %d - %d is %d \n", a, b, a - b);
    printf("The value of %d * %d is %d \n", a, b, a * b);
    printf("The value of %d / %d is %d \n", a, b, a / b);

    return 0;
}