#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[100];
    int rollno;
    char address[100];
} std;

int main()
{
    FILE *fp;
    printf("Enter the name of the student: ");
    scanf(" %[^\n]", std.name);
    printf("Enter the roll number of the student: ");
    scanf(" %d", &std.rollno);
    printf("Enter the address of the student: ");
    scanf(" %[^\n]", std.address);

    fp = fopen("studentlabdata.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening the file.");
        exit(1);
    }

    fwrite(&std, sizeof(struct Student), 1, fp);

    fclose(fp);

    fp = fopen("studentlabdata.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening the file.");
        exit(1);
    }

    printf("\nDisplaying student information from file:\n");
    fread(&std, sizeof(struct Student), 1, fp);
    printf("Name: %s\n", std.name);
    printf("Roll Number: %d\n", std.rollno);
    printf("Address: %s", std.address);

    return 0;
}