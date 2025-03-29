#include <stdio.h>

int main ()
{
    int arr[5] = {};
    int count = 0;

    for (int i = 0; i < 5; ++i){
            printf("Write a number: ");
            scanf("%d", &arr[i]);
        }

    for (int i = 0; i < 5; ++i){
            if (arr[i] % 2 != 0){
                    ++count;
                }
        }    

        printf("%d\n", count);
}
