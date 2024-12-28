#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char fileName[] = "test.txt";
    char fileContent[] = "Welcome to BCA program";

    fp = fopen(fileName, "w");
    if (fp == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    fputs(fileContent, fp);
    printf("File content written in the file");
    fclose(fp);

    return 0;
}