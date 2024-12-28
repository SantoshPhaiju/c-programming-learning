#include <stdio.h>

int main()
{
    // * Chapter Seven HeHe
    printf("Learning about the array's in c programming here okey dokey hehe!!!");

    // * Array is a sequence of data items that are:-
    // - all of the same kind
    // - indexible
    // - stored contiguously in memory

    // ? One Dimensional Array HEHE:-
    int a[5] = {1, 2, 3, 4, 5};

    printf("\n %d", a[2]);

    int grade[3];

    grade[0] = 50;
    grade[1] = 90;
    grade[2] = 40;

    printf("\nThe first grade is %d ", grade[0]);
    printf("\nThe second grade is %d ", grade[1]);
    printf("\nThe third grade is %d ", grade[2]);

    return 0;
}