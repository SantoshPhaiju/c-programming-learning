#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file, *tempFile;
    char filename[50], tempFilename[] = "temp.txt";
    char recordToDelete[100], currentRecord[100];
    int found = 0;

    // Input the file name
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Open a temporary file in write mode
    tempFile = fopen(tempFilename, "w");
    if (tempFile == NULL)
    {
        printf("Error: Could not create temporary file.\n");
        fclose(file);
        return 1;
    }

    // Input the record to delete
    printf("Enter the record to delete: ");
    getchar(); // To consume newline left by scanf
    fgets(recordToDelete, sizeof(recordToDelete), stdin);
    recordToDelete[strcspn(recordToDelete, "\n")] = '\0'; // Remove trailing newline

    // Read records from the original file
    while (fgets(currentRecord, sizeof(currentRecord), file))
    {
        currentRecord[strcspn(currentRecord, "\n")] = '\0'; // Remove trailing newline
        if (strcmp(currentRecord, recordToDelete) != 0)
        {
            // Write record to the temporary file if it doesn't match the record to delete
            fprintf(tempFile, "%s\n", currentRecord);
        }
        else
        {
            found = 1; // Mark that the record was found
        }
    }

    fclose(file);
    fclose(tempFile);

    // Replace the original file with the temporary file
    if (found)
    {
        remove(filename);
        rename(tempFilename, filename);
        printf("Record deleted successfully.\n");
    }
    else
    {
        remove(tempFilename);
        printf("Record not found in the file.\n");
    }

    return 0;
}
