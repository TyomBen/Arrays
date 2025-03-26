#include <stdio.h>

int main () 
{
    int arr[10] = {};

    for (int i = 0; i < 10; ++i){
            printf("Write number: ");
            scanf("%d", &arr[i]);
        }
     int max = arr[0];
     int min = arr[0];

     for (int i = 1; i < 10; ++i){
            if (max < arr[i]){
                    max = arr[i];
                }else if (min > arr[i]) {
                    min = arr[i];
                    }
         }

         int result = max + min;

         printf("%d\n", result); 
}
