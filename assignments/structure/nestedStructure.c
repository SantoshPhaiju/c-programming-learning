#include <stdio.h>

int main()
{

    struct address
    {
        char city[20];
        char state[20];
        int pincode;
    };

    struct student
    {
        char name[20];
        int roll_no;
        struct address addr;
        struct details
        {
            char phoneNumber[12];
            char email[50];
        } details;
    } s1;

    printf("Enter the name of the student:- ");
    scanf(" %s", s1.name);
    printf("Enter the roll number of the student:- ");
    scanf("%d", &s1.roll_no);
    printf("Enter the city of the student:- ");
    scanf(" %s", s1.addr.city);
    printf("Enter the state of the student:- ");
    scanf(" %s", s1.addr.state);
    printf("Enter the pincode of the student:- ");
    scanf("%d", &s1.addr.pincode);
    printf("Enter the phone number of the student:- ");
    scanf(" %s", s1.details.phoneNumber);
    printf("Enter the email of the student:- ");
    fgets(s1.details.email, 50, stdin);

    printf("\nDetails of the student are:-\nName:- %s\nRoll Number:- %d\nCity:- %s\nState:- %s\nPincode:- %d\nPhone Number:- %s\nEmail:- %s", s1.name, s1.roll_no, s1.addr.city, s1.addr.state, s1.addr.pincode, s1.details.phoneNumber, s1.details.email);


    return 0;
}