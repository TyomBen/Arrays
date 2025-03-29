#include <stdio.h>

int main ()
{
    int array1[10] = {};
    int array2[10] = {};
    int result = 0;
    for (int i = 0; i < 10; ++i){
            printf("Write number: ");
            scanf("%d", &array1[i]);
        }
    for (int i = 0; i < 10; ++i){
            printf("Write second number: ");
            scanf("%d", &array2[i]);
        }

     for (int i = 0; i < 10; ++i){
           if (array1[i] == array2[i]){
                   result = array1[i] * array2[i];
                   printf("%d\n", result);
               }else {
                    printf("There is no\n");
                   }
            } 
}

