#include <stdio.h>

int main ()
   {
       char arr[4];
  
       for (int i = 0; i < 4; ++i){
               scanf("%c", &arr[i]);
          }
 
       for (int i = 4; i >= 0; --i){
              printf("%c", arr[i]);
          }
        printf("\n");  
  }

