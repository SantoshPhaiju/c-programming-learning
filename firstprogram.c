#include <stdio.h>

int main()
{

    int inches, feet;
    printf("size = %lu \n", sizeof(int));

    feet = 12;
    inches = 12 * feet;

    printf("%d feet\n", feet);
    printf("%d inches", inches);

    printf("\n%d feet = %d inches", feet, inches);

    printf("Enter the value of feet: \n");
    scanf("%d", &feet);

    int yourinch = feet * 12;

    printf("The value of %d feet in inches is %d inches ", feet, yourinch);

    return 0;
}