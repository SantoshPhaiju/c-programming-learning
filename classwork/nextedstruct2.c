#include <stdio.h>

struct Student
{
    char name[50];
    int rollno;
    int marks[5];
    struct Address
    {
        char district[30];
        char zone[30];
    } addr;
} stu;

void printStructure(struct Student *student);

int main()
{

    printf("\nEnter the name of the student: ");
    scanf(" %[^\n]", stu.name);

    printf("Enter the roll number of the student: ");
    scanf("%d", &stu.rollno);

    printf("Enter the district of the student: ");
    scanf(" %[^\n]", stu.addr.district);

    printf("Enter the zone of the student: ");
    scanf(" %[^\n]", stu.addr.zone);

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of %d subject of the student: ", i + 1);
        scanf("%d", &stu.marks[i]);
    }

    printStructure(&stu);

    return 0;
}

void printStructure(struct Student *student)
{
    printf("\nDetails of the student:- ");
    printf("\nName:- %s", student->name);
    printf("\nAddress:- %s", student->addr.district);
    printf("\nZone:- %s", student->addr.zone);
    printf("\nRollNo:- %d", student->rollno);
    for (int i = 0; i < 5; i++)
    {
        printf("\nMark of %d subject = %d", i + 1, student->marks[i]);
    }

    printf("\n------------------- the end ---------------------");
}