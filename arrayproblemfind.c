#include <stdio.h>

int main() {

    int arr[] = {3, 4, 54, 44, 44, 34, 56 ,44};
    int non_duplicate[12];
    int count = 0;
    
    int length = sizeof arr / sizeof arr[0];

    for (int i = 0; i < length-1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if(arr[i] != arr[j]){
                non_duplicate[i] = arr[i];
            }
        }
        
    }
    

    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", non_duplicate[i]);
    }
    

    return 0;
}