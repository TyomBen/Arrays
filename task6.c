#include <stdio.h>

int main ()
{
    int arr[10] = {};
    int sumplus = 0;
    int summultiplication = 0;

    for (int i = 0; i < 10; ++i){
            printf("Write a number: ");
            scanf("%d", &arr[i]);
        }
    sumplus = arr[0];
    summultiplication = arr[0];
        
    for (int i = 1; i < 10; ++i){
            sumplus += arr[i];
            summultiplication *= arr[i];
        }

        printf("plus: %d\nmultiplication: %d\n", sumplus, summultiplication);
}


