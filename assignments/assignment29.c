// 29) WAP to read a no. & find out if it is Armstrong no. or not.
// Armstrong number is a number that is equal to the sum of cubes of its digits.

#include <stdio.h>
#include <math.h>

int main()
{

    int num, sumOfCubes = 0, remainder = 0;

    printf("Enter a number:- \n");
    scanf("%d", &num);

    int temp = num;
    while (num != 0)
    {
        remainder = num % 10;
        sumOfCubes += pow(remainder, 3);
        num /= 10;
    }

    if (temp == sumOfCubes)
    {
        printf("The number %d is an Armstrong number. \n", temp);
        printf("Because Sum of cubes of digits is %d which is equal to number %d \n", sumOfCubes, temp);
    }
    else
    {
        printf("The number %d is not an Armstrong number.\n", temp);
        printf("Because Sum of cubes of digits is %d which is not equal to number %d\n", sumOfCubes, temp);
    }

    return 0;
}