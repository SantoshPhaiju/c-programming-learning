#include <stdio.h>
#include <stdlib.h>

// name, rollno, marks

struct Student
{
    char name[50];
    int rollno;
    float marks;
};

int main()
{
    FILE *fp;
    struct Student student_1 = {"Santosh", 12, 12.232323};
    int chars;

    // printf("Enter the name of the student: ");
    // scanf("%[^\n]", name);
    // printf("Enter the roll_no of the student: ");
    // scanf("%d", &rollno);
    // printf("Enter the marks of CS of the student: ");
    // scanf("%f", &marks);

    fp = fopen("studentsdata.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    // fprintf(fp, "Name: %s\nRoll No: %d\nMarks in CS: %.2f", student_1.name, student_1.rollno, student_1.marks);
    chars = fwrite(&student_1, sizeof(student_1), 1, fp);
    printf("Written %d structure in file", chars);

    fclose(fp);

    fp = fopen("studentsdata.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    fread(&student_1, sizeof(student_1), 1, fp);
    fclose(fp);

    // fscanf(fp, "Name: %[^\n]\n", student_1.name);
    // fscanf(fp, "Roll No: %d\n", &student_1.rollno);
    // fscanf(fp, "Marks in CS: %f\n", &student_1.marks);
    // fclose(fp);

    // // Display the read data
    printf("\nData read from the file:\n");
    printf("\nName\t\tRoll\t\tMarks in Cs");
    printf("\n%s\t\t%d\t\t%.2f", student_1.name, student_1.rollno, student_1.marks);

    return 0;
}