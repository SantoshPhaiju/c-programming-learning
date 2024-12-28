#include <stdio.h>

int mul(int x, int y);

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int result = mul(x, y);
    printf("The result is %d\n", result);

    return 0;
}

int mul(int x, int y) {
    return x * y;
}