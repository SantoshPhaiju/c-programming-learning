// finding sum from array element provided by the user.

#include <stdio.h>

#define SIZE 50

int main()
{
    int arr[SIZE], num, sum = 0;

    printf("Enter the number of element you want to enter:- \n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter the array element %d:- ", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("\n\n The sum of all the elements of your array is:- %d", sum);

    return 0;
}

// #include <stdio.h>
// #define SIZE 50

// int main()
// {
//     int arr[SIZE], num, valid_input = 0;

//     while (!valid_input)
//     {
//         printf("Enter the number of element you want to enter:- \n");
//         scanf("%d", &num);

//         if (num > 50)
//         {
//             valid_input = 0;
//             printf("\n Invalid input\n");
//         }
//         else
//         {
//             valid_input = 1;
//         }
//     }

//     for (int i = 0; i < num; i++)
//     {
//         printf("Enter the array element %d:- ", i);
//         scanf("%d", &arr[i]);
//     }

//     int max = arr[0];
//     int min = arr[0];

//     // find max and min numbers:-
//     for (int i = 1; i < num; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }

//     printf("\nmax is:- %d", max);
//     printf("\nmin is:- %d", min);

//     return 0;
// }