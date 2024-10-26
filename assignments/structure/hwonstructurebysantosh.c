// WAP to store student name, rollno, and address (district, zone) using structure. Here address is a different structure. Using concept of nested structure.

#include <stdio.h>

int main()
{
    // Method 2
    struct details
    {
        char phoneNumber[12];
        char email[50];
    };

    // Method 1
    struct student
    {
        char name[30];
        int roll_no;
        struct address
        {
            char district[20];
            char zone[20];
        } addr;
        struct details details;
    } s1;

    printf("Enter the name of the student:- ");
    fgets(s1.name, 30, stdin);
    printf("Enter the roll number of the student:- ");
    scanf("%d", &s1.roll_no);

    while (getchar() != '\n')
        ;

    printf("Enter the district of the student:- ");
    fgets(s1.addr.district, 20, stdin);
    printf("Enter the zone of the student:- ");
    fgets(s1.addr.zone, 20, stdin);
    printf("Enter the phone number of the student:- ");
    fgets(s1.details.phoneNumber, 12, stdin);
    printf("Enter the email of the student:- ");
    fgets(s1.details.email, 50, stdin);

    printf("\nDetails of the student:-");
    printf("\nName: %s", s1.name);
    printf("\nRoll Number: %d", s1.roll_no);
    printf("\nDistrict: %s", s1.addr.district);
    printf("\nZone: %s", s1.addr.zone);
    printf("\nPhone Number: %s", s1.details.phoneNumber);
    printf("\nEmail: %s", s1.details.email);

    return 0;
}
