#include <stdio.h>

void main()
{
    int days[7] = {1, 2, 3, 4, 5, 6, 7};

    int usrInput;
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &usrInput);

    switch (usrInput)
    {
    case 1:
        printf("Sunday");
        break;

    case 2:
        printf("Monday");
        break;

    case 3:
        printf("Tuesday");
        break;

    case 4:
        printf("Wednesday");
        break;

    case 5:
        printf("Thursday");
        break;

    case 6:
        printf("Friday");
        break;

    case 7:
        printf("Saturday");
        break;

    default:
        printf("Invalid day");
        break;
    } // end of switch
}