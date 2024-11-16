#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0; // Numbers <= 1 are not prime
    }
    for (int i = 2; i <= num / 2; i++)
    { // Start loop from 2
        if (num % i == 0)
        {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main()
{
    int num;

    printf("Enter a number to check if it's prime or composite: ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    if (isPrime(num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is a composite number.\n", num);
    }

    return 0;
}
