#include <stdio.h>

struct Student
{
    char name[100];
    int age;
    int rollno;
    char address[100];
    int marks[5];
} s[5];

int main()
{

    printf("Enter the details of the 5 students: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the details of %d student: ", i + 1);
        printf("\nEnter Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);

        printf("Enter rollno: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Address: ");
        scanf(" %[^\n]", s[i].address);

        printf("Enter marks for the 5 subjects of the student: ");
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &s[i].marks[j]);
        }
    }

    printf("\nDetails of the student: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("RollNo: %d\n", s[i].rollno);
        printf("Addresss: %s\n", s[i].address);
        printf("Marks of the 5 subjects: \n");
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", s[i].marks[j]);
        }
        printf("\n\n");
    }

    return 0;
}
