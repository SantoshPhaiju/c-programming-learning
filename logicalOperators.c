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

    int result3 = a ^ b;
    // 7 -> 111
    // 5 -> 101
    // result => 010

    int result4 = ~a;
    // WE take 8 bits for complement form (n=-n+1)
    // 7 -> 00000111
    // result => 11111000
    // 00000111 +  1 => 00001000

    int result5 = b << 1; // b * 2^1
    // 5 -> 101
    // result => 1010 -> 10

    int result6 = a >> 1; // a / 2^1
    // 7 -> 00000111
    // result => 00000011 -> 3

    printf("%d", result);
    printf("\n");
    printf("%d", result2);
    printf("\n");
    printf("%d", result3);
    printf("\n");
    printf("%d", result4);
    printf("\n");
    printf("%d", result5);
    printf("\n");
    printf("%d", result6);
    printf("\n");

    return 0;
}