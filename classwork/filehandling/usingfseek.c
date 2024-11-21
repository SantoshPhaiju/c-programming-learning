#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp;
    fp = fopen("stringfile.txt", "a+");

    if (fp == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    fprintf(fp, "%d", 1000);

    rewind(fp);

    char data1[10];
    char data2[10];
    char data3[10];
    char data4[10];

    

    fclose(fp);

    return 0;
}