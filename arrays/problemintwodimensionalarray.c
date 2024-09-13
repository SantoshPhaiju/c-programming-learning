#include <stdio.h>

int main() {

    int arr[3][3];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the value of arr[%d][%d]: \n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The elements of the array are: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("The value of arr[%d][%d] is %d \n", i, j, arr[i][j]);
        }
    }


    return 0;
}