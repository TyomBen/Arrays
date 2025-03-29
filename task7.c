#include <stdio.h>

int main ()
{
    int arr[10] = {};

    for(int i = 0; i < 10; ++i){
            printf("Write a number: ");
            scanf("%d", &arr[i]);
        }

    for(int i = 0; i < 10; ++i){
        printf("%.1f\n", (float)arr[i] / 10);
        }

}
