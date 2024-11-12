#include <stdio.h>

// name, address, rollno, 1 student

struct Student
{
    char name[40];
    char address[40];
    int rollno;
} student;

void printStructure(struct Student *student);

int main()
{

    printf("\nEnter the name of the student: ");
    scanf(" %[^\n]", student.name);

    printf("Enter the address of the student: ");
    scanf(" %[^\n]", student.address);

    printf("Enter the roll number of the student: ");
    scanf("%d", &student.rollno);

    printStructure(&student);

    return 0;
}

void printStructure(struct Student *student)
{
    printf("\nDetails of the student:- ");
    printf("\nName:- %s", student->name);
    printf("\nAddress:- %s", student->address);
    printf("\nRollNo:- %d", student->rollno);
}