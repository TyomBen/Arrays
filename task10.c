#include <stdio.h>

int main ()
{
    int arr[10] = {};
    float sum = 0;

    for (int i = 0; i < 10; ++i){
            printf("Write a number");
            scanf("%d", &arr[i]);
        }

    for (int i = 1; i <= 10; ++i){
            sum += i;
        }
        printf("%f\n", (float)sum / 10);
}

