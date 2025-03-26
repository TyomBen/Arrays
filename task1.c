#include <stdio.h>

int main ()
{
    int arr[10] = {};

    for(int i = 0; i < 10; ++i){
            printf("Write number: ");
            scanf("%d", &arr[i]);
        }

    int max = arr[0];
        
    for (int i = 1; i < 10; ++i){
            if (max < arr[i]){
                    max = arr[i];
                }
        }

        printf("The max number among numbers is %d\n", max);

}
