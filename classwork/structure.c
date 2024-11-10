#include <stdio.h>

struct Student
{
    char name[50];
    char phonenumber[20];
    char email[60];
    int roll_no;
    struct Address
    {
        char city[50];
        char district[50];
    } address;
} s[5];

int main()
{

    printf("Enter the details of 5 students: ");

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the name of the student %d: ", i + 1);
        scanf(" %[^\n]", s[i].name);

        printf("\nEnter the phonenumber of the student %d: ", i + 1);
        scanf(" %[^\n]", s[i].phonenumber);

        printf("\nEnter the email of the student %d: ", i + 1);
        scanf(" %[^\n]", s[i].email);

        printf("\nEnter the roll number of the student %d: ", i + 1);
        scanf(" %d", &s[i].roll_no);

        printf("\nEnter the city of the student %d: ", i + 1);
        scanf(" %[^\n]", s[i].address.city);

        printf("\nEnter the district of the student %d: ", i + 1);
        scanf(" %[^\n]", s[i].address.district);
    }

    printf("=============== Details of the Students ===================");
    for (int i = 0; i < 5; i++)
    {
        printf("\nName of Student %d: %s", i + 1, s[i].name);
        printf("\nPhone Number of Student %d: %s", i + 1, s[i].phonenumber);
        printf("\nEmail of Student %d: %s", i + 1, s[i].email);
        printf("\nRoll No of Student %d: %d", i + 1, s[i].roll_no);
        printf("\nCity of Student %d: %s", i + 1, s[i].address.city);
        printf("\nDistrict No of Student %d: %s", i + 1, s[i].address.district);
    }

    return 0;
}