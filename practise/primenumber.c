#include <stdio.h>


int main() {

    int num, isPrime = 0;
    printf("Enter the number to find whether the number is prime or not: ");
    scanf("%d", &num);

    if(num == 0 || num == 1) {
        printf("%d is neither prime nor composite", num);
    }

    for (int i = 2; i <= num / 2; i++)
    {
       if(num % i == 0){
        isPrime = 0;
        break;
       }
    }

    if(isPrime == 0){
        printf("%d is a composite number", num);
    }else {
        printf("%d is a prime number", num);
    }
    


    return 0;
}