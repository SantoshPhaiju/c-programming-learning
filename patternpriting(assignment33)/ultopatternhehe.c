#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        
        for (int k = 2; k <= i; k++)
        {
            printf("\t");
        }
        

        for (int j = 5; j >= i; j--)
        {
            printf("*\t");
        }
        printf("\n");
    }
}