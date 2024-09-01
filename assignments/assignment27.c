// 27) WAP to read 3 digit no. & find sum of square of digits.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0, remainder = 0;

    printf("Enter a number:- \n");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        sum += pow(remainder, 2);
        num /= 10;
    }

    printf("Sum of squares of digits is %d\n", sum);

    return 0;
}