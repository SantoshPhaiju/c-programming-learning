#include <stdio.h>

char stringReverse (char string[10]);

int main() {

    char stringData[10];

    printf("Enter a string:- \n");
    scanf("%s", stringData);

    char mystr = stringReverse(stringData);


    return 0;
}

char stringReverse (char string[10]) {
    printf("mystring %s", string);
    return string[10];
}