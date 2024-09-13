#include <stdio.h>


int main() {


    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    arr[0][0] = 100;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("The value of arr[%d][%d] is %d \n", i, j, arr[i][j]);
        }
    }
    


    return 0;
}