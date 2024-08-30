// 25) WAP to read a 3 digit no. and print each digit separately.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);
    int digit1 = num / 100;
    int digit2 = (num / 10) % 10;
    int digit3 = num % 10;
    printf("Digit 1: %d\n", digit1);
    printf("Digit 2: %d\n", digit2);
    printf("Digit 3: %d\n", digit3);
    return 0;
}