#include <stdio.h>
#include <string.h>

int main() {

    char str[100], rev[100];
    printf("Enter a string to find the reverse of:- ");
    gets(str);

    printf("%s", str);
    printf("length of str is %d\n", strlen(str));

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }

    printf("The reverse of the string is: %s", rev);
    

    return 0;
}