// Wap to store the name of fice students and display it in ascending order using function.

#include <stdio.h>
#include <string.h>

void sort(char names2[5][30]);

int main()
{

    char names[5][30], temp[30];

    printf("Enter the names of 5 students:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = 0; // Removing trailing newline
    }

    sort(names);
    for (int i = 0; i < 5; i++)
    {

        printf("\n%s", names[i]);
    }

    return 0;
}

void sort(char names[5][30])
{
    char temp[30];
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

}