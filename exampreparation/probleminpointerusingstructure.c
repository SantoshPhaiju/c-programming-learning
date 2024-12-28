#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee
{
    int id;
    char name[100];
    char address[100];
} employees[25];

void sortEmployees(struct Employee *emp, int n);

int main()
{
    int n = 5;

    printf("Enter the details of %d employees: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Id: ");
        scanf("%d", &(employees + i)->id);

        printf("Name: ");
        scanf(" %[^\n]", (employees + i)->name);

        printf("Address: ");
        scanf(" %[^\n]", (employees + i)->address);
    }

    sortEmployees(employees, n);

    printf("Details of the sorted employees: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nId: %d, \tName: %s, \tAddress: %s ", employees[i].id, employees[i].name, employees[i].address);
    }

    return 0;
}

void sortEmployees(struct Employee *emp, int n)
{
    struct Employee temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp((emp + i)->name, (emp + j)->name) > 0)
            {
                temp = *(emp + i);
                *(emp + i) = *(emp + j);
                *(emp + j) = temp;
            }
        }
    }
}
