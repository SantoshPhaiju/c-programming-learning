#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    // char phonenumber[20];
    char email[60];
    int roll_no;
    // struct Address
    // {
    //     char city[50];
    //     char district[50];
    // } address;
} s[5];

// Function to swap two Student structures
void swap(struct Student *a, struct Student *b)
{
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the array of students by name
void sortByName(struct Student s[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(s[j].name, s[j + 1].name) > 0)
            {
                swap(&s[j], &s[j + 1]);
            }
        }
    }
}

int main()
{
    printf("Enter the details of 5 students: ");

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the name of the student %d: ", i + 1);
        scanf(" %[^\n]", s[i].name);

        // printf("Enter the phonenumber of the student %d: ", i + 1);
        // scanf(" %[^\n]", s[i].phonenumber);

        printf("Enter the email of the student %d: ", i + 1);
        scanf(" %[^\n]", s[i].email);

        printf("Enter the roll number of the student %d: ", i + 1);
        scanf(" %d", &s[i].roll_no);

        // printf("Enter the city of the student %d: ", i + 1);
        // scanf(" %[^\n]", s[i].address.city);

        // printf("Enter the district of the student %d: ", i + 1);
        // scanf(" %[^\n]", s[i].address.district);
    }

    // Sort the students by name
    sortByName(s, 5);

    printf("\n=============== Details of the Students ===================");
    for (int i = 0; i < 5; i++)
    {
        printf("\nName of Student %d: %s", i + 1, s[i].name);
        // printf("\nPhone Number of Student %d: %s", i + 1, s[i].phonenumber);
        printf("\nEmail of Student %d: %s", i + 1, s[i].email);
        printf("\nRoll No of Student %d: %d", i + 1, s[i].roll_no);
        // printf("\nCity of Student %d: %s", i + 1, s[i].address.city);
        // printf("\nDistrict of Student %d: %s\n", i + 1, s[i].address.district);
    }

    return 0;
}
