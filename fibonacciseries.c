// 6. Write a program in C to print Fibonacci series for the number of terms entered by the
// user

#include <stdio.h>

int main() {
    int num, n1 = 0, n2 = 1, n3;

    printf("Enter the number upto where you want the fibonacci series:- ");
    scanf("%d", &num);

    printf("%d, %d, ", n1, n2);
    for (int i = 2; i < num; ++i)
    {
        n3 = n1 + n2;
        printf("%d, ", n3);
        n1 = n2;
        n2 = n3;
    }
    


    return 0;
}


