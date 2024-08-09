#include <stdio.h>
#include <stdbool.h>

int main()
{

    int a = 5, b = 6;

    // char c[10] = a > b ? 'true' : 'false';

    bool mybool = false;
    printf("%d\n", mybool);

    printf("%s", a > b ? "true" : "false");

    int hehe = a > b ? 5 : a < b ? 6
                                 : 7;
    if (a > b)
    {
        hehe = 5;
    }
    else
    {
        if (a < b)
        {
            hehe = 6;
        }
        else
        {
            hehe = 7;
        }
    }


    float unit_price = 10.0, dis1 = 0.05, dis2 = 0.1, dis3 = 0.15, total_price;

    int qty = 11;

    total_price = qty * unit_price * (qty > 10 ? 1.0 - dis3 : qty > 5 ? 1.0 - dis2 : qty > 1.0 ? 1.0 - dis1 : 1.0);

    printf("\nThe total price is %.2f", total_price);

    return 0;
}