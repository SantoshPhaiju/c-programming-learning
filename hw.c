#include <stdio.h>

int main()
{
    // Write a program in C to take the rate and quantity of 2 items in floating point and calculate the average value of the items. The result should be in floating point with only two decimal values.

    float rate1, rate2, quantity1, quantity2;
    printf("Enter the rate of item 1: ");
    scanf("%f", &rate1);
    printf("Enter the quantity of item 1: ");
    scanf("%f", &quantity1);
    printf("Enter the rate of item 2: ");
    scanf("%f", &rate2);
    printf("Enter the quantity of item 2: ");
    scanf("%f", &quantity2);

    float average = ((rate1 * quantity1) + (rate2 * quantity2)) / (quantity1 + quantity2);
    printf("The average value of the items is: %.2f\n", average);

    return 0;
}