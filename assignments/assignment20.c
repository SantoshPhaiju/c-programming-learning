// 20) WAP that prints the numbers from 201 to 300(use while loop, do while loop, for loop).

#include <stdio.h>

int main() {
    int i = 201;
    while (i <= 300) {
        printf("%d\n", i);
        i++;
    }

    i = 201;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 300);

    for (i = 201; i <= 300; i++) {
        printf("%d\n", i);
    }

    return 0;
}