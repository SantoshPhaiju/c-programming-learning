#include <stdio.h>

int main()
{
    int *ptr;   // Declare a pointer
    int a = 30; // Initialize a variable

    ptr = &a; // Assign the address of 'a' to 'ptr'

    printf("Value of a is:  %d\n", *ptr);                  // Dereference 'ptr' to get the value of 'a'
    printf("Address of a is:  %lu\n", (unsigned long)ptr); // Print the address stored in 'ptr'
    printf("Address of a using a is: %lu\n", (unsigned long)&a);

    return 0;
}
