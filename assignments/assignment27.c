// 27) WAP to read 3 digit no. & find sum of square of digits using loop

#include <stdio.h>

int main() {
    int num;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    printf("Sum of squares of digits: %d\n", sum);
    return 0;
}