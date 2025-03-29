#include <stdio.h>

int main ()
{
    int arr[5] = {};
    int count = 1;
    for (int i = 0; i < 5; ++i){
            printf("Enter a number: ");
            scanf("%d", &arr[i]);
        }

    for (int i = 0; i < 5; ++i){
            if (arr[i] > arr[i + 1]){
                    ++count;
                }
        }

        if (count == 5){
                printf("YES\n");
            }else {
                printf("NO\n");
                }
}        
