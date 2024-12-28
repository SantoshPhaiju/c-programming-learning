#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int roll_no;
    char name[100];
    char address[100];
};

int main()
{
    struct Student s[5] = {
        {1, "Santosh Phaiju", "Kathmandu"},
        {2, "Leo Messi", "bidesh"},
        {3, "Sanat Kumar", "Kathmandu"},
        {4, "nothing", "nowhere"},
        {5, "somewhere", "Kathmandu"}};

    printf("Details of the student from Kathmandu: \n");
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(s[i].address, "Kathmandu") == 0)
        {
            printf("Roll_No: %d \tName: %s \tAddress: %s\n", s[i].roll_no, s[i].name, s[i].address);
        }
    }

    return 0;
}