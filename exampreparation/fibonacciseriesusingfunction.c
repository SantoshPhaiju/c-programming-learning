#include <stdio.h>

int fibonacci(int num);

int main()
{
    int num;
    printf("Enter the number upto where you want the fibonacci series:- ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}

int fibonacci(int num)
{
    int n1 = 0, n2 = 1, n3;

    printf("%d %d ", n1, n2);
    for (int i = 0; i < num; i++)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }

    return 0;
}