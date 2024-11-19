#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch;
    FILE *fp;

    fp = fopen("newfile.txt", "w");

    printf("Enter text to insert in file:- ");
    if (fp == NULL)
    {
        printf("\nError opening the file.\n");
        exit(1);
    }

    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fclose(fp);

    fp = fopen("newfile.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c ", ch);
    }
    fclose(fp);

    return 0;
}