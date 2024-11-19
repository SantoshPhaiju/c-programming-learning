#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    FILE *fp;
    fp = fopen("file.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }

    printf("Press Ctrl+Z in DOS and Ctrl+D in Linux to stop writing more characters.\n\n");

    printf("Enter text:- ");

    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fclose(fp);
    printf("\nfile writing done:- ");

    fp = fopen("file.txt", "r");
    printf("\nThe content of the file is:- \n");

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c ", ch);
    }

    fclose(fp);

    return 0;
}