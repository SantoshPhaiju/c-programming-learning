#include <stdio.h>

int main()
{

    int my_array[5] = {1, 2, 3, 4, 5}, i;

    for (int i = 0; i < 5; i++)
    {
        printf("Value of a[%d]:- %d\t", i, *(my_array + i));
        printf("Address of a[%d]:- %u\n", i, my_array + i);
        // printf("Value of a[%d]:- %d\t", i, *(my_array + i));
        // printf("Address of a[%d]:- %lu\n", i, (unsigned long)my_array + i);
    }

    return 0;
}