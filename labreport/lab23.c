#include <stdio.h>

struct Employee
{
    char name[100];
    int salary;
    char address[100];
} emp[5];

int main()
{

    int highestSalaryIndex = 0, lowestSalaryIndex = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Name of Emp %d: ", i + 1);
        scanf(" %[^\n]", emp[i].name);
        printf("Enter Salary of Emp %d: ", i + 1);
        scanf("%d", &emp[i].salary);
        printf("Enter Address of Emp %d: ", i + 1);
        scanf(" %[^\n]", emp[i].address);
    }

    for (int i = 1; i < 5; i++)
    {
        if (emp[i].salary > emp[highestSalaryIndex].salary)
        {
            highestSalaryIndex = i;
        }
        if (emp[i].salary < emp[lowestSalaryIndex].salary)
        {
            lowestSalaryIndex = i;
        }
    }


    printf("\nEmployee with Highest Salary:\n");
    printf("Name: %s\n", emp[highestSalaryIndex].name);
    printf("Salary: %.2d\n", emp[highestSalaryIndex].salary);
    printf("Address: %s\n", emp[highestSalaryIndex].address);


    printf("\nEmployee with Lowest Salary:\n");
    printf("Name: %s\n", emp[lowestSalaryIndex].name);
    printf("Salary: %.2d\n", emp[lowestSalaryIndex].salary);
    printf("Address: %s\n", emp[lowestSalaryIndex].address);

    return 0;
}