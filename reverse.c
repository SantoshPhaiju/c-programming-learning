#include <stdio.h>

int main() {

    int num, reversedNumber = 1;
    printf("Enter a number:- \n");
    scanf("%d", &num);

    while(num != 0) {
        int remainder = num % 10;
        if(reversedNumber == 1) {
            reversedNumber = remainder;
        } else {
            reversedNumber = reversedNumber * 10 + remainder;
        }
        num /= 10;
    }

    printf("Reversed number is %d\n", reversedNumber);



    return 0;
}