#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter two numbers: \n");
    scanf("%f %f", &a, &b);
    float sum = a + b;

    printf("The sum of the numbers is: %f\n", sum);

    return 0;
}