#include <stdio.h>

int main ()
{
    int arr[10] = {};
    int target = 0;
    int flag = 0;

    for(int i = 0; i < 10; ++i){
            printf("Write a number: ");
            scanf("%d", &arr[i]);
        }
        printf("Write a target: ");
        scanf("%d", &target);

    for (int i = 0; i < 10; ++i){
            if (arr[i] == target){
                    printf("%d\n", i);
                    break;
                }else if (i == 9 && flag == 1){
                    printf("%d\n", -1);
                }else {
                    flag = 1;     
                }
          
        }

        
}
