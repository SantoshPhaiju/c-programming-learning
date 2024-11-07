#include <stdio.h>

struct Employee
{
    char name[30];
    int id;
    struct Address
    {
        char district[20];
        char zone[20];
    } addr;
    struct Details
    {
        char phoneNumber[12];
        char email[50];
    } details;
} e1;


int main() {

    printf("Enter the name of the employee:- ");
    fgets(e1.name, 30, stdin);
    printf("Enter the id of the employee:- ");
    scanf("%d", &e1.id);

    while (getchar() != '\n')
        ;

    printf("Enter the district of the employee:- ");
    fgets(e1.addr.district, 20, stdin);
    printf("Enter the zone of the employee:- ");
    fgets(e1.addr.zone, 20, stdin);
    printf("Enter the phone number of the employee:- ");
    fgets(e1.details.phoneNumber, 12, stdin);
    printf("Enter the email of the employee:- ");
    fgets(e1.details.email, 50, stdin);

    printf("\nDetails of the employee:-");
    printf("\nName: %s", e1.name);
    printf("\nID: %d", e1.id);
    printf("\nDistrict: %s", e1.addr.district);

    printf("\nZone: %s", e1.addr.zone);
    printf("\nPhone Number: %s", e1.details.phoneNumber);
    printf("\nEmail: %s", e1.details.email);

    


    return 0;
}



