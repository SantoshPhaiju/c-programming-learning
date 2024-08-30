#include <stdio.h>

// 16) print all even numbers from 1 to 100 using a for loop

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}