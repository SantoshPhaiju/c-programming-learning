#include <stdio.h>

int main()
{

    struct student
    {
        char name[20];
        int roll_no;
        char phoneNumber[10];
    } s[5];

    printf("Enter the details of 5 students:-\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of the student:- ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Enter the roll number of the student:- ");
        scanf(" %d", &s[i].roll_no);
        printf("Enter the phone number of the student:- ");
        fgets(s[i].phoneNumber, sizeof(s[i].phoneNumber), stdin);
        fgets(s[i].phoneNumber, sizeof(s[i].phoneNumber), stdin);
    }

    printf("\nDetails of the students are:-\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nName:- %s\nRoll Number:- %d\nPhone Number:- %s", s[i].name, s[i].roll_no, s[i].phoneNumber);
    }

    return 0;
}