// 24) WAP that reads two numbers x and y from user and calculates the value of x to the power y. (while loop, for loop)


#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the value of x and y:- \n");
    scanf("%d %d", &x, &y);

    int result = 1;

    for (int i = 1; i <= y; i++) {
        result = result * x;
    }

    printf("%d to the power of %d is %d", x, y, result);



    return 0;

}