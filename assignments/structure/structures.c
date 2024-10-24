#include <stdio.h>

struct student
{
    char name[20];
    int roll_no;
} student1, student2;


int main() {

    printf("Enter the name of the first student:- ");
    scanf("%s", student1.name);
    printf("Enter the roll number of the first student:- ");
    scanf("%d", &student1.roll_no);

    printf("Enter the name of the second student:- ");
    scanf("%s", student2.name);
    printf("Enter the roll number of the second student:- ");
    scanf("%d", &student2.roll_no);

    printf("\nDetails of the first student:-\nName:- %s\nRoll Number:- %d", student1.name, student1.roll_no);
    printf("\nDetails of the second student:-\nName:- %s\nRoll Number:- %d", student2.name, student2.roll_no);
    

    return 0;
}