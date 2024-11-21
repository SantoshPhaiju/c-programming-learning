#include <stdio.h>
#include <stdlib.h>

// name, rollno, marks

int main()
{
    FILE *fp;
    char name[50];
    int rollno, chars;
    float marks;

    printf("Enter the name of the student: ");
    scanf(" %[^\n]", name);
    printf("Enter the roll_no of the student: ");
    scanf("%d", &rollno);
    printf("Enter the marks of CS of the student: ");
    scanf("%f", &marks);

    fp = fopen("studentdata.dat", "wb");
    if (fp == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    fprintf(fp, "Name: %s\nRoll No: %d\nMarks in CS: %.2f", name, rollno, marks);
    fclose(fp);

    fp = fopen("studentdata.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    fscanf(fp, "Name: %[^\n]\n", name);
    fscanf(fp, "Roll No: %d\n", &rollno);
    fscanf(fp, "Marks in CS: %f\n", &marks);
    fclose(fp);

    // Display the read data
    printf("\nData read from the file:\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", rollno);
    printf("Marks in CS: %.2f\n", marks);

    return 0;
}