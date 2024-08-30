// 17) print all odd and even numbers from 1 to 100 using a loop (Make use of modulus operator).

#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("Even - %d\n", i);
        } else {
            printf("Odd - %d\n", i);
        }
    }
    return 0;
}