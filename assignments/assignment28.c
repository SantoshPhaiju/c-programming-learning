// 28) WAP to read 3 digit no. & find if it is palindrome or not.

#include <stdio.h>

int main()
{

    int num, remainder = 0, reverse = 0, temp = 0;

    printf("Enter a number:- \n");
    scanf("%d", &num);
    temp = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (temp == reverse)
    {
        printf("The number %d is a palindrome.\n", temp);
    }
    else
    {
        printf("The number %d is not a palindrome.\n", temp);
    }

    return 0;
}
