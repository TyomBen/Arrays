#include <stdio.h>

int main ()
{
    int num = 0;
    int arr[10] = {};
    int flag = 1;

    for (int i = 0; i < 10; ++i){
            printf("Write numbers of array: ");
            scanf("%d", &arr[i]);
        }
     printf("Write a n: ");
     scanf("%d", &num);
        
     for (int i = 0; i < 10; ++i){
            if (arr[i] == num){
                    flag = 1;
                    break;
                   
                }else {
                  flag = 0;
                }
         }
         if (flag == 1){
                printf("YES\n");
             }else {
                printf("NO\n");
                 }
            
}
