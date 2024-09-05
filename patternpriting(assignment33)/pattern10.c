// A
// A B
// A B C
// A B C D
// A B C D E

#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {

                printf("%s ", "A");
            }
            if(j == 2){
                printf("%s ", "B");
            }
            if (j == 3)
            {
                printf("%s ", "C");
            }
            if (j == 4)
            {
                printf("%s ", "D");
            }
            if (j == 5)
            {
                printf("%s ", "E");
            }
        }
        printf("\n");
    }

    return 0;
}