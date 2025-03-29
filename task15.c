#include <stdio.h>

int main ()
{
    int arr[5] = {};

    for (int i = 0; i < 5; ++i){
            printf("Write a number: ");
            scanf("%d", &arr[i]);
        }

    for (int i = 0; i < 5; ++i){

            if (arr[i] % 2 == 0){
                 printf("%d\n", arr[i]);
                } 
        }
        

    for (int i = 0; i < 5; ++i){
        if (arr[i] % 2 != 0){    
            printf("%d\n", arr[i]);
           }
        }
}
