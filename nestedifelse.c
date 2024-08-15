#include <stdio.h>

int main() {

    // find the largest among three numbers...
    int a, b, c;
    printf("Enter three numbers: ");

    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest", a);
        }
        else
        {
            printf("%d is the largest", b);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is the largest", b);
        }
        else
        {
            printf("%d is the largest", c);
        }
    }

    // now using ternary operator...
    int largest = a > b ? a > c ? a : c : b > c ? b : c;
    printf("\n%d is the largest", largest);

    // Now using logical operators...
    if(a > b && a > c) {
        printf("\n%d is the largest", a);
    } else if(b > a && b > c) {
        printf("\n%d is the largest", b);
    } else {
        printf("\n%d is the largest", c);
    }

    return 0;
}