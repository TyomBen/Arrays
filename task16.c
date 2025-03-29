#include <stdio.h>

int main ()
{
    int arr1[5] = {1, 2, 3, 4};
    int arr2[5] = {2, 2, 3, 4};
    
    int flag = 0;

    for (int i = 0; i < 5; ++i){
            if (arr1[i] == arr2[i]){
                    ++flag;
                }else {
                    printf("Nah\n");
                    break;
                      }
        }

        if (flag == 5){
                printf("Ok\n");
            }
}
