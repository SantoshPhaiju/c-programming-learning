#include <stdio.h>
#include <stdlib.h>

char myname() {
    char name[50] = "santosh phaiju";
    return name;
}

int main()
{
    myname();

    FILE *fp;
    char str[50]; // Declare str as a character array
    fp = fopen("stringfile.txt", "w");

    if (fp == NULL)
    {
        printf("\nError opening the file.\n");
        exit(1);
    }

    printf("Enter text to insert in file: ");
    fgets(str, sizeof(str), stdin); // Read input into str
    fputs(str, fp);                 // Write str to file
    fclose(fp);

    fp = fopen("stringfile.txt", "r");
    if (fp == NULL)
    {
        printf("\nError opening the file for reading.\n");
        exit(1);
    }

    fgets(str, sizeof(str), fp);  // Read from file into str
    printf("File text: %s", str); // Print the content of the file
    fclose(fp);

    return 0;
}
