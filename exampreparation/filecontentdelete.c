#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp, *temp;

    char filename[100];
    char temp_filename[100];

    char content[1000];
    int deleteLine = 0;

    printf("File: ");
    scanf("%s", filename);

    strcmp(temp_filename, "temp____");
    strcat(temp_filename, filename);

    printf("Delete Line: ");
    scanf("%d", &deleteLine);

    fp = fopen(filename, "r");
    temp = fopen(temp_filename, "w");

    if (fp == NULL)
    {
        printf("File not found\n");
        exit(1);
    }

    if(temp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    int keep_reading = 1;
    int current_line = 1;



    return 0;
}