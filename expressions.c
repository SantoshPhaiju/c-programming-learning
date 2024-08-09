#include <stdio.h>

int main()
{

    int a = 1, b = 2, c = 3, d = 4;

    int firstExp = a * b / c;
    int secondExp = a * b % c + 1;
    int thirdExp = ++a * b - c--;
    int fourthExp = 7 - -b * ++d;

    printf("first %d\n", firstExp);
    printf("second %d\n", secondExp);
    printf("third %d\n", thirdExp);
    printf("fourth %d\n", fourthExp);

    printf("%d\n", 2 % 3);

    int hehe = 3;

    // normal
    // * hehe
    // ! error hehe
    // TODO: ma paxi garxu yo hehe
    //  ? tmro bajey

    printf("%d\n", hehe--);
    printf("%d\n", hehe);

    if (5 == '5')
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    // what is this man ??
    int myexp = 5 + 5 * 5;
    printf("%d\n", myexp);

    


    return 0;
}