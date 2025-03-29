#include <stdio.h>

int main ()
{
    int arr[5] = {1, 1, 2, 3, 3};

    for (int i = 0; i < 5; i += 2){
        if (arr[i] != arr[i + 1] ){
                printf("%d\n", arr[i]);
                break;
            }
        }
            
}
