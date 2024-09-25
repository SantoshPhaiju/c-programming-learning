#include <stdio.h>

int fibonacci(int num);

int main() {
    int num;
    printf("Enter number:- ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i));
    }
    

    return 0;
}

int fibonacci(int num) {
    if(num == 0 || num == 1) {
        return num;
    }else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}