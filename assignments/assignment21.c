// 21) WAP that finds the sum of odd numbers from 0 to 100.(use do- while loop)
// i.e.sum = 1 + 3 +….+ 99


#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    do {
        sum += i;
        i += 2;
    } while (i <= 99);
    printf("Sum of odd numbers from 0 to 100 is %d\n", sum);
    return 0;
}