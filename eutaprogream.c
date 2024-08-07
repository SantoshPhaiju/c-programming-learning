#include <stdio.h>

int main()
{

    // WAP to add 2 numbers using following datatypes:
    // int, short int, unsigned int, long int, float, double, long double

    int a, b;
    short int c, d;
    unsigned int e, f;
    long int g, h;
    float i, j;
    double k, l;
    long double m, n;

    printf("Enter two int numbers: \n");
    scanf("%d %d", &a, &b);
    int sum1 = a + b;
    printf("The sum of the numbers is: %d\n", sum1);

    printf("Enter two short int numbers: \n");
    scanf("%hd %hd", &c, &d);
    short int sum2 = c + d;
    printf("The sum of the numbers is: %hd\n", sum2);

    printf("Enter two unsigned int numbers: \n");
    scanf("%u %u", &e, &f);
    unsigned int sum3 = e + f;
    printf("The sum of the numbers is: %u\n", sum3);

    printf("Enter two long int numbers: \n");
    scanf("%ld %ld", &g, &h);
    long int sum4 = g + h;
    printf("The sum of the numbers is: %ld\n", sum4);

    printf("Enter two float numbers: \n");
    scanf("%f %f", &i, &j);
    float sum5 = i + j;
    printf("The sum of the numbers is: %.2f\n", sum5);

    printf("Enter two double numbers: \n");
    scanf("%lf %lf", &k, &l);
    double sum6 = k + l;
    printf("The sum of the numbers is: %.2lf\n", sum6);

    printf("Enter two long double numbers: \n");
    scanf("%Lf %Lf", &m, &n);
    long double sum7 = m + n;
    printf("The sum of the numbers is: %.2Lf\n", sum7);

    return 0;
}