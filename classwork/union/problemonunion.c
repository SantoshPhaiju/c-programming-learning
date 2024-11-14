#include <stdio.h>

struct person
{
    int ptype;
    char name[50];
    char address[50];
    char mobile[20];
    union
    {
        struct
        {
            char specialization[50];
        } teacher;

        struct
        {
            char course[50];
        } student;
    } person;
};

void printDetails(struct person *p)
{
    if (p->ptype == 1)
    {
        printf("\nTeacher Details: ");
        printf("\nName:- %s", p->name);
        printf("\nAddress:- %s", p->address);
        printf("\nMobile:- %s", p->mobile);
        printf("\nName:- %s", p->person.teacher.specialization);
    }
    else
    {
        printf("\nStudent Details: ");
        printf("\nName:- %s", p->name);
        printf("\nAddress:- %s", p->address);
        printf("\nMobile:- %s", p->mobile);
        printf("\nName:- %s", p->person.student.course);
    }
}

int main()
{
    struct person p;
    printf("Enter 1 for Teacher and 2 for Student:- ");
    scanf("%d", &p.ptype);

    if (p.ptype != 1 && p.ptype != 2)
    {
        printf("Invalid input!!!");
        return 0;
    }

    if (p.ptype == 1)
    {
        printf("Enter the name of teacher:- ");
        scanf(" %[^\n]", p.name);

        printf("Enter the address of teacher:- ");
        scanf(" %[^\n]", p.address);

        printf("Enter the mobile number of teacher:- ");
        scanf(" %[^\n]", p.mobile);

        printf("Enter the specialization of teacher:- ");
        scanf(" %[^\n]", p.person.teacher.specialization);
    }
    else
    {
        printf("Enter the name of student:- ");
        scanf(" %[^\n]", p.name);

        printf("Enter the address of student:- ");
        scanf(" %[^\n]", p.address);

        printf("Enter the mobile number of student:- ");
        scanf(" %[^\n]", p.mobile);

        printf("Enter the course of student:- ");
        scanf(" %[^\n]", p.person.student.course);
    }

    printDetails(&p);

    return 0;
}