#include <stdio.h>

int main()
{

    // logical operators
    // && || !

    // && - and
    // || - or
    // ! - not

    // Bitwise & Operator
    // bitwise operators in c
    // & operator used to perform bitwise AND operation between two integers.
    // | operator used to perform bitwise OR operation between two integers.
    // ^ operator used to perform bitwise XOR operation between two integers.
    // ~ operator used to perform bitwise NOT operation on a single integer.
    // << operator used to shift the bits of a number to the left.
    // >> operator used to shift the bits of a number to the right.

    int a = 7, b = 5;
    int result = a & b;
    // 7 -> 111
    // 5 -> 101
    // result => 101

    int result2 = a | b;
    // 7 -> 111
    // 5 -> 101
    // result => 111

    printf("%d", result);
    printf("\n");
    printf("%d", result2);

    return 0;
}