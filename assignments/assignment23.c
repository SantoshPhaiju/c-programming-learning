// 23) WAP to read a number and display the multiplication table of that number.

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number to find the table of:- \n");
    scanf("%d", &number);

    for ( int i = 1; i <= 10; i++){
        printf("%d * %d = %d \n", number, i, number * i);
    }


    return 0;
}