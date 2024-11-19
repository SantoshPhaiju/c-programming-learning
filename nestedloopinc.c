#include <stdio.h>

// Here we go for nested loop in c programming...

int main()
{

    // Pattern priting
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    // ! Yo chai nested loop ko example ho la...
    // Nested loop vaneko euta loop ko vitra aarko multiple loop hunxa vaney teslai nested loop vaniyo just like it...
    // for ko vitra multiple for loop ni aauna paiyo for(){ for(){} for(){for(){}}}
    // 😷 yo maathi ko jasto ni huna paiyo haita        👆 yo jastei

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}