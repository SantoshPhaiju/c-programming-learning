// 26) WAP to read four digit no. & print the sum of each digit. use for loop

#include <stdio.h>

int main() {
    int num;
    printf("Enter a 4 digit number: ");
    scanf("%d", &num);
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}