// 22)  WAP which displays the average & sum of nth no input by the user.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d numbers is %d\n", n, sum);
    printf("Average of first %d numbers is %f\n", n, (float)sum / n);
    return 0;
}