#include <stdio.h>


int main() {

    char text[] = "UNIVERSITY";

    for (int i = 10; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", text[j]);
        }
        printf("\n");
    }
    


    return 0;
}