#include <stdio.h>

int main ()
{
     int arr[10] = {};
 
     for(int i = 0; i < 10; ++i){
             printf("Write number: ");
              scanf("%d", &arr[i]);
          }
  
      int min = arr[0];
  
      for (int i = 1; i < 10; ++i){
              if (min > arr[i]){
                     min = arr[i];
                  }
          }
  
          printf("The max number among numbers is %d\n", min); 
 }

